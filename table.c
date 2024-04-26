#include<stdio.h>
void main()
{
	
	int a,i=1;
	printf("enter a number");
	scanf("%d",&a);
	do
	{
		printf("%d x %d =%d \n",a,i,a*i);
		i++;
	}
	while(i<=10);
	}