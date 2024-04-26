#include<stdio.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
}s[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf(" enter name, rollno ,marks:");
		scanf("%s %d %d",s[i].name,&s[i].rollno,&s[i].marks);
		
	}
	printf(" Student Info:");
	
		for(i=0;i<5;i++)
		{
			printf("\n Name=%s \n roll no=%d  \n marks=%d",s[i].name,s[i].rollno,s[i].marks);
		}
	
}