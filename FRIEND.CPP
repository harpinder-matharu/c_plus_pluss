#include "iostream.h"
#include "conio.h"
#include "string.h"
#define MAX 1
class concat
{
	char *str;
	int len;
	public:
	concat(char *s)
	{
		len=strlen(s);
		str=new char[lem+1];
	}
	friend operator >>(istream &din, concat &c)
	{
		for(int i=0; i<MAX; i++)
		{
			cout<<i+1<<" Member.";
			din>>c.str;
			cout<<c.str;
		}
	}
	friend operator <<(ostream &dout, concat &c)
	{

		for(int i=0; i<MAX; i++)
		{
			dout<<"\n";
			dout<<c.str;
		}
	}
	concat operator +(concat &c)
	{
		concat temp;
		for(int i=0; i<MAX; i++)
		{
			strcat(temp.str,str);
			strcat(temp.str," ");
			strcat(temp.str,c.str);
		}
		return temp;
	}
};

void main()
{
	clrscr();
	concat o1,o2,o3;
	cout<<"Enter first name's : \n";
	cin>>o1;
	cout<<o2;

	cout<<"Enter last name's : \n";
	cin>>o2;
	cout<<o2;

	o3=o1+o2;
	cout<<o3;
	getch();
}