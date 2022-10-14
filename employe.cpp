#include<iostream>
using namespace std;
class employe
{
	int id,salary,b;
	char name[100];
	public:
		void input();
		void display();
};
void employe::input()
{
	cout<<"enter the id ";
	cin>>id;
	cout<<"enter the name ";
	cin>>name;
	cout<<"emter the salary "<<endl;
	cin>>salary;
}
void employe::display()
{
	if(salary<=10000)
	{
		b=0.05*salary;
		cout<<"bonus = "<<b;
	}
	else if(salary>10000 && salary<=20000)
	{
		b=0.07*salary;
		cout<<"bonus = "<<b;
	}
	else if(salary>20000 && salary<=30000)
	{
		b=0.1*salary;
		cout<<"bonus = "<<b;
	}
	else if(salary>30000)
	{
		b=0.2*salary;
		cout<<"bonus = "<<b;
	}
	else
	{
		cout<<"no bonus";
	}
}
int main()
{
	employe E;
	E.input();
	E.display();
}
