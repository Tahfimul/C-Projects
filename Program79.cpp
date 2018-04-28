#include<iostream>
using namespace std;
//Tahfimul Latif
//Program79
//to count how many -7 exists in the list using Do While LOOP
//March 24, 2018
int main()
{
  int w=5, i[5], e=0, count = 0;
  do {
    if (w%2!=0) {
      e++;
      i[e] = w;
      if(i[e] == -7)
        count++;
    }

    w++;
  }while (w<=14);
  cout<<"\t   _____\n";
  cout<<"There are: "<<"| "<<count<<" | "<<" -7s on the list"<<endl;
  cout<<"\t   `````\n";
}
