#include<iostream.h>
#include<conio.h>
class point
{
	int x,y;
	public:
	point(int x1,int y1)
	{
		x=x1;
		y=y1;
		cout<<x<<endl;
		cout<<y<<endl;
	}
};
void main()
{
	clrscr();
	point p1(10,15);
	getch();
}