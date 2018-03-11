#include<iostream.h>
#include<conio.h>
class find
{
 float x1,x2,x3;
 public:
 void get_data()
 {
  cout<<"Enter first number : ";
  cin>>x1;
  cout<<"Enter second number : ";
  cin>>x2;
 }
 void add()
 {
  x3=x1+x2;
  cout<<"\nSum of "<<x1<<" and "<<x2<<" is "<<x3;
 }
 void sub()
 {
  x3=x1-x2;
  cout<<"\nDifference of "<<x1<<" and "<<x2<<" is "<<x3;
 }
 void pro()
 {
  x3=x1*x2;
  cout<<"\nProduct of "<<x1<<" and "<<x2<<" is "<<x3;
 }
 void div()
 {
  x3=x1/x2;
  cout<<"\nDivison of "<<x1<<" and "<<x2<<" is "<<x3;
 }
};
int main()
{
 clrscr();
 find f1;
 f1.get_data();
 f1.add();
 f1.sub();
 f1.pro();
 f1.div();
 getch();
 return 0;
}
