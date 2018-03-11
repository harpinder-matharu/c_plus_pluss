#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
	double num1,num2;
	long a,b,c;
	cout<<"\nEnter two numbers :\n";
	cin>>num1>>num2;
	a=num1;
	b=num2;
	
	try
	{
		if((num1==a)&&(num2==b))	
			throw(1);	
		else
			cout<<"\nEntered Nunbers are : "<<num1<<" and "<<num2;
	}
	catch(int a)
	{
		cout<<"\nException";
	}
	getch();
	return 0;
}
