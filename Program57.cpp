#include<iostream>
using namespace std;
//Program 57 to print the negative numbers of a list of 5 numbers: 3,2,-7,19,-18(-19 to -2) using FOR LOOP

int main()
{
  int w=-19;
  for(w; w<=-2;)
  {
    cout<<w<<endl;
    w+=4;
  }
  return 0;
}
