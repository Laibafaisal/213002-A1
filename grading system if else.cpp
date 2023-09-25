#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"Enter your score: "<<endl;
	cin>>score;
	if (score>=85)
	   {
	   cout<<"Congratulations!";
		cout<<"\nYour grade is A+!";
		   
		}
	else if (score>=75&&score<85)
	         cout<<"Your grade is A.";
	else if (score>=65&&score<75)
	         cout<<"Your grade is B.";
	else if (score>=50&&score<65)
	         cout<<"Your grade is C.";
	else if (score<50)
	        {
			  cout<<"Oops! You failed!"<<endl;
			  cout<< "Better luck next time!";	
		    }
}
