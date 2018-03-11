#include<iostream.h>
#include<conio.h>
class find
{
 int x1,x2;
 public:
 void get_data()
 {
  cout<<"Enter number to find factorial: ";
  cin>>x1;
  x2=fact(x1);
  cout<<"Factorial of "<<x1<<" is "<<x2;
 }
 int fact(int x)
 {
  if((x==0)||(x==1))
   return 1;
  else
   return(x*fact(x-1));
 }
};
int main()
{
 clrscr();
 find f1;
 f1.get_data();
 getch();
 return 0;
}
