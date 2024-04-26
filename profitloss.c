#include<stdio.h>
void main()
{
	int n ,b,c,l;
	printf("enter the cost price of product:");
	scanf("%d",&n);
	printf("enter the selling price of the product:");
	scanf("%d",&b);
	c=b-n;
	
	if(c==0)
	{
	printf("there is no profit no loss");
	
	}
	else if(c>0)
	{
		printf("profit:%d",c);
	}
	else
	{
			printf("loss:%d",c);
	}
}