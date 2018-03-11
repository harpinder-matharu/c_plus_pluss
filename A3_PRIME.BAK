#include "iostream.h"
#include "conio.h"

class number
{
	int num;
	public:
	void getNo()
	{
		cout<<"Enter any number : ";
		cin>>num;
	}
	void primeNo();
};
void number::primeNo()
{
	int flag = 0, m = 0, i;
	m = num / 2;
	for(i = 2; i <= m; i++)
	{
		if((num % i) == 0)
		{
			cout<<"Number is not prime";
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout<<"Numbe is prime";
	}
}

int main(int argc, char* agrv)
{
	clrscr();
	number n1;
	n1.getNo();
	n1.primeNo();
	getch();
	return 0;
}