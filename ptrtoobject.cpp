#include "iostream"
#include "conio.h"

using namespace std;

class student
{
	char name[20];
	int age;
	int marks[3];
	public:
		void getdata(int num)
		{
			cout<<"\n"<<num+1<<". Enter student data.";
			cout<<"\nName : ";
			cin>>name;
			cout<<"Age : ";
			cin>>age;
			cout<<"Enter Marks\n";
			for(int i=0; i < 3; i++)
			{
				cout<<"Subject "<<i+1<<" : ";
				cin>>marks[i];
			}						
		}
		void putdata(int num)
		{
			cout<<"\n\n"<<num +1<<". Student data.";
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<age;
			cout<<"\nMarks";
			for(int i=0; i < 3; i++)
			{
				cout<<"\nSubject "<<i+1<<" : "<<marks[i];
			}
		}
};
int main()
{
	student *ptr[2];
	for(int i=0;i<2;i++)
	{
		ptr[i] = new student;
		ptr[i]->getdata(i);
	}
	for(int i=0;i<2;i++)
	{
		ptr[i]->putdata(i);
	}
	getch();
	return 0;
}
