#include<iostream>
using namespace std;

void name();

int main()
{
	name();
}

void name()
{
	for(int l=0; l<5; l++)
	{
		char r[5];
		cout<<"\nEnter the "<<l+1<<" letter of your name: "<<endl;
	    cin>>r[l];
	    cout<<"\n"<<static_cast <int> (r[l]) ;
	}
	
}


