//hierarhical inheritance.
#include "iostream.h"
#include "conio.h"

class first
{
	private:
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
		cout<<"\n\nSecond Class (derived form first class).\nValue of data menber : "<<s;
	}
};
class third: public first
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
		cout<<"\n\nThird Class (derived form first class).\nValue of data menber : "<<t;
	}
};

int main()
{
	clrscr();
	second sob;
	third tob;
	sob.display1();
	sob.display2();

	tob.display1();
	tob.display3();
	getch();
	return 0;
}