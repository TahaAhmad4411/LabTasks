#include<iostream>
using namespace std;
double radius(float r)
{
return double(r);
}
double Area(float r)
{return 3.14*2*r;}
int main()
{
	cout<<"Enter the radius of the circle\n";
	float rad;
	cin>>rad;
	cout<<"The radius is "<<radius(rad)<<endl;
	cout<<"The area is "<<Area(rad)<<endl;
}
