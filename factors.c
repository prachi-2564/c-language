#include<stdio.h>
void factor()
{
	int a,i;
	printf("enter a number:");
	scanf("%d",&a);
	printf("factors of %d=",a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d ",i);
		}
	}
	
}
void main()
{
	factor();
}