#include<iostream.h>
#include<conio.h>
class std
{
	int rollno;
	char snm[20];
	public:
	std()
	{
		cout<<"enter rollno=";
		cin>>rollno;
		cout<<"enter snm=";
		cin>>snm;
		cout<<rollno<<endl<<snm;
	}
};
void main()
{
	clrscr();
	std s1;
	getch();
}