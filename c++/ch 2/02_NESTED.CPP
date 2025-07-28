#include<iostream.h>
#include<conio.h>
class A
{
	public:
	class B
	{
		private:
		int num;
		public:
		void getdata(int n)
		{
			num = n;
		}
			void putdata()
		{
			cout<<"The number is"<<num;
		}
	};
};
void main()
{
	clrscr();
	cout<<"Nested classes in C++"<<endl;
	A :: B obj;
	obj.getdata(9);
	obj.putdata();
	getch();
}