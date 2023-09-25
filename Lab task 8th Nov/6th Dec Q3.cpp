#include<iostream>
using namespace std;

int sum(int s, int e)
{
	int j;
	for (int i=s+1; i<e; i++)
	{
	 j=i+i;
	 cout<<j<<endl;
	}
}

int main()
{
	int start,end;
	cout<<"Enter the minimum value: "<<endl;
	cin>>start;
	cout<<"Enter the maximum value: "<<endl;
	cin>>end;
	cout<<"The sums are: "<<sum(start,end);
}
