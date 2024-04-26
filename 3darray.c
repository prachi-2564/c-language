#include<stdio.h>
void main()
{
  	int a[2][3][2]={{{1,2},{4,5},{6,7}},
	                { {8,9},{11,12},{14,15}}};
	            int i,j,k;
	            for(i=0;i<2;i++)
	            {
	            	for(j=0;j<3;j++)
	            	{
	            		for(k=0;k<2;k++)
	            	{
					
	            		printf(" %d",a[i][j][k]);
	            	}
	            	printf("\t");
					}
					printf("\n");
				}
}