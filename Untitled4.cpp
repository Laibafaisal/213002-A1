#include<iostream>
using namespace std;
int main()
{
	int const pi=3.142;
	int r;
	double c;
	cout<<"Enter r:"<<endl;
	cin>>r;
	c=2*pi*r;
	cout<<"c is: "<<static_cast <double> (c)<<endl;
}
