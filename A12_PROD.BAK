/*pragram that input product name and price, and display product
and price in ascending order (use concept of copy constructor. */

#include <iostream.h>
#include <conio.h>
#include <string.h>
//using namespace std;

class product
{
	float price;
	char name[20];
	public:
	product()
	{
		price = 0;
	}
	product(float f_price, char *f_name = "product")
	{
		price = f_price;
		strcpy(name, f_name);
	}
	product(product &f_p)
	{
		price = f_p.price;
		strcpy(name, f_p.name);
	}
	void sort_ascen(product *f_p, int no_of_p);
	void display(product *f_p, int no_of_p);
	void get_data(product *f_p, int no_of_p);
};
void product::sort_ascen(product *f_p, int no_of_p)
{
	int pass_counter, swap_counter;
	float temp;
	char *s_temp;
	for(pass_counter = 0; pass_counter < no_of_p; pass_counter ++)
	{
		for(swap_counter = 0; swap_counter < no_of_p-pass_counter-1; swap_counter ++)
		{
			if(f_p[swap_counter].price > f_p[swap_counter + 1].price)
			{
				temp = f_p[swap_counter].price;
				f_p[swap_counter].price = f_p[swap_counter + 1].price;
				f_p[swap_counter + 1].price = temp;
				strcpy(s_temp,f_p[swap_counter + 1 ].name);
				strcpy(f_p[swap_counter + 1].name,f_p[swap_counter].name);
				strcpy(f_p[swap_counter].name,s_temp);
			}
		}
	}
}
void product::display(product *f_p, int no_of_p)
{
	int counter;
	for(counter = 0; counter < no_of_p; counter ++)
	{
		cout<<"\nProduct name : "<<f_p[counter].name<<"\nPrice of product : "<<f_p[counter].price;endl;
	}
}
void product::get_data(product *f_p, int no_of_p)
{
	int counter;
	for(counter = 0; counter < no_of_p; counter ++)
	{
		cout<<"\nEmtry no. "<<counter + 1;
		cout<<"\nEnter product name : ";
		cin>>f_p[counter].name;
		cout<<"Enter price of product : ";
		cin>>f_p[counter].price;
	}
}
int main()
{
	clrscr();
	product p1,p2[5];
	p1.get_data(p2, 5);
	p1.sort_ascen(p2, 5);
	cout<<"\nSorted products :\n";
	p1.display(p2, 5);
	getch();
	return 0;
}
