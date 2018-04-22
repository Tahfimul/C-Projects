#include<iostream>
using namespace std;
//Tahfimul Latif
//Program#20
//To change scores to letter grade using switch statements
//March 24, 2018
int main()
{
		int G;
		cout<<"Input your score in numerical form";
		cin>>G;
		switch (G/10) {
			case 10:
				cout<<"Your grade is A\n";
    				break;
  			case 9:
    				cout<<"Your grade is A\n";
    				break;
  			case 8:
    				cout<<"Your grade is B\n";
  			case 7:
    				cout<<"Your grade is C\n";
  			case 6:
    				cout<<"Your grade is D\n";
  			default:
    				cout<<"Your grade is F\n";
		}
}
