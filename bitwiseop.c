#include<stdio.h>
void main()

{
	int a,b,c;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	c=a&b;
	printf("\n and operator result:%d",c);
	c=a|b;
		printf("\n or operator result:%d",c);
		c=a^b;
			printf("\n xor operator result:%d",c);
			c=a<<2;
				printf("\n left shift ans:%d",c);
				c=b>>2 ;
					printf("\n right shift ans:%d",c);
					c=~a;
						printf("\n complement operator ans:%d",c);
		
}