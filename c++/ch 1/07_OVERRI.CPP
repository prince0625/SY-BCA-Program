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
class derived:public base
{
	public:
	void print()
	{
		cout<<"derived class";
	}
};
void main()
{       clrscr();
	derived d;
	d.print();
	getch();
}