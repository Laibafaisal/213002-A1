#include<iostream>
using namespace std;
 
int table(int a, int b)
{
	for (int i=1; i<=b ; i++)
	{
		int product=a*i;
		cout<<a<<"*"<<i<<" = "<<product<<endl;
	}
}

int main()
{
	int x,y;
	cout<<"Enter the number whose table you want to be displayed"<<endl;
	cin>>x;
	cout<<"Enter the number till which you want the time table of "<<x<<" to be dispalyed: "<<endl;
	cin>>y;
	cout<<table(x,y);
}
