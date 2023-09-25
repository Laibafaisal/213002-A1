#include<iostream>
using namespace std;

class Base{
	public:
	Base(){
		cout<<"Base class constructor."<<endl;}
	~Base(){
		cout<<"Base class destructor."<<endl;
	}
	
};
class der:public Base{
	public:		
	der()
	{
		cout<<"This is the derived class constructor."<<endl;
	}
	~der()
	{
		cout<<"This is the derived class destructor."<<endl;
	}
};
int main(){
	cout<<"We will now define a derived class object."<<endl;
	der object;
	
	cout<<"The program is now going to end."<<endl;
	return 0;
}
