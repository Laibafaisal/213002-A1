#include<iostream>
using namespace std;
int main()
{
	int units,cost;
	double total,ntotal;
	int rate=100;
	cout<<"Enter the number of units consumed: "<<endl;
	cin>>units;
	if (units<=4000)
	   {
	   	total=units*rate;
	   	cout<<"Total payable amount= RS."<<total;
	   }
	else 
	    {
	    total=units*rate;
	    ntotal=(3/100)*total;
	    cout<<"Total payable amount= RS."<<ntotal;
		}
}
