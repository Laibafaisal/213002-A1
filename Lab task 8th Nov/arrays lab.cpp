//213002_Q1
#include<iostream>
using namespace std;

//Prototypes
int input();
int sum(int[], int);
void disphigh(int[], int);
void displow(int [],  int);

int const sz=5;
int main()
{
	int const sz=5;
	int n[sz];
	for(int k=0; k<sz; k++)
	{
		n[k]=input();
	}

	cout<<"The sum of the five integers is: "<<sum(n,sz)<<endl;
	disphigh(n,sz);
	displow(n,sz);
}

int input()
{
	int num[sz];
	for (int i=0; i<sz; i++)
	{
		cout<<"Enter the "<<i+1<<" integer: ";
		cin>>num[i];
		return num[i];
	}
	
}
int sum(int y[], int s)
{
	int total=0;
	for (int j=0; j<s; j++)
	{
		total+=y[j];
	}
	return total;
}

void disphigh(int a[], int s)
{
	int l= a[0];
	for (int p=0; p<s; p++)
	{
		if (a[p]<a[0])
		l=a[p];
	}
	cout<<"The lowest value is: "<<l<<endl;
}

void displow(int a[], int s)
{
	int h= a[0];
	for (int p=0; p<s; p++)
	{
		if (a[p]>a[0])
		h=a[p];
	}
	cout<<"The highest value is: "<<h<<endl;
}

