#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],j;
	cout<<"enter the elements of an array";
	cin>>n;
	cout<<"enter the number of elements";
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<"enter the element to be deleted";
	cin>>j;
	for(i=1;i<=n;i++)
	{
	   if (a[i]==j){
	   	
	   	continue;}
	   	
	   	else
	   	{
	   		cout<<a[j];
		   }
	   }
	       
return 0;
}    

