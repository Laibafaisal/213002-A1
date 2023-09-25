#include<iostream>
#include<list>
using namespace std;

class node{
	int data;
	node *next;
	
	public:
		void insert(int);
		void print();
		void reverse();
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

void node:: reverse(){
	node *temp = head;
	node *next = NULL;
	node *prev = NULL;
	
	while(temp!=NULL){
		next = temp->next;
		temp = next;
		next = prev;
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
	cout<<"Let's print these in the reverse order:"<<endl;
	l1.reverse();
	l1.print();
}
