#include "iostream"
#include "conio.h"
using namespace std;

int main()
{
	int size,index;
	cout<<"\nEnter size of an array : ";
	cin>>size;
	int arr[size];
	cout<<"\nEnter index value you want to use (0-"<<size-1<<") : ";
	cin>>index;
	try
	{
		if((index<0)||(index>=size))
		{
			throw(1);
		}
		else
		{
			cout<<"\nYou can use this location";
		}
	}
	catch(int a)
	{
		cout<<"\nException.";
	}
	getch();
	return 0;
}
