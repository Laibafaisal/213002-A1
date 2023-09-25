#include<iostream>
using namespace std;

class student{
	string name;
	int rn;
	int marks;
};

int main(){
      student s1;
	  cout<<"Enter the following details about the student: "<<endl
	  	<<"Name: ";
	getline(cin,s1.name);
	cout<<"Roll number: ";
	cin>>s1.rn;
	cout<<"Marks obtained: ";
	cin>>s1.marks;
	
	}
