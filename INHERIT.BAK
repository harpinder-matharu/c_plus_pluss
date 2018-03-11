#include "iostream.h"
#include "conio.h"

class first
{
	protected:
	int f;
	public:
	first()
	{
		cout<<"\nConstructor of first class (base).";
		f=10;
	}
	void display1()
	{
		cout<<"\n\nFirst Class (base).\nValue of data menber : "<<f;
	}
};
class second: public first
{
	int s;
	public:
	second()
	{
		cout<<"\nConstructor of second class (derived).";
		s=20;
	}
	void display2()
	{
		cout<<"\n\nSecond Class (derived).\nValue of data menber : "<<s;
	}
};

int main()
{
	clrscr();
	second ob;
	ob.display1();
	ob.display2();
	getch();
	return 0;
}