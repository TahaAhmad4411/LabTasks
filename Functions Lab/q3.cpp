#include<iostream>
using namespace std;


bool EvenOrOdd(int a)
{
	return a%2==0;
}

int main()
{
int number;
	cin>>number;
	cout<<"The number is ="<<EvenOrOdd(number)<<endl;
}
