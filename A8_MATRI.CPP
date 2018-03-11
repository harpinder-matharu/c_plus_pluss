#include "iostream.h"
#include "conio.h"
#include "process.h"

class mat
{
	int matrix[10][10],row,col;

	public:
	mat()
	{
		row = 0; col = 0;
	}
	void getmat();
	void dismat();
	mat addmat(mat ob);
	mat submat(mat ob);
	mat mulmat(mat ob);
};
void mat::getmat()
{
	cout<<"Enter no of rows : ";
	cin>>row;
	cout<<"Enter no of columns : ";
	cin>>col;
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout<<"Enter matrix element : ";
			cin>>matrix[i][j];
		}
	}
}
void mat::dismat()
{
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
}
mat mat::addmat(mat ob)
{
	mat temp;
	if((row == ob.row) && (col == ob.col))
	{
		temp.row=row,temp.col=col;
		for(int i = 0; i < row; i++)
			for(int j = 0; j < col; j++)
				temp.matrix[i][j] = matrix[i][j] + ob.matrix[i][j];
	}
	else
	{
		cout<<"Error! Addition is not possible.\n";
//		exit(1);
	}
	return temp;
}
mat mat::submat(mat ob)
{
	mat temp;
	if((row == ob.row) && (col == ob.col))
	{
		temp.row=row,temp.col=col;
		temp.row=row,temp.col=col;
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				temp.matrix[i][j] = matrix[i][j] - ob.matrix[i][j];
	}
	else
	{
		cout<<"Error! Subtration is not possible.\n";
  //		exit(1);
	}
	return temp;
}
mat mat::mulmat(mat ob)
{
	mat temp;
	if(col == ob.row)
	{
		temp.row=row,temp.col=ob.col;
		for(int i=0;i<row;i++)
			for(int j=0;j<ob.col;j++)
			{
				temp.matrix[i][j]=0;
				for(int k=0;k<col;k++)
					temp.matrix[i][j]=temp.matrix[i][j]+matrix[i][k]*ob.matrix[k][j];
			}

	}
	else
	{
		cout<<"Error! Multliplication is not possible.\n";
	}
	return temp;
}

void main()
{
	clrscr();
	mat m1,m2,m3;
	cout<<"Enter matrix1 :\n";
	m1.getmat();
	m1.dismat();
	cout<<"Enter matrix2 :\n";
	m2.getmat();
	m2.dismat();
	cout<<"Additon of Matrices :\n";
	m3=m1.addmat(m2);
	m3.dismat();
	cout<<"Subtraction of Matrices :\n";
	m3=m1.submat(m2);
	m3.dismat();
	cout<<"Multiplication of Matrices :\n";
	m3=m1.mulmat(m2);
	m3.dismat();
	getch();
}
