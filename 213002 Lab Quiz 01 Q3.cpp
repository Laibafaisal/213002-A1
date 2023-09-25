#include<iostream>
using namespace std;

int main(){
	int sz;
	int num[sz];
	cout<<"Enter the size of the array: ";
	cin>>sz;
	for (int i=0; i<sz; i++){
		cout<<"Enter a number: ";
		cin>>num[i];
	}
	
	for (int i=0; i<sz;i++){
		if ((num[i]%2)==0){
			cout<<num[i]<<" is even."<<endl;
		}
		else {
			cout<<num[i]<<" is odd."<<endl;
		}
	}
	
	for (int i=0; i<sz; i++){
		int a =num[i]/-1;
		if (a!=num[i]){
			cout<<num[i]<<" is a negative number."<<endl;
		}
		else if((-1*a) == num[i]) {
			cout<<num[i]<<" is a positive number."<<endl;
		}
	}		
}



