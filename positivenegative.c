#include<stdio.h>
void main()
{
	int i,s=0,n=1;
	while(n<=10)
{
	printf("enter %d numbers:",n);
	scanf("%d",&i);
	if(i<0)		
	continue;
	s+=i;
	n++;
}
	printf("\n sum:%d",s);
}
