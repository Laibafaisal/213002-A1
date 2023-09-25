#include<iostream>
using namespace std;
int main()
{
	double num1,num2,result;
	char operation;
	cout<<"Enter a number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	cout<<"Choose either of the following: "<<endl;
	cout<<" A- for addition;"<<endl;
	cout<<" S- for subtraction;"<<endl;
	cout<<" M- for multiplication;"<<endl;
	cout<<" D- for division;"<<endl;
	cin>>operation;
	if (operation=='a'||operation=='A')
	{
		result=num1+num2;
		cout<<"Adding "<<num1<<" and "<<num2<<" gives us "<<result<<"."<<endl;
	}
	else if(operation=='S'||operation=='s')
	{ 
	  result=num1-num2;
	  cout<<"Subtracting "<<num2<<" from "<<num1<<" give us "<<result<<"."<<endl;
	}
	else if(operation=='m'||operation=='M')
	{
		result=num1*num2;
		cout<<"The product of "<<num1<<" and "<<num2<<" gives us "<<result<<"."<<endl;
	}
	else if(operation=='d'||operation=='D')
	{
		result=num1/num2;
		cout<<"Dividing "<<num1<<" by "<<num2<<" gives us "<<result<<"."<<endl;
	}
}

