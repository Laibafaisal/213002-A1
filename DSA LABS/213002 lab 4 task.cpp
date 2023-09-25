//213002 - Laiba Faisal - Queue
#include<iostream>
using namespace std;

int const sz = 5;

class queue{
	int rear;
	int front;
	int array[sz];
	
	public:
		queue(){
			front = -1;
			rear = -1;
			for (int i = 0; i<sz; i++){
				array[i] = 0;
			}
		}
		
		bool empty(){
			if (rear == -1 && front ==-1){
				return true;
			}
			else
			return false;
		}
		
		bool full(){
			if (rear == sz-1)
			return true;
			else
			return false;
		}
		
		void enq(int num){
			if (full()){
				cout<<"Queue is full!"<<endl;
				return;
			}
			
			else if (empty()){
				rear = front = 0;
				array[rear] = num;
			}
			else{
				rear++;
				array[rear] = num;
			}
		}
		
		/*int deq(){
			int x = 0;
			if (empty()){
				cout<<"Queue is empty!"<<endl;
				return 0;
			}
			else if (rear == front){
				x = array[rear];
				rear = -1;
				front = -1;
				return x;
				}
			else {
				x = array[front];
				array[front] = 0;
				front ++;
				return x;
			}
		}*/
		int deq(){
			int x = 0;
			if (empty()){
				cout<<"Empty"<<endl;
			}
			
			else if(rear == front){
				x = array[rear];
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
		int count(){
			return (rear - front + 1);
		}
		
		void display(){
			cout<<"The elements in the queue are:"<<endl;
			for (int i=0; i<sz; i++){
				cout<<array[i]<<endl;
			}
		}
};

int main(){
	queue o;
	int opt,val;
	do{
	cout<<"Choose an option:"<<endl
		<<"1 - Enqueue"<<endl
		<<"2 - Dequeue"<<endl
		<<"3 - Check if it is empty"<<endl
		<<"4 - Check if it is full"<<endl
		<<"5 - count"<<endl
		<<"6 - display"<<endl
		<<"7 - clear screen"<<endl
		<<"0 - exit"<<endl;
	cin>>opt;
	switch (opt){
		case 1:{
			cout<<"Enter the value to be inserted: ";
			cin>>val;
			o.enq(val);
			break;
		}
		case 2:{
			cout<<"Dequeued value: "<<o.deq()<<endl;
			break;
		}
		case 3:{
			if (o.empty()){
				cout<<"The queue is empty!"<<endl;
			}
			else
			cout<<"The queue is not empty!"<<endl;
			break;
		}
		case 4:{
			if (o.full()){
				cout<<"The queue is full!"<<endl;
			}
			else
			cout<<"The queue is not full!"<<endl;
			break;
		}
		case 5:{
			cout<<"The number of elements in the queue is: "<<o.count()<<endl;
			break;
		}
		case 6:{
			o.display();
			break;
		}
		case 7:{
			system("cls");
			break;
		}
		case 0:{
			exit;
		}
		default:{
			cout<<"Invalid input!"<<endl;
			break;
		}
	}
}while (opt!=0);
}
