#include<stdio.h>
#include<iostream>
using namespace std;
class A
{
	public: A()
			 {
			 	cout<<"\nConstructor";
			 }
			 ~A()
			 {
			 	cout<<"\nDestructor";
			 }
};

int main()
{
	A a1,a2;
	cout<<"\nBegin";
	{
		cout<<"\nEntered Block";
	A a3;
	cout<<"\nLeaving Block";
	}
	cout<<"\nEnd";
}
