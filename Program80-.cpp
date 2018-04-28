#include<iostream>
#include<cmath>
using namespace std;
//Program80 to solve any equation, even a no equation
int main()
{
  float a, b, c, d, X;
  int T=1,x,x1, x2, equationType;

  cout<<"Enter the equation type (Linear (1), Quadratic(2) or None(3)):\n";
  cin>>equationType;
  switch (equationType) {
    case 1:
      while (T!= 999) {
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
          X=(-1*b)/a;
          cout<<X;
        }
        cout<<"To end the program, enter 999";
        cin>>T;
      }
    case 2:
      while (T!= 999) {
        cout<<"Input values of a, b, c"<<endl;
        cin>>a>>b>>c;
        if(a == 0)
          if(b==0)
            if(c==0)
              cout<<"All solutions"<<endl;
            else
              cout<<"No Solution"<<endl;
          else
          {
            cout<<"Linear"<<endl;
            x=(-1)*c/b;
            cout<<x;
          }
        else
        {
          d = pow(b,2)-4*a*c;
          if(d>0)
          {
            cout<<"No Solution"<<endl;
            x1=(((-1)*b)+sqrt(d))/(2*a*c);
            x2=(((-1)*b)-sqrt(d))/(2*a*c);
            cout<<x1<<x2;
          }
          else
            if(d==0)
            {
              cout<<"Duplicate"<<endl;
              x = b/(2*a);
              cout<<x;
            }
            else
              cout<<"No Solution"<<endl;
            }
          cout<<"To end the program, enter 999";
          cin>>T;
        }
      case 3:
        char decision;
        cout<<"Do you want to solve any other equations? (Y/N)\n";
        cin>>decision;
        if(decision == 'Y')
          main();
        else
          cout<<"Program ended.\n";

  }


  return 0;
}
