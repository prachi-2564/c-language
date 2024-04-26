//recursion
#include<stdio.h>
 int fact(int n)
 {
 	if(n==0)
 	{
 		return 1;
	 }
	 else 
	 {
	 	return n*fact(n-1);
	 }
 }
int factor(int n,int i)
{
	if(i<=n)
	{
      if(n%i==0)
	  {
	  	printf("%d",i);
	  }
	 factor(n,i+1);
	 }

}
int main()
{
	
fact(4);
factor(7,1);
}