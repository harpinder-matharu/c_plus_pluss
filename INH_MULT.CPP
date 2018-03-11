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
class second
{
	int s;
	public:
	second()
	{
		cout<<"\nConstructor of second class (base).";
		s=20;
	}
	void display2()
	{
		cout<<"\n\nSecond Class (base).\nValue of data menber : "<<s;
	}
};
class third: public first, public second
{
	int t;
	public:
	third()
	{
		cout<<"\nConstructor of third class (derived).";
		t=30;
	}
	void display3()
	{
		cout<<"\n\nThird Class (derived).\nValue of data menber : "<<t;
	}
};

int main()
{
	clrscr();
	third ob;
	ob.display1();
	ob.display2();
	ob.display3();
	getch();
	return 0;
}