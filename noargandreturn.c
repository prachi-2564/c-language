#include<stdio.h>
int add()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	return a+b;
}
void main()
{
int c;
c=add();
printf("Addition=%d",c);
}