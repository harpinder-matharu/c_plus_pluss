#include "iostream.h"
#include "conio.h"
#include "string.h"

class list
{
	char element[20];

	public:
	void sortList(list *arr, int num);
	void showList(list *arr, int num);
	void getList(list *arr, int num);
};
void list::getList(list *arr, int num)
{
	int counter;
	for(counter = 0; counter < num; counter++)
	{
		cin>>arr[counter].element;
	}

};
void list::sortList(list *arr, int num)
{
	int pass_counter, swap_counter;
	char temp[20];

	for(pass_counter = 0; pass_counter < num; pass_counter++)
	{
		for(swap_counter = 0; swap_counter < num - pass_counter - 1; swap_counter++)
		{
			if(0 < strcmp(arr[swap_counter].element, arr[swap_counter + 1].element))
			{
				strcpy(temp, arr[swap_counter].element);
				strcpy(arr[swap_counter].element, arr[swap_counter + 1].element);
				strcpy(arr[swap_counter + 1].element, temp);
			}
		}
	}
}
void list::showList(list *arr, int num)
{
	int counter;
	for(counter = 0; counter < num; counter++)
	{
		cout<<arr[counter].element<<"\n";
	}
}
void main()
{
	clrscr();
	list l1,l2[5];
	cout<<"Enter lisrt:\n\n";
	l1.getList(l2,5);
	l1.sortList(l2,5);
	cout<<"Sorted list:\n\n";
	l1.showList(l2,5);
	getch();
}