#include<iostream.h>
#include<conio.h>
class emp
{
	int eid;
	char nm[20];
	float salary;
	public:
	void get()
	{
		cout<<"enter value:"<<eid;
		cin>>eid;
		cout<<"enter value:"<<nm;
		cin>>nm;
		cout<<"enter value:"<<salary;
		cin>>salary;
	}
	void put()
	{
		cout<<eid;
		cout<<nm;
		cout<<salary;
	}
};
void main()
{
	clrscr();
	emp e1;
	e1.get();
	e1.put();
	getch();
}