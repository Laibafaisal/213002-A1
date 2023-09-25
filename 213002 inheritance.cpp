#include<iostream>
using namespace std;

class ar{//ar = academicrecord
	public:
		int mid;
		int final;
	
	void getvals()
	{
		cout<<"Mids: (out of 100) ";
		cin>>mid;
		cout<<"Finals: (out of 100)";
		cin>>final;
	}
	
	float getAvg()
	{
		float av = static_cast <float> (mid + final)/2;
		return av;
	}
};

class oop:public ar{
	
};

class dld:public ar{
	
};

class cps: public ar{
	
};

void result (oop , dld , cps);//prototype

int main(){
	oop o1;
	dld o2;
	cps o3;
	
	cout<<"Please enter the marks obtained in the following:"<<endl;
	
	o1.getvals();
	o2.getvals();
	o3.getvals();
	result(o1,o2,o3);
}

void result (oop a, dld b, cps c)
{
	float x = a.getAvg() + b.getAvg() + c.getAvg();
	float y = (x/300)*100;//percentage
	if (y > 85)
	cout<<"Congratulations! You have scored an A!";
	else if (y>70 && y<85)
	cout<<"Good job! You have got a B!";
	else if (y>60 && y<70)
	cout<<"You have got a C.";
	else
	cout<<"Oops! You have failed!";
}
