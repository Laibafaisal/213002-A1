//213002_Laiba Faisal_Lab Task 1_Q2
#include<iostream>
using namespace std;

/*void convert(int a[], int s){
	for (int i=0; i<s; i++){
		cout<<a[i]%2
	
	}
}*/

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
	//convert(num,sz);
	 int a = 32;
	 int n = a%2;
	 while(n!=0){
	 	cout<<n;
	 }
}
