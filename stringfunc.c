#include<stdio.h>
#include<string.h>
void main()
{
char str1[20],str2[20],s[20];
int x,l1,l2,l3;
printf("enter two strings:");
scanf("%s %s",&str1,&str2);
x=strcmp(str1,str2);
if(x!=0)
{
	printf("the strings are not equal");
}
else
{
	printf("the strings are equal");
}
 strcpy(s,str1);
 l1=strlen(str1);
 l2=strlen(str2);
 l3=strlen(s);
printf("\n s1=%s  \t length=%d characters \n",str1,l1);	
printf("\n s2=%s  \t length=%d characters \n",str2,l2);	
printf("\n s3=%s  \t length=%d characters \n",s,l3);	
}