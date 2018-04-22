#include<iostream>
using namespace std;
//Tahfimul Latif
//Program19
//To change scores to letter grade
//March 17, 2018
int main()
{
	int G;
	cout<<"Input your score in numerical form\n";
	cin>>G;

	if(G>=90)
		cout<<"Your grade is A\n";
	else if((80<=G)&&(G<90))
		cout<<"Your grade is B\n";
	else if((70<=G)&&(G<80))
		cout<<"Your grade is C\n";
	else if((60<=G)&&(G<70))
		cout<<"Your grade is D\n";
	else
		cout<<"Your grade is F\n";
}
