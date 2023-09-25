//213002-Laiba Faisal- Lab Quiz 3 -Q1
#include<iostream>
using namespace std;

int const sz = 5;

class stack{
	int a1[sz];
	int top;
	public:
		stack(){
			top = -1;
			for (int i = 0; i<sz; i++){
				a1[top] = 0;
			}
		}
		
		bool empty1(){
			if (top == -1)
			return true;
			else
			return false;
		}
		
		bool full1(){
			if (top == sz)
			return true;
			else
			return false;
		}
		
		void push(int x){
			if (full1()){
				cout<<"Stack overflow!"<<endl;
			}
			else{
				top++;
				a1[top] = x;
			}
		}
		
		int pop(){
			if (empty1()){
				cout<<"Stack underflow!"<<endl;
				return 0;
			}
			else{
				return a1[top];
				top--;
				//cout<<"Popped successfully!The value at the top after popping is: "<<a1[top]<<endl;
			}
		}
		
		void disp1(){
			cout<<"The elements in the stack are: "<<endl;
			for (int i =0; i<sz; i++){
				cout<<a1[top]<<endl;
				top++;
			}
		}
			
};

class queue : public stack{
	int rear;
	int front;
	int a2[sz];
	
	public:
		queue(){
			rear = -1;
			front = -1;
			for (int i=0; i<sz; i++){
				a2[i] = 0;
			 }
		    }
			
			bool empty2(){
				if (rear == -1 && front == -1){
					return true;
				}
				else 
				return false;
			}
			
			bool full2(){
				if (rear == sz-1){
					return true;
				}
				else
				return false;
			}
			
			void enq(int x){
				if (full2()){
					cout<<"Queue overflow!"<<endl;
				}
				else if (rear == -1 && front == -1){
					rear = 0;
					front = 0;
					a2[rear] = x;
				}
				else{
					rear++;
					a2[rear] = x;
				}
			}
			int deq(){
				int x = 0;
				if (empty2()){
					cout<<"Queue underflow!"<<endl;
				}
				else if (rear == front){
					x = a2[front];
					rear = -1;
					front = -1;
				}
				else{
					x = a2[front];
					a2[front] = 0;
					front++;
				}
				return x;
			}
			
			void disp2(){
				cout<<"The elements in the queue are: "<<endl;
				for (int i=0; i<sz; i++){
					cout<<a2[i]<<endl;
				}
			}
			
			void FillQ_WithS(){
				if(empty1()){ //if stack is empty
					cout<<"The stack is empty hence queue cannot be filled with its elements!"<<endl;
				}
				else if (full2()){//else if queue is full already
					cout<<"Queue Overflow!"<<endl;
				}
				else {
					int a;//to store the popped value
					for (int i = 0; i<sz; i++){
						a = pop();
						enq(a);
					}
					disp2();
				}
			}
			
			void FillS_WithQ(){
				if (full1()){//if stack is full
					cout<<"Stack Overflow!"<<endl;
				}
				
				else if (empty2()){//if queue is empty then we cannot perform this operation
					cout<<"The queue is empty hence stack cannot be filled with its elements!"<<endl;
				}
				
				else{
					int b;
					for (int i = 0; i<sz; i++){
						b = deq();
						push(b);
					}
					disp1();
				}
			}
		
};

int main(){
	queue obj;
	int opt;
	do {
		cout<<"Choose an option: "<<endl;
		cout<<"1 - Add to the queue"<<endl
			<<"2 - Add to the stack"<<endl
			<<"3 - Fill stack with queue"<<endl
			<<"4 - Fill queue with stack"<<endl
			<<"5 - Exit"<<endl;
		cin>>opt;
		switch(opt)	{
			case 1:{
				int a;
				cout<<"Enter the value to be added to the queue: ";
				cin>>a;
				obj.enq(a);
				break;
			}
			
			case 2:{
				int a;
				cout<<"Enter the value to be added to the stack: ";
				cin>>a;
				obj.push(a);
				break;
			}
			
			case 3:{
				obj.FillS_WithQ();
				break;
			}
			case 4:{
				obj.FillQ_WithS();
				break;
			}
			default:{
				cout<<"Invalid entry!"<<endl;
				break;
			}
		}
	}while(opt!=5);
		
	
}

