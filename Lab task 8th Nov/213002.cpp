 #include<iostream>
using namespace std;
void calculator();
void addsub();
void sq();

int main()
{
	int opt;
	cout<<"Select an option: "<<endl;
	cout<<"1 for calculator\n2 for exit"<<endl;
	cin>>opt;
	if(opt==1)
	{
		calculator();
	}
	else if (opt==2)
	{
		exit(1);
	}
	else
	cout<<"Invalid choice! Bye!"<<endl;
	exit(1);	
}


void calculator()
{
	int ch;
	cout<<"choose an option: \n1  addition and subtraction\n2 square"<<endl;
	cin>>ch;
	if(ch==1)
	{
		addsub();
		
	}
	else if (ch==2)
	{
		sq();
	}
	else //input validation
	{
		while(ch<1||ch>2)
		{
			cout<<"Enter a valid choice: ";
			cin>>ch;
		}
		if(ch==1)
	    {
		addsub();
		
       	}
	    else 
	    {
		sq();
	    }
		
	}
	
	exit(1);
}


void addsub()
{
	int a,b;
	cout<<"Enter two numbers: "<<endl;
	cin>>a>>b;
	cout<<"a+b= "<<a+b<<endl;
	cout<<"a-b= "<<a-b<<endl;
}

void sq()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"The square of "<<x<<" is: "<<x*x;
}
