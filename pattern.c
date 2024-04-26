#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}

for(i=4;i<=0;i--)
	{
		for(j=4;j<=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}