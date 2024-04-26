#include<stdio.h>
void factorial(int a)
{
	int fact=1,i;
	for(i=1;i<=a;i++)
	
	{
		fact=fact*i;
	}
	printf("\n factorial of %d=%d",a,fact);
	
}

void factors(int b)
{
	printf("\n factors of %d=",b);
	int i;
	for(i=1;i<=b;i++)
	{
		if(b%i==0)
		{
			printf("%d ",i);
		}
	}
}
void lcm(int c,int d)
{
	int max;
	max=(c>d)?c:d;
	while(1)
	{
	if(max%c==0 && max%d==0)
	{
		printf("\n LCM=%d",max);
		break;
	}
		max++;	
	}
}
void main()
{
	int a,b,c,d;
	printf("\n enter a number whose factorial you want to find: ");
	scanf("%d",&a);
	factorial(a);
	printf("\n enter a number whose factors you want to find: ");
	scanf("%d",&b);
	factors(b);
	printf("\n enter two number whose lcm you want to find: ");
	scanf("%d %d",&c,&d);
	lcm(c,d);
}