#include<iostream>

using namespace std;

class node{
	int data;
	node *next;   
	
	public:
		void insert(int x);
		void print();
		   
};


node *head;


void node:: insert(int x){
	node *temp = new node();
	temp->data=x;
	temp->next=head;
	head = temp;
}

void node:: print(){
	node *temp = head;
	cout<<"The elements of the list are: "<<endl;
	while (temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}


int main(){
	int sz,num;
	node list;
	head = NULL;
	cout<<"How many elements do u want to add to the list: ";
	cin>>sz;
	for(int i=1; i<=sz; i++){
		cout<<"Enter a number: ";
		cin>>num;
		list.insert(num);
	}
	list.print();
	return 0;
}
