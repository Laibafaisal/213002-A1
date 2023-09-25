//213002_Lab Task 1 _ Q4 Arrays
#include<iostream>
using namespace std;
int const sz = 3;

int main(){
	int num[sz];
	
	for (int i=0; i<sz;i++){
		cout<<"Enter an integer: ";
		cin>>num[i];
	}
	int highest = num[0];
	for (int i =1; i<sz ; i++){
		if (num[i]>num[0]){
			highest=num[i];
		}
	}
	int sechigh = num[1];
	for (int i=0; i<sz; i++){
		if (sechigh>num[i] && sechigh<highest)
		sechigh =num[i];
	}
	//
	int low =num[0];
	int slow = num[1];
	for (int i =1; i<sz ; i++){
		if (num[i]<num[0]){
			low=num[i];
		}
	}
	for (int i=0; i<sz; i++){
		if (slow<num[i] && slow>low)
		slow =num[i];
	}
	
	cout<<"Highest value: "<<highest<<endl<<"Second highest: "<<sechigh<<endl;
	cout<<"Lowest value: "<<low<<endl<<"Second lowest: "<<slow<<endl;
}
