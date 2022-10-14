#include<iostream>
using namespace std;
class college
{
	public:
	void a()
	{
		cout<<'a';
	}
};
class sem:public college
{
	public:
	void b()
	{
		cout<<'b';
	}
};
class marks:public college
{
	public:
		void c()
		{
			cout<<'c';
		}
};
int main()
{
	sem b1;
	b1.a();
	b1.b();
	marks b2;
	b2.a();
	b2.c();
	return 0;
}
