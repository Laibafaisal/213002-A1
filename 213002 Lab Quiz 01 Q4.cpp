#include<iostream>
#include<list>
using namespace std;

class node{
	int data;
	node *next;
	
	public:
		void insert(int);
		void print();
};

node *head;

void node :: insert(int x){
			node *temp = new node();
			temp->data = x;
			temp->next = head;
			head = temp;
		}
		
void node :: print(){
	node *temp1 = head;
	while (temp1 != NULL){
		cout<<temp1->data<<" ";
		temp1 = temp1->next; 
	}
	
}		
int main(){
	int sz,num;
	node l1;
	head = NULL;
	cout<<"Enter the size of the list: ";
	cin>>sz;
	for (int i=1; i<sz+1; i++){
		cout<<"Enter a number: ";
		cin>>num;
		l1.insert(num);
	}
	l1.print();
}
