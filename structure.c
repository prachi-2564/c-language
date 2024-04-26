#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollno;
	int marks;
}s;
void main()
{
	struct student s1;
	strcpy(s.name,"Thala");
	s.rollno=7;
	s.marks=19;
    strcpy(s1.name,"prachi");
	s1.rollno=8;
	s1.marks=18;
	printf("First student:");
	printf(" \n name=%s \n roll no=%d \n marks=%d",s.name,s.rollno,s.marks);
	printf("\n second student:");
	printf(" \n name=%s \n roll no=%d \n marks=%d",s1.name,s1.rollno,s1.marks);	
}