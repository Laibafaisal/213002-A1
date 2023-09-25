#include<iostream>
using namespace std;

int const sz = 6;
void avg (int [] , int );
int main(){
	int num[sz];
	for (int i=0; i<sz; i++){
		cout<<"Enter the integer: ";
		cin>>num[i];
	}
	int del;
	cout<<"Enter the value to be deleted from the array: ";
	cin>>del;
	int index;
	for (int i=0; i<sz; i++){
		if (del == num[i]){
			index = i;
		}
		
	}
	//cout<<index;
	
	//deletion process
	//int count = 1;
	for (int i=index ; i<sz-1; i++)
	{
		num[i] = num [i+1];
		//count++;
		
	}
	
	for (int k=0 ;k<sz-1; k++)
	{
		cout<<num[k]<<endl;
	}
	
	int max = num[0];
	for (int i =0; i<sz; i++){
		if (num[i] > max){
			max = num[i];
		}
	}
	
	int min = num[0];
	for (int i =0; i<sz; i++){
		if (num[i] < min){
			min = num[i];
		}
	}
	
	cout<<"The maximum value is: "<<max<< " and the minimum is : "<<min<<endl;
	
	avg(num,sz);
}

void avg (int a[] , int s)
{
	int sum = 0;
	for (int i=0; i<s; i++){
		sum+=a[i];
	}
	double mean;
	mean = static_cast <double>(sum);
	cout<<"The average is: "<<mean/s<<endl;
}
