#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number: "<<endl;
	cin>>a;
	if (a%5==0)
	    {
	
          if (a%11==0)
	         {
			cout<<"The number you entered is divisble by both, 5 and 11."<<endl;
             }
        else
		    cout<<"The number you entered is divisible by 5."<<endl;
     }
    if (a%11==0&&a%5!=0)
        cout<<"The number you entered is divisble by 11."<<endl;
    if (a%5!=0&&a%11!=0)
	    {
	    	cout<<"The number you entered is neither divisble by 5 nor by 11.";
		}
}
