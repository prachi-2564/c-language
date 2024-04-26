#include<stdio.h>
void main()
{
int count=0,sp=0,i;
char s[100];
printf("enter a sentence:");
scanf("%[^\n])s",&s);
for(i=0;s[i]!='\0';i++)
{
	if(s[i]==' '&& s[i+1]!=' ')
	count++;
}
printf("\n number of words in the given stentence=%d",count+1);
for(i=0;s[i]!='\0';i++)
{
	if(s[i]>=33 && s[i]<=47 || s[i]>=58 && s[i]<=64 || s[i]>=91 && s[i]<=96 || s[i]>=123 && s[i]<=126)
	sp++;
}
printf("\n number of special characters in the given stentence=%d",sp);

}