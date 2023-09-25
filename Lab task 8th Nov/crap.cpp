#include<iostream>
#include<cstring>
using namespace std;
string name[5];
void getinput()
{
	string name[5];
	for(int i=0; i<5; i++)
	{
	cout<<"Enter name";
	getline(cin,name[i]);
}
}
void display()
{
	for(int l=0; l<5; l++)
	{
		cout<<name[l]<<endl;
	}
}



int main()
{
	getinput();
	display();
}
