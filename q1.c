#include<stdio.h>
int main()
{
	int n,i,j,p[100],bt[100],wt[100],ps[100],avg[100],wait,temp1,temp2,temp3,c=0;
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
		for(j=0;j<n;j++)
		{ 
			
			if(p[i]	> p[j])
			{
				temp1=ps[i];
				ps[i]=ps[j];
				ps[j]=temp1;
				
				temp2=bt[i];
				bt[i]=bt[j];
				bt[j]=temp2;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		wt[i]=wait;
		wait=0+bt[1];
		printf("%d",wait);
	}
	return 0;
	
	
	
	
} 
