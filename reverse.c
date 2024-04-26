#include<stdio.h>
void main()
{
	int n,org,rev=0,rem;
	printf("enter a number:");
	scanf("%d",&n);
	org=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\nreversed number:%d",rev);
	if(org==rev)
	{
		printf(" \n %d is a palindrome number",org);
	}
	else
	{
		printf(" \n %d is not a palindrome number",org);
	}
}