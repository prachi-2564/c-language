#include<stdio.h>
struct bank
{
	 char name[20];
	 int account_number;
	 int balance:
};
void create_account(struct bank a[],int n)
{
	int i;
	for(i=1;i<n;i++)
	{
		printf("\nenter %d name..",i);
		scanf("%s",a[i].name);
		printf("\nenter %d account number",i);
		scanf("%d",&a[i].account_number);
		printf("\nenter %d balance",i);
		scanf("%d",&a[i].balance);
	}
}
void print_data(struct bank a[],int i,int accno)
{
	printf("\n%d user name : %s",i,a[i].name);
	printf("\n%d user account_number : %d",i,a[i].account_number);
    printf("\n%d user balance : %d",i,a[i].balance);
	
}
int login(struct bank a[], int n,int accno)
{
	int i;
	for(i=0;i<n;i++)
	{
	  if(a[i].account_number == accno))
	  {
	  	return 1;
	  }	
	}
	return -1;
}
int deposit(struct bank a[],int i,int accno,int amt)
{
	a[i].balance+=amt;
	return a[i].balance;
}
int withdraw(struct bank a[],int i,int accno,int amt)
{
	if(a[i].balance>amt)
	{
		a[i].balance-=amt;
		return a[i].balance;
	}
	else
	{
		printf("Insufficient amount");
	}
}
int main()
{
	struct bank a[10];
	int accno,i,ch,amt;
	printf("\n how many accounts do you want to create:");
	scanf("%d",&n);
	create account(a,n);
	printf("Enter account number to login : ");
    scanf("%d", &accno);
    
    i=login(a,n,amt);
	 
	
}
