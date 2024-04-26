#include<stdio.h>
void add()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n SUM=%d",a+b);
 
}
void sub()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n DIFFERENCE=%d",a-b);
 
}
void multiply()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("\n PRODUCT=%d",a*b);
 
}
void div()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	printf("\n DIVISON OUTPUT=%d",a/b);
 
}
void rem()
{
    int a,b;
	printf("Enter two numbers");
	scanf("%d %d",&a,&b);
	printf("\n REMAINDER=%d",a%b);
 	
}
int main()
{
int c;
printf("ENTER YOUR CHOICE:\n 1.ADDITION \n 2.SUBTRACTION \n 3.MULTIPLICATION \n 4.DIVISION \n 5.REMAINDER:\n");
scanf("%d",&c);
switch(c)
{
case 1:
add();
break;
case 2:
sub();
break;
case 3:
multiply();
break;
case 4:
div();
break;
case 5:
rem();
break;
default:
printf("wrong choice");
break;	
}	
}
