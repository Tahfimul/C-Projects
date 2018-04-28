#include<iostream>
using namespace std;

int main() {
  int a, b, c, greater, greatest;
  std::cout << "Input three numbers" << '\n';
  std::cin >> a>>b>>c;
  if (a > b)
    greater = a;
  else
    greater = b;
  if(greater > c)
    greatest = greater;
  else
    greatest = c;
  std::cout << "The greatest integer is: " <<greatest<<'\n';
  return 0;
}
