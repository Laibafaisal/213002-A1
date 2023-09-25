#include<iostream>
using namespace std;

int const sz =5;
int main(){
	int num[sz];
	for (int i=0; i<5; i++)
	{
		cout<<"Enter hte "<<i+1<<" integer to be stroed in the array: ";
		cin>>num[i];
	}
	
	for (int i=0; i<5; i++)
	{
		cout<<"The "<<i+1<<" number that you entered is: "<<num[i]<<endl;
	}
	char opt;
	cout<<"Do you want to make any changes in this array?";
	cin>>opt;
	int p;
	while (opt == 'y' || opt == 'Y'){
		cout<<"Enter the number of the position at which you want to make the change: (start counting from 1): ";
		cin>>p;
		cout<<"Enter the new value: ";
		cin>>num[p-1];
		cout<<"Let's have a look at the changes made to your array: "<<endl;
		for (int i=0; i<5; i++)
	{
		cout<<"The "<<i+1<<" number that you entered is: "<<num[i]<<endl;
	}
		cout<<"Do you want to make any changes in this array?";
	cin>>opt;
	}
	
	int min = num[0];
	for (int i=1; i<5; i++){
		if (num[i] <min)
		min = num[i];
	}
	
	int max = num[0];
	for (int i=1; i<5; i++){
		if (num[i] > max)
		max = num[i];
	}
	
	cout<<"The maximum value in the array is: "<<max<<" and the minimum value is: "<<min<<endl;
	
	return 0;

	
}
