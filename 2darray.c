#include<stdio.h>
void main()
{
  	int a[2][3]={{1,2,3},
	            {5,6,7} };
	            int i,j;
	            for(i=0;i<2;i++)
	            {
	            	for(j=0;j<3;j++)
	            	{
	            		printf(" %d",a[i][j]);
					}
					printf("\n");
				}
}