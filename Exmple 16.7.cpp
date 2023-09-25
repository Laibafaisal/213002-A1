#include<iostream>
#include<iomanip>
using namespace std;

template <class T>


T square(T num)
{
return num * num; }

int main()
{
int i; 
double d; 

cout << setprecision(5);
cout << "Enter an integer: ";
cin >>i;
cout<<"Enter a floating-point value: ";
cin >>d;
cout << "Here are their squares: ";
cout << square(i) << " and "<< square(d) << endl;
return 0;
 }

