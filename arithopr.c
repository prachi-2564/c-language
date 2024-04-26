#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf(" \n SUM: %d",c);
	c=a*b;
	printf(" \n multiplication: %d",c);
	c=a-b;
	printf(" \n difference: %d",c);
	c=a/b;
	printf(" \n quotient : %d",c);
	c=a%b;
	printf(" \n remainder: %d",c);
	
}