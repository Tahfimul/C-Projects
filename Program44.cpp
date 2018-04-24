#include<iostream>
using namespace std;
//Tahfimul Latif
//Program44
//to count how many -7 exists in the list
//March 24, 2018
int main()
{
  int w=5, i[5], e=0, count = 0;
  while (w<=14) {
    if (w%2!=0) {
      i[e++] = w;
      if(i[e] == -7)
        count++;
    }

    w++;
  }
  cout<<"\t   _____\n";
  cout<<"There are: "<<"| "<<count<<" | "<<" -7s on the list"<<endl;
  cout<<"\t   `````\n";
}
