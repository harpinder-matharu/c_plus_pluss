//11. write a program to concatenate two strings.

#include "iostream"
using namespace std;

class concat
{
	string s1, s2, result;
	public:
	void sum_strings()		
	{
		cout<<"Enter string one : ";
		getline(cin, s1);
		cout<<"Enter string two : ";
		getline(cin, s2);
		result = s1 + ' ' + s2;
		cout<<"Resultant string : "<<result;
	}
};
int main()
{
	concat c;
	c.sum_strings();
	return 0;
}
