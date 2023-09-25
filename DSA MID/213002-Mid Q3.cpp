#include<iostream>
using namespace std;

class stack{
	int top;
	int max = 10;
	int arrid[5];//int array to store the ids
	
	public:
		stack(){
			top =-1;
		}
		
		bool full(){
			if(top==max){
				return true;}
			else 
				{
					return false;
			}
		}
		
		bool empty(){
			if (top == -1)
				return true;
			else 
				return false;
			}
			
		bool find(int x){
			while (top!=-1){
				if (arrid[top] == x)
				return true;
				else 
				top--;
			}
			return false;
		}
		
		void room (){
			if (full()){
				cout<<"We are sorry!All the rooms have been occupied!"<<endl;
			}
			else
			cout<<"Room available!"<<endl;
		}
};

int main(){
	stack o1,o2;//o1 stored the data for family and o2 for bs
	int id,opt;
	bool clear;
	cout<<"Welcome to ABC hotel!"<<endl
		<<"Please enter your reservation id: ";
	cin>>id;
	cout<<"Please specify the type of room u need:"<<endl
		<<"1 - Family Room"<<endl
		<<"2 - Bachelor's room"<<endl;
	cin>>opt;
	switch(opt)	{
		case 1: {
			clear = o1.find(id);
			if (!clear){
				cout<<"Oops! No reservation has been made with this id!"<<endl;
				cout<<"We will check for availability of rooms!"<<endl;
				o1.room();
			}
			break;
		}
		case 2:{
			clear = o2.find(id);
			if (!clear){
				cout<<"Oops! No reservation has been made with this id!"<<endl;
				cout<<"We will check for availability of rooms!"<<endl;
				o2.room();
			}
			break;
		}
	}
	
}
