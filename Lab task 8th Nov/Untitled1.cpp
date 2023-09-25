#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (double i=0; i<20; i++)
	{
		static_cast <double> (i);
		cout<<"H"<<i<<endl;
	}
}
