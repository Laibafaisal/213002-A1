#include<iostream>
using namespace std;
int main()
{
	int hours;
	cout<<"How many hours did you work? "<<endl;
	cin>>hours;
	if (hours>0&&hours<80)
	    cout<<"The value entered is valid.";
    else
        cout<<"The value entered is invalid";
}
