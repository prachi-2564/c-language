#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d %d\t ",i,j);
		}
		printf("\n");
	}


	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d \t ",i);
		}
		printf("\n");
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf(" %d \t ",j);
		}
		printf("\n");
	}
}