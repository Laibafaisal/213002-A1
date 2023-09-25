#include<iostream>
using namespace std;

int main(){
	int sz;
	char array[sz];
	cout<<"Enter the size of the array:";
	cin>>sz;
	for (int i=0; i<sz; i++){
		cout<<"Enter a character: ";
		cin>>array[i];
	}
	cout<<"Now these are going to be displayed in the reverse order: "<<endl;
	for (int i=sz-1; i>=0; i--){
		cout<<array[i]<<endl;
	}
	
	
	
}
