#include <iostream>
#include <list>
using namespace std;

void display( list<int> &l1){
	list <int> :: iterator it;
	
	for (it=l1.begin(); it != l1.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}

int main(){
	
	list <int> l1;
	
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	l1.push_back(50);
	l1.push_back(60);
	l1.push_back(70);
	l1.push_back(80);
	
	display(l1);
	l1.remove(30);
	display(l1);
	
	l1.reverse();
	display(l1);
	
	
	
}
