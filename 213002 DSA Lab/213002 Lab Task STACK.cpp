#include<iostream>
using namespace std;

class Stack{
	int *ptr;
	int max;
	int size;
	
	public:
		Stack(int x){
			ptr = new int[x];
			max = x;
			size=0;
		}
		
		void push (int a){
			if (size == max){
				cout<<"Stack is full. Overflow!";
				return;
			}
			ptr[size]=a;
			size++;
			}
			
		void pop(){
			if (size == 0){
				cout<<"Stack is empty. Underflow!";
				return;
			}
			size--;
			cout<<"The element "<<ptr[size]<<" has been popped."<<endl;
			
		}
		
		void top(){
			if (size == 0){
				cout<<"The stack is empty!"<<endl;
			}
			cout<<"The value at the top is: "<<ptr[size-1]<<endl;
		}
		
		void arrsize(){
			if (size ==0 ){
				cout<<"The stack is empty so size is 0"<<endl;
			}
		    cout<<"The size of the array is: "<<size;
		}
		void display(){
			for (int i=0; i<size; i++){
				cout<<ptr[i]<<endl;
			}
		}
};
int main(){
	Stack o1(4);
	o1.push(4);
	o1.push(6);
	o1.push(8);
	o1.push(10);
	o1.display();
	cout<<"First part ends here."<<endl<<endl;
	o1.top();
	o1.arrsize();
	o1.pop();
	o1.display();
	return 0;
	
}

