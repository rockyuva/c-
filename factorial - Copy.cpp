#include<iostream>
using namespace std;
int factnum (int n);
main()
{
   int n;
   cout<<"enter value of n";
   cin>>n;
   if(n>0)
   {
   	cout<<"\n factorial of %d is %d"<<n<<factnum(n);
	   }
	   else
	   {
	   	
	   	cout<<"invalid";
		   }
		   return 0;	
}
int factnum(int n)
{
	if(n=1)
	return n*factnum(n-1);
	else
	return 1;
	
}
