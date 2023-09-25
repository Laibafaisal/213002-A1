#include<iostream>
using namespace std;
int main()
{
	for ( int i=0; i<4; i++)
	{
		for ( int j=0 ;j<4; j++)
		{ 
		cout<<"*";
		    for (int k =0; k<4 ; k++)
		    {
		    	cout<<"\t";
			}
		}
	}
	for ( int i=0; i<4; i++)
	{
		for ( int j=0 ;j<4; j++)
		{ 
		cout<<"*"<<endl;
		    for (int k =0; k<4 ; k++)
		    {
		    	cout<<"\t"<<endl;
			}
		}
	}
}
