#include<iostream>
using namespace std;

int const sz = 6;
class stack{
	int top;
	int arrstack[3];
	
	public:
		
		stack(){
			top = -1;
		}
		bool isempty(){
			if (top == -1){
				return true;
			}
			else 
			return false;
		}
		
		bool isfull(){
			if (top == 3){
				return true;
			}
			else
			return false;
		}
		
		void push(int x){
			if (isfull()){
				cout<<"Cannot push as the stack is already full."<<endl;
				return;
			}
			arrstack[top]=x;
			top++;
		}
		
		void pop(){
			if (isempty()){
				cout<<"Cannot pop as the stack is empty."<<endl;
				return;
			}
			
			int value = arrstack[top];
			top--;
			cout<<"The value "<<value<<" has been popped!"<<endl
				<<"Now the value at the top is: "<<arrstack[top]<<endl;	
		}
		
		void disp(){
			if (isempty()){
				cout<<"There is no data to display."<<endl;
				return;
			}
			
			while(top!=-1){
				cout<<arrstack[top]<<endl;
				top--;
			}
		}
};
int main(){
	stack o1,o2;//creating two objects of stack
	int array[sz];
	for (int i=0; i<sz/2; i++)	{
		cout<<"Enter an integer: ";
		cin>>array[i];
		o1.push(array[i]);
	}
	for (int i=sz/2; i<sz; i++)	{
		cout<<"Enter an integer: ";
		cin>>array[i];
		o2.push(array[i]);
	}
	cout<<"The elements in the first half of the array have been stored in stack 1 and the rest in stack 2! "<<endl;
	cout<<"The contents of the first stack are:"<<endl;
	o1.disp();
	cout<<"The contents of the first stack are:"<<endl;
	o2.disp();
	
	
}
