#include<stdio.h>
void main()
{
	int a[100],n,i,j,temp,sum=0;
	float mean,median;
	printf("enter the total numbers of number you want to enter:");
	scanf("%d",&n);
	printf("enter %d elements of the array",n);
	/*mean*/
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	mean= (float)sum/n;
	printf("mean:%.2f",mean);
	/*sorting*/
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\nsorted array:");
	for(i=0;i<n;i++)
	{
     printf("%d ",a[i]);
	}
	/*median*/	
	if(n%2!=0)
	{
     
      median=a[n/2];
      printf("\n median:%.2f",median);
	}
	else
	{
	

		median= (a[n/2]+a[(n/2)-1])/2;
		printf("median:%.2f",median);
	}		
}