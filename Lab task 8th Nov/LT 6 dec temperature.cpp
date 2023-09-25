#include<iostream>
#include<iomanip>
using namespace std;

double Celsius (double F)
{
	double C;
	C=(5*(F-32))/9;
	return C;
}
int main()
{  
    double f;
    cout<<"Enter the temperature in Fahrenheit:"<<endl;
    cin>>f;
    cout<<"Temperature in degrees Celsius is: "<<setprecision(3)<<Celsius(f)<<endl;
	
	for (int i=0;i<=20;i++)
	{
		static_cast <double> (i);
		cout<<"Temperature in Farenheit:"<<setprecision(3)<<i<<setw(5)<<"\tTemperature in degree celsius:"<<setprecision(3)<<Celsius(i)<<endl;
	}
}
