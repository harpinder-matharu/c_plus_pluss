#include<iostream.h>
#include<conio.h>
class find
{
 float x1,x2;
 public:
 void c_to_f()
 {
  cout<<"\nEnter temperature in celcius : ";
  cin>>x1;
  x2=((x1*9)/5)+32;
  cout<<"\nFahrenheit of "<<x1<<"' Celsius is "<<x2<<"'";
 }
 void f_to_c()
 {
  cout<<"\n\nEnter temperature in Fahrenheit : ";
  cin>>x1;
  x2=((x1-32)*5)/9;
  cout<<"\nCelsius of "<<x1<<"' Fahrenheit is "<<x2<<"'";
 }
};
int main()
{
 clrscr();
 find f1;
 f1.c_to_f();
 f1.f_to_c();
 getch();
 return 0;
}
