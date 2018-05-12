#include<iostream>
using namespace std;
//Tahfimul Latif
//Program109
//Class
//May 12, 2018

class healthInfo
{
	public:
		string name;
		int score;
};

int main()
{
	healthInfo person;
	
	cout<<"Please enter the name of the person "<<endl;
	cin>>person.name;
	cout<<"Please enter the score of the person "<<endl;
	cin>>person.score;
	cout<<person.name<<"'s health score is "<<person.score<<endl;
}
