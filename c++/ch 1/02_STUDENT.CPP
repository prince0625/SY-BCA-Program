#include<iostream.h>
#include<conio.h>
class student
{
	int rollno;
	char snm[20];
	public:
	void get()
	{
		cout<<"enter student rollno=";
		cin>>rollno;
		cout<<"enter student name=";
		cin>>snm;
		cout<<rollno<<endl<<snm;
	}
};
void main()
{
	clrscr();
	student s1;
	s1.get();
}