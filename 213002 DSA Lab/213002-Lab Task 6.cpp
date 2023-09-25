#include<iostream>
using namespace std;

void insertsort(int [], int const );

int main(){
	int const sz = 5;
	int num[sz];
	cout<<"Enter the elements to be stored in the array:"<<endl;
	for (int i = 0; i<sz; i++){
		cout<<"Enter the "<<i+1<<" element: ";
		cin>>num[i];
	}
	insertsort(num,sz);
}

void insertsort(int a[], int const sz ){
	
	for (int i=1; i<sz; i++){
		int temp = a[i];
		int j = i-1;
		while (j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = temp;
	}
	cout<<"The elements in the sorted array are as follows: "<<endl;
	for (int k = 0; k<sz; k++){
		cout<<a[k]<<endl;
	}
}
