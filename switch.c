#include<stdio.h>
 void main()
 {
 	int a,b;
 	char c;
 	printf("Enter your choice(+ - * / mod):");
 	scanf("%s",&c);
 	printf("Enter two numbers:");
 	scanf("%d %d",&a,&b);
 
 	switch(c)
 	{
 		case '+':
 			printf("addition:%d",a+b);
 			break;
 			case '-':
 					printf("sunbtraction:%d",a-b);
 					break;
 					case '*':
 							printf("multiplication:%d",a*b);
 							break;
 							case '%':
 									printf("remainder:%d",a%b);
 									break;
 									case '/':
 											printf("divison:%d",a+b);
 											break;
 											default:
 												printf("error");
 			
				 
	 }
 	
 }
 