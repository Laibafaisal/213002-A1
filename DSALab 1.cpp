#include<iostream>
using namespace std;

int main(){
	char a;
	int x,y;
	do{

	cout<<"Enter two integers: ";
	cin>>x>>y;
	cout<<"The sum of the two numbers is: "<<x+y<<endl
		<<"The difference between them is: "<<x-y<<endl
		<<"Their product is: "<<x*y<<endl
		<<x <<" divided by "<<y<<" is: "<<x/y;
		
	if (x>y)
	cout<<x<<" is greater than "<<y<<endl;
	else if (x==y)
	cout<<"Both the numbers are equal."<<endl;
	else
	cout<<x<<" is smaller than "<<y<<endl;
	
	cout<<"Do you want to continue:";
	cin>>a;
	}while(a=='Y'|| a == 'y');
	
	for (int i=0; i<3; i++)
	{
		cout<<"Enter two integers: ";
	cin>>x>>y;
	cout<<"The sum of the two numbers is: "<<x+y<<endl
		<<"The difference between them is: "<<x-y<<endl
		<<"Their product is: "<<x*y<<endl
		<<x <<" divided by "<<y<<" is: "<<x/y<<endl;
		
	if (x>y)
	cout<<x<<" is greater than "<<y<<endl;
	else if (x==y)
	cout<<"Both the numbers are equal."<<endl;
	else
	cout<<x<<" is smaller than "<<y<<endl;
	
	}
	char choice,opt;
	int n1,n2;
	cout<<"This part of the code compares two integers."<<endl
		<<"Do you want to compare numbers?";
	cin>>choice;
	while(choice == 'y' || choice =='Y')
	{	
		cout<<"Enter two integers for comparison: ";
	cin>>n1>>n2;
	if (n1>n2)
	cout<<n1<<" is greater than "<<n2<<endl;
	else if (n1==n2)
	cout<<"Both the numbers are equal."<<endl;
	else
	cout<<n1<<" is smaller than "<<n2<<endl;
	cout<<"Do you want to compare more numbers?";
	cin>>opt;}
	
}
