#include<stdio.h>
void fact()
{
	int a,i,fact=1;
	printf("enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d=%d:",a,fact);
}
void main()
{
	fact();
}