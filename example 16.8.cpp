#include<iostream>
using namespace std;

template <class T>

void swapval(T &x, T &y){
	T temp;
	temp = x;
	x = y;
	y = temp;
	
}

int main(){
	int i1,i2;
	
	cout<<"Enter an integer value: ";
	cin>>i1;
	cout<<"Enter another value: "	;
	cin>>i2;
	cout<<"Let's swap them!"<<endl;
	swapval(i1,i2);
	cout<<"First value: "<<i1<<endl<<"Second value: "<<i2<<endl;
	
	
	float f1,f2;
	cout<<"Enter a floating-point  value: ";
	cin>>f1;
	cout<<"Enter another value: "	;
	cin>>f2;
	cout<<"Let's swap them!"<<endl;
	swapval(f1,f2);
	cout<<"First value: "<<f1<<endl<<"Second value: "<<f2<<endl;
	
	
	char c1,c2;
	cout<<"Enter a character: ";
	cin>>c1;
	cout<<"Enter another character: "	;
	cin>>c2;
	cout<<"Let's swap them!"<<endl;
	swapval(c1,c2);
	cout<<"First value: "<<c1<<endl<<"Second value: "<<c2<<endl;
	
	return 0;
}
