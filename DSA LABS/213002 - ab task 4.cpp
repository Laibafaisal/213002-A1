//213002 - Laiba Faisal 
#include<iostream>
using namespace std;

int const sz = 5;

class stack{
	int top;
	int array[sz];
	
	public:
		stack(){
			top = -1;
		}
		bool isempty(){
			if (top == -1)
			return true;
		}
		
		bool isfull(){
			if (top == sz)
			return true;
			else 
			return false;
		}
		
		void push(int a){
			if (isfull()){
				cout<<"Overflow!"<<endl;
				return;
			}
			top++;
			array[top] = a;		
		}
		
		void pop(){
			if (isempty()){
				cout<<"Underflow!";
				return;
			}
			top--;
			cout<<"The pop operation has been performed successfully!"<<endl
				<<"The value at the top is: "<<array[top]<<endl;
		}
		
		int count(){
			return top;
		}
		
		int peek(int x){
			if (isempty()){
				cout<<"Underflow!"<<endl;
				return 0;
			}
			cout<<"The value at the top is: "<<array[top]<<endl;
		}
		
		void change()
		{
			if (isempty()){
				cout<<"Underflow!";
				return;
			}
			int x;
			cout<<"Enter the new value: ";
			cin>>x;
			array[top] = x;
		}
		
		void display(){
			if (isempty()){
				cout<<"Underflow!";
				return;
			}
			cout<<"The elements in the stack are:"<<endl;
			for (int i = 0; i<sz; i++){
				cout<<array[top]<<endl;
				top--;
				if (top == -1){
					return;
				}
			}
		}
};

int main(){
	stack o;
	int opt;
	do{
	cout<<"Choose an option:"<<endl;
	cout<<"1 - push"<<endl
		<<"2 - pop"<<endl
		<<"3 - count"<<endl
		<<"4 - peek"<<endl
		<<"5 - change"<<endl
		<<"6 - display"<<endl
		<<"7 - exit"<<endl;
	cin>>opt;
	
	switch(opt){
		case 1:{
			int a;
			cout<<"Enter a number to be pushed into the stack: ";
			cin>>a;
			o.push(a);
			break;
		}
		
		case 2:{
			o.pop();
			break;
		}
		
		case 3:{
			cout<<"The number of elements in the stack is: "<<o.count()<<endl;
			break;
		}
		
		case 4:{
			int num;
			cout<<"Enter the value you want to look for: ";
			cin>>num;
			cout<<"This number is present at the index: "<<o.peek(num)<<endl;
			break;
		}
		
		case 5:{
		o.change();
			break;
		}
		
		case 6:{
			o.display();
			break;
		}
		case 7:{
			cout<<"Have a good day! Bye!"<<endl;
			break;
		}
		default:{
			break;
		}
	}
} while(opt!=7);
}
