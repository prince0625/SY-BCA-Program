#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	char name[20];
	double fee;
	public:
	student()
	{
		cout<<"enter the rollno:";
		cin>>rno;
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the fee:";
		cin>>fee;
	}
	void display()
	{
		cout<<rno<<endl<<name<<endl<<fee;
	}
};
void main()
{
	clrscr();
	student s;
	getch();
}