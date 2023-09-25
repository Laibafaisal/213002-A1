//213002 - Laiba Faisal -Q2 - QUIZ 3
#include<iostream>
using namespace std;

int const sz = 5;

class queue{
	int rear;
	int front;
	int array[sz];
	
	public:
		
		void InitialiseQueue(){
				for (int i =0; i<sz; i++){
					array[i] = 0;
				}
		}
		queue(){
			rear = -1;
			front = -1;
			InitialiseQueue();
		}
		
		bool IsEmptyQueue(){
			if (rear == -1 && front == -1)
				return true;
			else 
			return false;
		}
			
		bool IsFullQueue(){
			if (rear == sz-1)
				return true;
			else
				return false;
			}
			
		int getfront(){
			if(IsEmptyQueue()){
				cout<<"Queue underflow!"<<endl;
				return 0;
			}
			else 
			{
				return array[front];
			}
		}
			
		int back(){
			if(IsEmptyQueue()){
				cout<<"Queue underflow!"<<endl;
			}
			else
			return array[rear];
		}
		void addQueue(int x){
			if (IsFullQueue()){
			cout<<"Queue overflow!"<<endl;
			}
			else if (rear == -1 && front == -1){
				rear = 0;
				front = 0;
				array[rear] = x;
			}
			else{
				rear++;
				array[rear] = x;
			}
			}
		int deleteQueue(){
			int x = 0;
			if (IsEmptyQueue()){
				cout<<"Queue underflow!"<<endl;
			}
			else if (rear == front){
					x = array[front];
					rear = -1;
					front = -1;
				}
			else{
					x = array[front];
					array[front] = 0;
						front++;
				}
			return x;
			}
			
		void display(){
			for (int i = 0; i<sz ;i++){
				cout<<array[i]<<endl;
			}
		}
};

int main(){
	int opt;
	do{
		queue o;
		cout<<"Choose an option: "<<endl
			<<"1 - Add to queue"<<endl
			<<"2 - Delete from queue"<<endl
			<<"3 - Check if empty or not"<<endl
			<<"4 - Check if full or not"<<endl
			<<"5 - Get the value at the front"<<endl
			<<"6 - Get the value at the rear"<<endl
			<<"7 - Exit"<<endl;
		cin>>opt;
		switch(opt){
			case 1:{
				int a;
				cout<<"Enter the element to be added: ";
				cin>>a;
				o.addQueue(a);
				break;
			}
			
			case 2:{
				cout<<"The deleted element is: "<<o.deleteQueue();
				break;
			}
			
			case 3:{
				if (o.IsEmptyQueue())
				cout<<"The queue is empty!"<<endl;
				else
				cout<<"The queue is not empty!"<<endl;
				break;
			}
			
			case 4:{
				if (o.IsFullQueue())
				cout<<"The queue is full!"<<endl;
				else
				cout<<"The queue is not full!"<<endl;
				break;
			}
			
			case 5:{
				cout<<"The value at the front is: "<<o.getfront();
				break;
			}
			
			case 6:{
				cout<<"The value at the back is: "<<o.back();
				break;
			}
			default:{
				cout<<"Invalid entry!"<<endl;
				break;
			}
		}
	}while (opt!=7);
}
