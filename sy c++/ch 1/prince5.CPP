#include<iostream.h>
#include<conio.h>
class base
{
	public:
	void print()
	{
		cout<<"base class";
	}
};
class derived
{
	public:
	void print()
	{
		cout<<"derivrd class";
	}
};
void main()
{
	clrscr();
	derived d;
	d.print();
	getch();
}