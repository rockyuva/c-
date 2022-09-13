#include<iostream>
#include<conio.h>
void main()
{
clrscr();
int a[20],x,i;
cout<<"Enter the array size:- ";
cin>>x;
cout<<"Enter "<<x<<" elements:- ";
for (i=1;i<=x;i++)
cin>>a[i];
for (i=1;i<=x;i++)
cout<<" "<<a[i];
getch();
}