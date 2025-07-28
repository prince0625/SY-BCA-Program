#include<iostream.h>
#include<conio.h>
class emp
{
	protected:
	int did;
	char dnm[20];
	public:
	int eid;
	char enm[20];
	double salary;
	void getdata()
	{
		cout<<"enter eid:"<<eid;
		cin>>eid;
		cout<<"enter enm:"<<enm;
		cin>>enm;
		cout<<"enter salary:"<<salary;
		cin>>salary;
		cout<<eid<<endl<<enm<<endl<<salary<<endl;
	}
	void show()
	{
		cout<<eid;
		cout<<enm;
		cout<<salary;
	}
};
class department:public emp
{
	public:
	void get()
	{
	cout<<"enter did:"<<did;
	cin>>did;
	cout<<"enter dnm:"<<dnm;
	cin>>dnm;
	cout<<did<<endl<<dnm<<endl;
	}
};
void main()
{
	clrscr();
	department d1;
	d1.getdata();
	d1.show();
	d1.get();
	getch();
}