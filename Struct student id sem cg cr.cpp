#include<iostream>
#include<conio.h>
using namespace std;

struct Student
{
    int unique_id;
    int com_semester;
    int com_credit;
    double cgpa;
};

int main()
{
    struct Student s[15];
    int num=0;
    bool use[15]={0};

    for(int i=0; i<15; i++)
    {
        cout<<endl<<"Please enter the id of "<<(i+1)<<"th student: "<<endl<<endl;
        cout<<"enter student id: ";
        cin>>num;

        if(num>=0||num<15)
        {
            if(use[num]==false)
            {
                s[num].unique_id=num;
                use[num]=true;
                cout<<"enter completed semester: ";
                cin>>s[num].com_semester;
                cout<<"enter completed credit: ";
                cin>>s[num].com_credit;
                cout<<"enter cgpa: ";
                cin>>s[num].cgpa;
            }
            else{
                cout<<"student id already used"<<endl;
                i--;
            }
        }
        else
        {
            cout<<"Invalid id"<<endl;
            i--;
        }
    }

    cout<<endl<<"Students who have more than 3.50 cgpa: "<<endl;

    for(int i=1; i<=15; i++)
    {
        if(s[i].cgpa>3.50)
        {
            cout<<"Student id: "<<s[i].unique_id<<endl;
        }
    }

    cout<<endl<<"Students who have complete more than 50 credit"<<endl;

    for(int i=1; i<=15; i++)
    {
        if(s[i].com_credit>50)
        {
            cout<<"student id: "<<s[i].unique_id<<endl;

        }
    }

    cout<<endl<<"Student who have complete minimum 2 semesters and minimum 28 credits: "<<endl;

    for(int i=1; i<=15; i++)
    {
        if(s[i].com_semester>=2 && s[i].com_credit>=28)
        {
            cout<<"Student id: "<<s[i].unique_id<<endl;
        }
    }

    getch();
}
