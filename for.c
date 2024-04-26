#include<stdio.h>
void main()
{
	int i;
	for (i=1;i<=100;i++)
	{
		printf("%d \t",i);
	}
	for (i=100;i>=1;i--)
	{
		printf(" %d \t",i);
	}
	for(i=0;i<100;i++)
	{
		if(i%2==0)
		{
			printf("%d \t",i);
		}
	}
}