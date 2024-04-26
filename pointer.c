#include<stdio.h>
void main()
{
	int a=5,b=10;
	int *p, *q;
	p=&a;
	q=&b;
	printf("value=%d",a);
	printf("\n value=%d",&a);
	printf("\n value=%d",p);
	printf("\n value=%d",*p);
	printf("\n value=%x",q);
	
}