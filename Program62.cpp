#include<iostream>
using namespace std;
//Program62 to count how many -7 exists in the list using FOR LOOP
int main()
{
  int w=5, i[5], e=0, count = 0;
  for (w; w<=14; w++) {
    if (w%2!=0) {
      i[e++] = w;
      if(i[e] == -7)
        count++;
    }
  }
  cout<<"\t   _____\n";
  cout<<"There are: "<<"| "<<count<<" | "<<" -7s on the list"<<endl;
  cout<<"\t   `````\n";
}
