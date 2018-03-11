#include "iostream.h"
#include "conio.h"

class complex
{
	int real,imag;
	public:
	complex()
	{
		real=imag=0;
	}
	complex(int num)
	{
		real=imag=num;
	}
	void operator ++()
	{
		real=real+1;
		imag=imag+1;
	}
	void display()
	{
		cout<<"\nReal : "<<real<<"\nImag : "<<imag;
	}
};
int main()
{
	clrscr();
	complex c1(3),c2(4);
	c1.display();
	++c1;
	c1.display();
	getch();
	return 0;
}