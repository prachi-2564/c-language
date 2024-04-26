/* pointer does not follow bodmas rule it goes from right to left*/
#include<stdio.h>
void main()
{
	int a,b,*p,*q,x,y,z;
	a=12;
	b=4;
	p=&a;
	q=&b;
	x=*p * *q-6;
	y=4* -*q/ *p +10;
	printf("Address of a= %u\n",p);
	printf("\n Address of b= %u\n",q);
	printf("\n");
	printf("a= %d, b=%d \n",a,b);
		printf("x= %d, y=%d \n",x,y);
		*q= *q+3;
		*p= *q-5;
		z= *p * *q-6;
		printf("\n a= %d, b=%d \n",a,b);
		printf("\n z= %d",z);
	
}