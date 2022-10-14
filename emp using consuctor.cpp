#include<iostream>
using namespace std;
 class employee
 {
 	int a;
 	char b[100];
 	public:
 		void get();
 		void dis();
 };
 void employee::get()
 {
 	cout<<" id";
 	cin>>a;
 	cout<<"name";
 	cin>>b;
 }
 void employee::dis()
 {
 	cout<<"emp name ;"<<b;
 	cout<<"emp id ;"<<a;
 	cin>>a;
 }
 int main()
 {
 	employee c;
 	c.get();
	c.dis();
	return 0;
	  }
