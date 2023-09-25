//213002_Lab Task 1 _ Q3 Arrays
#include<iostream>
using namespace std;

int main(){
	int const sz = 5;
	int num[sz];
	for (int i=0; i< sz; i++){
		cout<<"Enter an integer: ";
		cin>>num[i];
	}
	
	for (int i = sz; i>0 ; i--){
		cout<<num[i]<<endl;
	}
}


