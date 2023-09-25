#include<iostream>
using namespace std;
int main()
{    
    int choice;
	cout<<"1 - Addition"<<endl;
	cout<<"2 - Subtraction"<<endl;
	cout<<"3 - Multiplication"<<endl;
	cout<<"4 - Exit"<<endl;
	cin>>choice;
	while (choice>0&&choice<=4)
	{ 
	  cout<<"Valid input"<<endl;
	  cout<<"1 - Addition"<<endl;
	cout<<"2 - Subtraction"<<endl;
	cout<<"3 - Multiplication"<<endl;
	cout<<"4 - Exit"<<endl;
	cin>>choice;
	  if (choice==4)
	  {
	  	cout<<"Bye!"<<endl;
	  	exit(1);
	  }
	}
	if (choice<0||choice>4)
	{
		cout<<"Bye";
		exit(1);
	}
	
}

























