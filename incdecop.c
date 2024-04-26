#include<stdio.h>
void main()
{
	
	int x,y;
	printf("enter a number");
	scanf("%d",&x);
	printf("x++:%d",x++);
	printf("++x:%d",++x);
	printf("x--:%d",x--);
	printf("--x:%d",--x);
	y= x++ + ++x + x++ + ++x;
	printf("ans:%d",y);

	
}