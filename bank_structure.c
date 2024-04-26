#include<stdio.h>
#include<conio.h>
struct bank
{
	char name[20];
	int account;
	int balance;
};
 void create_account(struct bank b[])
 {
 	int i;
 	for(i=0;i<2;i++)
 	{
 		printf("\n enter %d customer name:",i+1);
 		scanf("%s",b[i].name);
 		printf("\n enter %d customer account:",i+1);
 		scanf("%d",&b[i].account);
 		printf("\n enter %d customer balance:",i+1);
 		scanf("%d",&b[i].balance);	
	}
 }
 void data_print(struct bank b[])
 {
 	int i;
 	for(i=0;i<2;i++)
 	{
 		printf("\n Customer %d 's name : %s :",i+1,b[i].name);
 		printf("\n Customer %d 's account: %d",i+1,b[i].account);
 		printf("\n Customer %d's balance : %d",i+1,b[i].balance);
 		
	}
 }
 void login(struct bank b[])
 {
 	int i,accno,c,amt;
 	printf("\n Enter account no:");
 	scanf("%d",&accno);
 	
 	for(i=0;i<2;i++)
 	{
 	if(accno==b[i].account)
	 {
	 	printf("\nchoose :\n1.depoist \n2.withdraw \n3.checkbalance: ");
	 	scanf("%d",&c);
	 	switch (c)
	 	{
	 		    case 1:
	 			printf("\nenter the amount to be deposited:");
	 			scanf("%d",&amt);
	 			b[i].balance+=amt;
	 			printf("\n CURRENT balance:%d",b[i].balance);
	 			break;
	 		    case 2:
	 			printf("\n enter the amount to be withdrawn:");
	 			scanf("%d",&amt);
	 			if(b[i].balance>amt)
	 			{
				 	b[i].balance-=amt;
				 	printf("\n current balance:%d",b[i].balance);
			    }
				 else
				{
				 printf("\n insufficent balance:");	
				}
	 			break;
	 		    case 3:
	 			data_print(b);
	 			break;
	 					
		 }
	}
	 
	 else
	 {
	 	printf("\nTHE ACCOUNT DOESN'T EXISTS");
	 }	
	
   }  
 }
void main()
{
	int s;
	struct bank b[2];
	while(1)
	{
		printf("\nenter your choice: \n 1. create account \n2.login \n3. exit:\n");
		scanf("%d",&s);
		switch(s)
		{
			case 1:
			create_account(b);
			break;
			case 2:
			login(b);
			break;
			case 3:
			printf("Exiting program.\n");
            return 0;
	    }  
	}
	getch();
}	
	
