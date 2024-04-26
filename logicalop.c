#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	d= (a<b && a>c );
	printf("ans:%d",d);
	d=(a==b && b>c);
		printf(" \n ans:%d",d);
		d=(a>c && b<c);
			printf(" \n ans:%d",d);
			d=(a<c && b==c);
				printf("\n ans:%d",d);
	d=(a<b || a>c);
		printf("\n ans:%d",d);
		d=(a==b || b>c);
			printf("\n ans:%d",d);
			d=(a>b || a>c);
				printf("\n ans:%d",d);
				d=(b>c || a<b);
					printf(" \n ans:%d",d);
					d= !(a>b);
						printf("\n ans:%d",d);
						d=!(a>b && c==b);
							printf("\n ans:%d",d);
							d=!(a<b || a>c);
								printf("\n ans:%d",d);
							\
	
}