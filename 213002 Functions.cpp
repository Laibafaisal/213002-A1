#include<iostream>
using namespace std;

double division (double,double);

double addition(double x, double y)
{
	return x+y;
}


double subtraction (double x, double y)
{
	return x-y;
}


double multiplication (double a, double b)
{
	return a*b;
}

int main()

{
	
	double x,y;
	cout<<"Enter two values on which you want to perform an operation: "<<endl;
	cin>>x>>y;
	
	cout<<"Please select an option: "<<endl;
	int operation;
	cout<<"1 - Addition"<<"\n2 - Subtraction"<<"\n3 - Multiplication"<<"\n4 - Division"<<endl;
	cin>>operation;
	
	switch(operation)
	{
		case 1:
			   {
			   	cout<<"The sum of the two numbers is: "<<addition(x,y)<<endl;
			   	break;
			   }
			   
		case 2:
			    {
			     cout<<"The difference between the two numbers is: "<<subtraction (x,y)<<endl;
				 break;	
				}
		
		case 3:
			   {
			   	cout<<"The product of the two numbers is: "<<multiplication (x,y)<<endl;
			   	break;
			   }
			   
		case 4:
			   {
			   	cout<<"The result of division of the two numbers is: "<<division(x,y)<<endl;
			   	break;
			   }
 
		default:
			    {
			    	cout<<"Bye!"<<endl;  
	                exit(1);
                }

}

return 0;
}

double division (double l ,double m) 
{	
	return l/m;
}


