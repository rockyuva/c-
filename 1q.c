#include<stdio.h>
int main()
{
	int n,i,p[100],bt[100],wt[100],ps[100],avg[100],wait=0,temp1,temp2,temp3,c=0;
	printf("enter number of process ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter burst time for p%d ",i+1);
		scanf("%d ",&bt[i]);
		printf("enter priority for p%d ",i+1);
		scanf("%d ",&ps[i]);
	}
	for(i=0;i<n;i++)
	{
		if(p[i]	>p[i+1])
		{
			temp1=ps[i];
			ps[i]=ps[i+1];
			ps[i+1]=temp1;
			
			temp2=bt[i];
			bt[i]=p[i+1];
			bt[i+1]=temp2;
			
			temp3=p[i];
			p[i]=p[i+1];
			p[i+1]=temp3;
		}
	}
	printf("process \t\t priotrity \t\t burst time \t\t ");
	for(i=0;i<n;i++)
	{
		printf("%d     \t  %d       \t%d         \t\n ",p[i],ps[i],bt[i]);

	}
	
	return 0;
}
