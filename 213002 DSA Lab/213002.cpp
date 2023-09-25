#include<iostream>
using namespace std;

class node{
	int data;
	node *next;
	
	public:
		void push(int x);
		void pop();
		void display();
		int size();
		void find(int search);
		
};

node *top = NULL;
int sz;
int counter = sz;

void node :: push(int x){
	if (counter<=sz){
		node *temp = new node();
		temp->data = x;
		temp->next = top;
		top = temp;
		counter++;	
	}

}

void node :: pop(){
	node *temp = top;
	top = temp->next;
	delete temp;
	counter--;	
}

void node :: display(){
	if (counter == 0){
		cout<<"The list (stack) is empty."<<endl;
	}
	for (int i=1; i<=sz; i++){
		cout<<top->data<<endl;
		top = top->next;
	}
}

int node::size()
{
	return counter;
}

void node::find(int a){
	node *temp = top;
	char choice;
	while (temp->data != a && counter != 0)
	{
		if (temp->data == a)
		{
			cout<<"The value has been found!"<<endl;
			char option;
			cout<<"Would you like to remove this value from the linked list? [Enter y for yes and n for no]?";
			cin>>option;
			if (option == 'y' || option == 'Y')
			{
				node object1;
				object1.pop();
				while (top->data != a && counter !=0)
				{
					object1.pop();	
				}
				cout<<"The value has been popped successfully!"<<endl
					<<"The updated linked list is as follows:"<<endl;
				object1.display();
			}
			return;
		}
		else
		{
			temp = temp->next;
			counter--;
		}
	}
	cout<<"The value has not been found!"<<endl
		<<"Would you like to push this value into the linked list? [Enter y for yes and n for no]: ";
	cin>>choice;
	if (choice == 'y' || choice == 'Y'){
		node object;
		object.push(a);
		cout<<"The value has been pushed successfully!"<<endl
			<<"The updted linked list is as follows:"<<endl;
		object.display();
	}
	/*
	for (int i=1;i<=sz;i++)
	{
		if (temp->data == a){
			cout<<"The value has been found!"<<endl;
			char option;
			cout<<"Would you like to remove this value from the linked list? [Enter y for yes and n for no]?";
			cin>>option;
			if (option == 'y' || option == 'Y'){
				node object1;
				object1.pop();
				while (top->data != a && counter !=0){
					object1.pop();	
				}
				cout<<"The value has been popped successfully!"<<endl
					<<"The updated linked list is as follows:"<<endl;
				object1.display();
			}
		}
		else
		temp = temp->next;
	}//for ends*/
	
}
int main(){
	int num,search;
	node l1;
	cout<<"Enter the size of the linked list to be created: ";
	cin>>sz;
	for (int i=1; i<=sz; i++){
		cout<<"Enter a value to be pushed into the list: ";
		cin>>num;
		l1.push(num);
	}
	l1.display();
	cout<<"Enter a value to search for it in the linked list: ";
	cin>>search;
	l1.find(search);
	return 0;
	}
