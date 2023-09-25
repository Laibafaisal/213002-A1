//213002_Laiba Faisal
#include<iostream>
#include<fstream>
using namespace std;

int addition (int,int);
int subtraction(int, int);
int multiplication(int, int);
double division(int,int);
int mod(int,int);


int main()
{
	int a,b;
	cout<<"Welcome!"<<endl;
	char option;
	ofstream output;
    output.open("Calculator.txt");
	do{
	cout<<"Please select either of the following options: "<<endl;
	cout<<"1 - Addition"<<endl
	    <<"2 - Subtraction"<<endl
	    <<"3 - Multiplication"<<endl
	    <<"4 - Mod"<<endl
	    <<"5 - Division"<<endl
	    <<"E - Exit"<<endl
	    <<"Enter your choice: "<<endl;
	cin>>option;
	switch(option)
	{
		case '1': 
	             {
					cout<<"Enter first integer: ";
	                cin>>a;
	                cout<<"Enter second integer: ";
	                cin>>b;
	                system("cls");
	                cout<<"The sum of "<<a<<" and "<<b<<" is: "<<addition(a,b)<<endl;
			        output<<a<<" + "<<b<<" = "<<addition(a,b)<<endl;
			        break;
		         }
		case '2': 
		         {
		         	cout<<"Enter first integer: ";
	                cin>>a;
	                cout<<"Enter second integer: ";
	                cin>>b;
		         	cout<<"Difference between the two numbers is: "<<subtraction(a,b)<<endl;
		         	output<<a<<" - "<<b<<" = "<<subtraction(a,b)<<endl;
			        break;
		         }
		case '3':
			     {
			     	cout<<"Enter first integer: ";
	                cin>>a;
	                cout<<"Enter second integer: ";
	                cin>>b;
			     	cout<<"Product of the two numbers is: "<<multiplication(a,b)<<endl;
			     	output<<a<<" * "<<b<<" = "<<multiplication(a,b)<<endl;
			     	break;
				 }
		case '4':
			     {
			     	cout<<"Enter first integer: ";
	                cin>>a;
	                cout<<"Enter second integer: ";
                	cin>>b;
			     	cout<<"Remainder of "<<a<<"/"<<b<<" is: "<<mod(a,b)<<endl; 
			     	output<<"Remainder of "<<a<<" / "<<b<<" = "<<mod(a,b)<<endl;
			     	break;
				 }
		case '5':
			     {
			     	cout<<"Enter first integer: ";
	                cin>>a;
	                cout<<"Enter second integer: ";
	                cin>>b;
			     	cout<<a<<" divided by "<<b<<" is: "<<division(b,a)<<endl;
			     	output<<a<<" / "<<b<<" = "<<division(b,a)<<endl;
			     	break;
				 }
		case 'E':
			     {
			     	cout<<"Thanks for using this program!"<<endl
			     	    <<"Have a good day!"<<endl
			     	    <<"Bye!"<<endl;
			        break;
				 }
		default: 
		         {
                  cout<<"Sorry! Invalid entry!"
                      <<"Bye!"<<endl;
		         }
	}//switch 
	}//do bracket
	while (option!='E');
	
return 0;	    
}


//FUNCTIONS:
int addition(int x, int y)
{  
   return x+y;
   
}

int subtraction(int x, int y)
{
	return x-y;
}

double division(int x, int y)
{
	return static_cast<double>(y)/x;
}

int multiplication(int x, int y)
{
	return x*y;
}

int mod(int x, int y)
{ 
	return x%y;
}

