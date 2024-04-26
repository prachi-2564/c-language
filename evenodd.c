#include<stdio.h>
void main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n==0)
	{
		printf("%d is 0",n);
	}
	else if(n%2==0)
	{
		printf("%d is an even number",n);
	}
		else
		{
			printf("%d is an odd number",n);
	
	}
}