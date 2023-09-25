#include<iostream>
using namespace std;

class node{
	int val;
	node *next;
	
	public:
	
		void inshead(int x);
		void instail(int x);
		void insert(int pos, int x);
		void delhead();
		void deltail();
		void find(int x);
		bool isempty();
		void disp();
		void countnodes();
		void delmid(int x);
		void move(int x, int n);
		
};

node *head = NULL;

void node :: inshead(int x){
		node *temp =new node();
		temp->val = x;
		temp->next = head;
		head = temp;
}

void node :: instail (int x){
	node *t1 = head;
	while (t1 != NULL){
		t1 = t1->next;
	}
	node *t2 = new node();
	t2->val = x;
	t1->next = t2;
	t2->next =NULL;	
}
//pos refers to the value in the list after which insertion has to be performed
void node :: insert(int pos, int x){
	node *t = head;
	bool found;
	while (t->next != NULL){
		if (t->val == pos){
			node *t1 = new node();
			t1->val = x;
			t1->next = t->next;
			t->next = t1;
			found = true;
			return;
		}
		else
		t = t->next;
	}
	if (!found){
		cout<<"The number you entered does not exist in the list!"<<endl;
	}	
}

void node :: delhead(){
	node *t1,*t2;
	t1 = head;
	if (isempty()){
		cout<<"The list is empty!"<<endl;
		return;
	}
	t2 = t1->next;
	delete t1;
}

void node :: find(int x){
	node *t = head;
	bool found;
	while (t->next != NULL){
		if (t->val == x){
			cout<<"Value found!"<<endl;
			found = true;
			return;
		}
		else
		t = t->next;
	}
	if (!found){
		cout<<"The number you entered does not exist in the list!"<<endl;
	}	
}

bool node:: isempty(){
	if (head == NULL){
		cout<<"The list is empty!"<<endl;
		return true;
	}
	else 
	return false;
}

void node :: disp(){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->val<<endl;
		temp = temp->next;
	}
}

void node :: deltail(){
	node *t1;
	if (isempty()){
		cout<<"The list is empty!"<<endl;
		return;
	}
	node *temp = head;
	while (temp!=NULL){
		t1 = temp;
		temp = temp->next;
	}
	t1->next =NULL;
	delete temp;
	
}

void node :: countnodes(){
	node *temp;
	temp = head;
	int num;
	while(temp->next!=NULL){
		num++;
		temp = temp->next;
	}
	cout<<"The number of nodes present in this linked list is: "<<num<<endl;
}

void node::delmid(int x){
	node *t = head;
	node *t1;
	while (t->next != NULL){
		if (t->val == x){
			t1 = t->next;
			delete t;
			cout<<"Value deleted successfully!"<<endl;
			return;
		}
	}
	cout<<"Value not found in the list!"<<endl;
}

void node:: move(int x, int n){
	node *t= head;
	node *t1;
	for (int i=0; i<n; i++){
		if (t->val == x){
			t1 = t;
			t = t->next;
			t->val = x;
		}
		
	}
	cout<<"Value not found!"<<endl;
	
}

int main(){
	int choice;
	do{
		cout<<"Please choose an operation to perform on a linked list:"<<endl
			<<"1 - Insert node in front of list"<<endl
			<<"2 - Insert node at the end of list"<<endl
			<<"3 - Insert node after the given element of the list."<<endl
			<<"4 - Delete node from front of list."<<endl
			<<"5 - Delete node from end of list."<<endl
			<<"6 - Find a node of particular value from list."<<endl
			<<"7 - Delete a node of particular value from list."<<endl
			<<"8 - A function which checks weather list is empty or not."<<endl
			<<"9 - Move a node of particular value forward n positions."<<endl
			<<"10 - Find a number of nodes present in a list."<<endl
			<<"11- Print the contents of list."<<endl
			<<"0 - EXIT"<<endl;
		cin>>choice;
	}while (choice!=0);
	switch(choice){
		case 1:{ 
			int a;
			node obj;
			cout<<"Enter the value to be inserted: ";
			cin>>a;
			obj.inshead(a);
			obj.disp();
			break;
		}
		case 2:{
			int a;
			node obj;
			cout<<"Enter the value to be inserted: ";
			cin>>a;
			obj.instail(a);
			obj.disp();
			break;
		}
		case 3:{
			int a,b;
			node obj;
			cout<<"Enter the value to be inserted: ";
			cin>>a;
			cout<<"Enter the value after which you want to insert this value: ";
			cin>>b;
			obj.insert(b,a);
			obj.disp();
			break;
		}
		case 4:{
			node o;
			o.delhead();
			o.disp();
			break;
		}
		case 5:{
			node o;
			o.deltail();
			o.disp();
			break;
		}
		case 6:{
			node o;
			int x;
			cout<<"Enter the value you want to search for:";
			cin>>x;
			o.find(x);
			o.disp();
			break;
		}
		case 7:{int a;
			node o;
			cout<<"Enter the value to be deleted: ";
			cin>>a;
			o.delmid(a);
			o.disp();
			break;
		}
		case 8:{
			node o;
			o.isempty();
			break;
		}
		case 9:{
			int x,y;
			node o;
			cout<<"Enter the value whose position you want to change: ";
			cin>>x;
			cout<<"Enter the number of positions which you want to move it: ";
			cin>>y;
			o.move(x,y);
			o.disp();
			break;
		}
		case 10:{
			node o;
			o.countnodes();
			break;
		}
		case 11:{
			node o;
			o.disp();
			break;
		}
		case 0:{
			exit(1);
			break;
		}
		default:{
			break;
		}

	}
	
}
