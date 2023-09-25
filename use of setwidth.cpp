#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int const a=2,b=24,c=908,d=76,e=121,f=6622,g=789,h=4444,i=55555;
	cout<<setw(4)<<a<<setw(5)<<b<<setw(6)<<c<<endl;
	cout<<setw(4)<<d<<setw(5)<<e<<setw(6)<<f<<endl;
	cout<<setw(4)<<g<<setw(5)<<h<<setw(6)<<i<<endl;
	cout<<"________________"<<endl;
	int l,m,n;
	l=a+d+g;
	m=b+e+h;
	n=c+f+i;
	cout<<setw(4)<<l<<setw(5)<<m<<setw(6)<<n<<endl;
	
	
}
