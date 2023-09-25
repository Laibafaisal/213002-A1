#include<iostream>
using namespace std;
template <class T>

class my{
	private:
		T a;
		T b;
	public:
		void input(){
			cout<<"Enter the first value: ";
			cin>>a;
			cout<<"Enter the second value: ";
			cin>>b;
		}
		
	void display(){
			cout<<"First: "<<a<<endl<<"Second: "<<b<<endl;
		}
		
	void add(){
		cout<<"Sum/concatentaion: "<<a+b<<endl;
	}
};

/*T max( T n, T m){
	if (n>m)
	return n;
	else 
	return m;
}*/

int main(){
	my <int> r;
	r.input();
	r.display();
	r.add();
	
	my <float> q;
	q.input();
	q.display();
	q.add();
	
	my <string> a;
	a.input();
	a.display();
	a.add();
	
}
