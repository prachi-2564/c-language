#include<stdio.h>
void main()
{
char str[20];
printf("enter a string:");
/*scanf("%s",str);
gets(str);*/
fgets(str,20,stdin);
printf("string:%s",&str);
}