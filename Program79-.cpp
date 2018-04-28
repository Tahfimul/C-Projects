#include<iostream>
#include<cmath>
using namespace std;
//Program79 to solve as many linear equations from input

int main()
{
  float a, b, x;
  cout<<"input for a & b"<<endl;
  cin>>a>>b;
  if(a==0)
    if(b==0)
      cout<<"All Solution";
    else
      cout<<"No Solution";
  else
  {
    cout<<"One Solution";
    x=(-1*b)/a;
    cout<<x;
  }
  return 0;
}
