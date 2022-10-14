#include<iostream>
using namespace std;
	int hra,ta,da,bp,ded,home,pf;
		int empid;
	char empname[20];
	int gs,ns;
	
class master
{
	int empid;
	char empname[20];
	public:
		void getdata()
		{
		    cout<<"enterempid";
			cin>>empid;
			cout<<"empname";
			cin>>empname;
		}
};
class admin:public master
{
	public:
		void getdata1()
		{
			cout<<"enter bp amount";
			cin>>bp;
		}
};
class account:public master
{
	public:
		void getdata2()
		{
			hra=bp*60/100;
			ta=bp*60/100;
			da=bp*100/100;
			cout<<"home";
			cin>>home;
			cout<<"pf";
			cin>>pf;
		     cout<<"hra="<<hra;
			cout<<"ta="<<ta;
			cout<<"da="<<da;
		
		}
};
class person:public admin,public account
{
	public:
			void getdata3()
		{
			gs=bp+hra+ta+da;
			ded=home+pf;
			ns=gs-ded;
			cout<<"gs="<<gs<<endl;
			cout<<"ded="<<ded<<endl;
			cout<<"ns="<<ns<<endl;
		}
};
main()
{
master m;
m.getdata();
person p;
p.getdata1();
p.getdata2();
p.getdata3();
}
