#include<iostream>
using namespace std;
int main()
{
	int radius;
	int const pi=3.142;
	double  circumference;
	cout<<"Enter the radius of the circle in cm: "<<endl;
	cin>>radius;
	cout<<static_cast <double> (radius)<<endl;
	circumference=2*pi*static_cast<double>(radius);
	cout<<"The circumference of the circle with the radius "<<radius<<" cm is "<<circumference<<" cm";
	
	
}
