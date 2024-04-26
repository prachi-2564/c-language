#include<stdio.h>
void main()
{
	int m,s,ss,h,e;
	printf("enter the marks of maths, science, ss,hindi and english:");
	scanf("%d %d %d %d %d",&m,&s,&ss,&h,&e);
	printf("\n maths=%d \n science=%d \n SS=%d \n hindi=%d \n english:%d",m,s,ss,h,e );
	int total= m+s+ss+h+e;
	printf(" \n Total marks =%d",total);
	float perc;
	perc=(total*100)/500;
	printf("\n percentage=%f",perc);
	if(perc<=100 && perc>=90)
	{
		printf("\nGRADE:A+");
	}
	else if(perc<90 && perc>=80)
	{
			printf("\nGRADE:A");
	}
	else if(perc<80 && perc>=70)
	{
			printf("\nGRADE:B+");
	}
	else if(perc<70 && perc>=50)
	{
			printf("\nGRADE:B");
	}
	else if(perc<50 && perc>=40)
	{
			printf("\nGRADE:C");
	}
	else if(perc<40 && perc>=35)
	{
			printf("\nGRADE:D");
	}
	else
	{
			printf("\nGRADE:FAIL");
	}
	
}