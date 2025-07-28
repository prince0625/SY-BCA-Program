#include<iostream.h>
#include<conio.h>
class sum
{
	int a,b,c;
	public:
	sum()
	{
		a=10;
		b=20;
		c=a+b;
		cout<<"sum:"<<c;
	}
	~sum()
	{
		cout<<"call destructor"<<endl;"call destructor";
	}
};
void main()
{
	clrscr();
	sum s;
	cout<<"call main"<<endl;"call main";
	getch();
}