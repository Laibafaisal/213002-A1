#include<iostream>
using namespace std;

int main(){
	int sz;
	cout<<"Enter the size of array: ";
	cin>>sz;
	int num[sz];
	for (int i=0; i<sz; i++){
		cout<<"Enter number "<<i+1<<" : ";
		cin>>num[i];
	}
	cout<<"The numbers you entered are:"<<endl;
	for (int i=0; i<sz; i++){
		cout<<num[i]<<endl;
	}
}
