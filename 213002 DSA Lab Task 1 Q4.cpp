//213002_Lab Task 1 _ Q4 Arrays
#include<iostream>
using namespace std;

int main(){
	int a[2][3];
	for (int i = 0; i< 2; i++){
		for (int j=0; j<3; j++){
			cout<<"Enter an integer to be stored in: "<<i+1<<"row and "<<j+1<<" column:";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	int b[3][2];
	for (int i=0; i<3; i++){
		for (int j=0; j<2; j++){
			b[i][j] = a[j][i];
		}
	}
	
	for(int i = 0; i<3 ;i++)
	{
		for (int j=0; j<2; j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}
