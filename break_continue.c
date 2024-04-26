#include<stdio.h>
void main()
{
  int i;
  for(i=1;i<=50;i++)
  {
  	if(i%5==0)
  	continue; /*break*/
  	printf(" %d \n ",i);
  }
}