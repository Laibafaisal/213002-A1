//213002_Laiba Faisal_Lab Task 1_Q1
#include<iostream>
using namespace std;

int main(){
	int const sz = 5;
	int num[sz];
	for (int i=0; i< sz; i++){
		cout<<"Enter an integer: ";
		cin>>num[i];
	}
	
	for (int i = 0; i<sz ; i++){
		cout<<"The integer stored on the "<<i+1<<" index of the array is: "<<num[i]<<endl;
	}
}
