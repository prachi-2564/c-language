 #include<stdio.h>
 void main()
 {
 	int a,b,*p,*q,temp;
 	printf("enter two numbers:");
 	scanf("%d %d",&a,&b);
 	printf("a=%d \n b=%d",a,b);
 	p=&a;
 	q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\n a=%d \n b=%d",*p,*q );
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("\n a=%d \n b=%d",*p,*q );
 }