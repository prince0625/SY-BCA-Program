#include<iostream.h>
#include<conio.h>
class A
{
	int x;
	public:
	A(int a)
	{
		x=a;
		cout<<a<<endl;
	}
	A(A & i)
	{
		x=i.x;
		cout<<i.x<<endl;
	}
};
void main()
{
	clrscr();
	A a1(10);
	A a2(a1);
	getch();
}