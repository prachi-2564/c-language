#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int factorial(int c)
{
	int fact=1,i;
	for(i=1;i<=c;i++)
	{
		fact*=i;
	}
	return fact;
}
void main()
{
	int a,b,c;
	printf("enter two numbers to be added:");
	scanf("%d %d",&a,&b);
	printf("\n sum=%d",add(a,b));
	printf("\n enter a number you want to find factorial of:");
	scanf("%d",&c);
		printf("\n factorial of %d=%d",c,factorial(c));
}