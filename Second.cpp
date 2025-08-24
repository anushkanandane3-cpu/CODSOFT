#include<iostream>
using namespace std;

int main()
{
  double a,b;
  char ch;

  cout<<"Enter your first number =";
  cin>>a;

  cout<<"Enter operator from this (+,-,*,/):";
  cin>>ch;

  cout<<"Enter your second number=";
  cin>>b;

  if(ch=='+')
  {
    cout<<"Result ="<<a+b<<endl;
  }
  else if(ch=='-')
  {
    cout<<"Result ="<<a-b<<endl;
  }
  else if(ch=='*')
  {
    cout<<"Result ="<<a*b<<endl;
  }
  else if(ch=='/')
  {
    cout<<"Result ="<<a/b<<endl;
  }
  else
  {
    cout<<"please only use the operator given in bracket";
  }
  return 0;
}