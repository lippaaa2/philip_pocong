#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	 
	char name[200];
	char gender[300];
	char address[500];
	char birthdate[400];
	
	
	cout<<"enter your name "<<endl;
	cin.getline(name,200);
	
	cout<<"enter your gender "<<endl;
	cin.getline(name,300);
	
	cout<<"enter your address"<<endl;
    cin.getline(name,400);
	
	cout<<"enter your birthdate"<<endl;
	cin.getline(name,100);
	
	
	cout<<"your name is"<<name<<endl;	
	cout<<"you are a"<<gender<<endl;
	cout<<"your address"<<address<<endl;
	cout<<"your birthdate is"<<birthdate<<endl;
	
	
	
	return 0;
	
	
}

