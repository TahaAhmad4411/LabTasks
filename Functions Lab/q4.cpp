#include<iostream>
using namespace std;
int sum(int a,int b)
{return a+b;}
int main()
{
	int a,b;
	cout<<"Enter two numbers for sum\n";
	cin>>a>>b;
	cout<<"The sum of two numbers are"<<sum(a,b)<<endl;
}
