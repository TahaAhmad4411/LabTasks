#include<iostream>
using namespace std;

char LowerToUpper(char a)
{
	return (a+32);
}

int main()
{
	char lower;
	cin>>lower;	
	cout<<"Upper case to Lowercase is "<<LowerToUpper(lower);
}
