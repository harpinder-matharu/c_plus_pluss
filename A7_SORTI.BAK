#include "iostream.h"
#include "conio.h"

class list
{
	int element;

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
	int pass_counter, swap_counter, temp;

	for(pass_counter = 0; pass_counter < num; pass_counter++)
	{
		for(swap_counter = 0; swap_counter < num - pass_counter - 1; swap_counter++)
		{
			if(arr[swap_counter].element > arr[swap_counter + 1].element)
			{
				temp = arr[swap_counter].element;
				arr[swap_counter].element = arr[swap_counter + 1].element;;
				arr[swap_counter + 1].element = temp;
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
	cout<<"Enter lisrt:\n";
	l1.getList(l2,5);
	l1.sortList(l2,5);
	cout<<"Sorted list:\n";
	l1.showList(l2,5);
	getch();
}