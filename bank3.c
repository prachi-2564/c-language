
#include<stdio.h>
struct bank{
	char name[20];
	int account_number;
	int balance;
	
};

void create_account(struct bank a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
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
    for (i=1; i<=n; i++)
    {
        if (a[i].account_number == accno)
        {
            return i;
        } 
    }
    return  - 1;
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
	int accno,i,n,ch,amt;
	printf("\nHow many Number of account u want to enter? : ");
    scanf("%d", &n);
    
	create_account(a,n);
	
	printf("Enter account number to login : ");
    scanf("%d", &accno);
    i = login(a, n, accno); // for found record index
    if (i == - 1)
       	{
            printf("Record not found : ");
        }
    else
       {
       	while(1)
       	{
			
	        printf("\nplease insert your choice...\n 1. Deposit \n 2. Withdraw \n 3. View_balance\n 4. Exit\n");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					printf("\nyour choice is deposit Amount....\n");
					
					printf("enter amount u want to deposit...: ");
					scanf("%d",&amt);
					printf("\n\n your current balance is %d",deposit(a,i,accno,amt));
					break;
				case 2:
					printf("\nyour choice is witdraw Amount....\n");
					printf("enter amount u want to deposit...: ");
					scanf("%d",&amt);
					printf("\n\n your current balance is %d",withdraw(a,i,accno,amt));
					break;
				case 3:
					printf("\nyour choice is show data....\n");
					print_data(a,i,accno);
					break;
				case 4:
					printf("Exiting program.\n");
                    return 0 ;
                    
				default:
					printf("\nplease insert a right choice.........");
			}
		}
	}
}