#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;

int priority (char alpha){
    if(alpha == '+' || alpha =='-')
        return 1;

    if(alpha == '*' || alpha =='/')
        return 2;

    return 0;
}

string convert(string infix)
{
    int i = 0;
    string postfix = "";

    stack <int>s;

    while(infix[i]!='\0')
    {
        if(infix[i]>='0' && infix[i]<='9')
        {
            postfix += infix[i];
            i++;
        }
        else if(infix[i]=='(')
        {
            s.push(infix[i]);
            i++;
        }
        else if(infix[i]==')')
        {
            while(s.top()!='(')
            {
                postfix += s.top();
                s.pop();
            }
            s.pop();
            i++;
        }
        else
        {
            while (!s.empty() && priority(infix[i]) <= priority(s.top()))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(infix[i]);
            i++;
        }
    }
    while(!s.empty())
    {
        postfix += s.top();
        s.pop();
    }


    cout << "Postfix expression is : " << postfix;
    return postfix;
}

int evaluatePostfixExpression(string exp)
{
    stack<int> st;

    for (int i = 0; i < exp.length(); i++){
        char c = exp[i];
        if (c >= '0' && c <= '9')
        {
            int temp = (int)(c - '0');
            st.push(temp);
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch(c)
            {
                case '+':
                    st.push(op2 + op1);
                    break;
                case '-':
                    st.push(op2 - op1);
                    break;
                case '*':
                    st.push(op2 * op1);
                    break;
                case '/':
                    st.push(op2 / op1);
                    break;
            }
        }
    }
    return st.top();
}


int main()
{
    cout<<"Task 1"<<endl;
    string infix;
    cout<<"Enter infix expression: ";
    cin>>infix;
    cout<<endl;

    string postfix;
    postfix = convert(infix);
    cout<<endl<<endl;
    cout<<"Task 2"<<endl;

    cout<<"Evaluate postfix algebraic expression: "<<evaluatePostfixExpression(postfix)<<endl;

    getch();
}
