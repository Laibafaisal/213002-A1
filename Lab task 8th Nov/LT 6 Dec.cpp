#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n,e,res;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"Enter the exponent of the number: "<<endl;
	cin>>e;
	res = pow(n,e);
	cout<<n<<" raised to the power "<<e<<" is "<<res<<endl;
	int choice;
	cout<<"Press 0 to continue and any other number to exit"<<endl;
	cin>>choice;
	if(choice==0)
	{
		while(choice==0)
		{
	       cout<<"Enter a number"<<endl;
	       cin>>n;
	       cout<<"Enter the exponent of the number: "<<endl;
	       cin>>e;
	       res=pow(n,e);
		   cout<<n<<" raised to the power "<<e<<" is "<<res<<endl;
		   int choice;
	       cout<<"Press 0 to continue and any other number to exit"<<endl;
	       cin>>choice; 
	   }
    }
    else 
         {
         	cout<<"Thanks for using this program.\nHave a good day\nBye!"<<endl;
         	exit(1);
		 }

	return 0;
}
