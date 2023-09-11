#include<iostream>
#include<conio.h>
using namespace std;



int main()
{
  int arr[7];
  int s,n=0;
  cout<<"Array_1 = ";
  for(int i=0; i<7; i++)
  {
      cin>>arr[i];
  }

  cout<<"\ninput a number to search: ";
  cin>>s;

  for(int i=0;i<7;i++)
  {
      if(s==arr[i])
        n++;
  }

  cout<<"\nThe number occurs "<<n<<" times in the array"<<endl;




    getch();
}
