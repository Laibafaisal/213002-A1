#include<iostream>
using namespace std;
int main()
{
	char alpha;
	cout<<"Enter an alphabet: "<<endl;
	cin>>alpha;
	
	if (alpha=='a'||alpha=='A'||alpha=='e'||alpha=='E'||alpha=='i'||alpha=='I'||alpha=='o'||alpha=='O'||alpha=='u'||alpha=='U')
	    {
	    	cout<<"You entered a vowel."<<endl;
         
        }
        
	         
	else
	    {
		cout<<"The alphabet you entered is not a vowel."<<endl;
		}
}
