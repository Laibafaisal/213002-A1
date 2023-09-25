//213002_Laiba Faisal_Lab Task 1_Q2
#include<iostream>
using namespace std;


int main(){
	int arr[100],i=0,j;
	int n;
	cout<<"Enter a number to convert to binary: ";
	cin>>n;
	while(n>0){
		arr[i] = n%2;
		i++;
		n=n/2;
		}
		
	cout<<n<<" converted to binary is: ";
	for (j = i-1; j>0; j--){
		cout<<arr[j];
	}
}
