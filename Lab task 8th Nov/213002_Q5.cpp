#include<iostream>
using namespace std;
int main()
{
	string one,two;
	cout<<"Type a line: "<<endl;
	getline(cin,one);
	cout<<"Type another line: "<<endl;
	
	getline(cin,two);


    if (one==two)
        cout<<"The lines are same.";
    else
        cout<<"The lines are different";
    
}
