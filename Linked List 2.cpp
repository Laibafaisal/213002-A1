#include<iostream>
using namespace std;

class node{
	int data;
	node* next;
	
	public:
		void insert(int x);
		void print();
		void reverse();
};

node *head;
void node :: insert(int a){
	node *temp = new node();
	temp->data = a;
	temp->next = head;
	head = temp;
}

void node :: print(){
	node *temp1 = head;
	cout<<"Here is the list of numbers that you entered: "<<endl;
	while(temp1 != NULL ){
		cout<< (*temp1).data <<"  ";
		temp1 = temp1->next;
		}
		cout<<endl;
}

void node::reverse(){
	node *temp = head;
	node *prev =NULL;
	node *next =NULL;
	
	while(temp!=NULL){
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	head = prev;
} 

void node:: insert1(int x){
	
}
int main(){
	head = NULL;
	node l1;
	int sz,n;
	cout<<"Enter the size of the list: ";
	cin>>sz;
	for (int i=1; i<sz+1; i++){
		cout<<"Enter the number: ";
		cin>>n;
		l1.insert(n);
	}
	l1.print();
	cout<<"Now we will print the elements of the list in the reverse order: "<<endl;
	l1.reverse();
	l1.print();
	return 0;
}
