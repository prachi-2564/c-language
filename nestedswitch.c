#include<stdio.h>
void main()
{
	int a,op,s,c,q,total;
	printf("enter your choice :(1 for punjabi, 2 for south indian ,3 for cold drinks):");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("\n you choose punjabi \n select your choice (11 for panner sabzi and roti ,12 for dal and rice and 13 for lassi)");
			scanf("%d",&op);
		
			switch(op)
			{
				case 11:
					printf("you have orderded panner sabzi and roti");
					printf("\n how many plates?");
					scanf("%d",&q);
					total= 150*q;
					printf("your payable bill is %d rupees",total);
					break;
					case 12:
					printf("you have orderded dal and rice");
					printf("\n how many plates?");
					scanf("%d",&q);
					total= 200*q;
					printf("\nyour payable bill is %d rupees",total);
					break;
					 case 13:
					 	printf("you have orderded  lassi");
					 	printf("\nhow many plates?");
					scanf("%d",&q);
					total= 50*q;
					printf("\n your payable bill is %d rupees",total);
					 	break;
						
			}
			break;
			case 2:
				printf("you  choose south indian \n select your choice(21 for dosa 22 for utapam and 23 for idli):");
				scanf("%d",&s);
			    switch(s)
			    {
			    	case 21:
			    		printf("you have orderded  dosa");
			    		printf("\nhow many plates?");
					scanf("%d",&q);
					total= 180*q;
					printf("\nyour payable bill is %d rupees",total);
			    		break;
			    			case 22:
			    		printf("you have orderded utapam");
			    		printf("\nhow many plates?");
					scanf("%d",&q);
					total= 150*q;
					printf("\nyour payable bill is %d rupees",total);
			    		break;
			    			case 23:
			    		printf("you have orderded idli");
			    		printf("\nhow many plates?");
					scanf("%d",&q);
					total= 100*q;
					printf("\nyour payable bill is %d rupees",total);
			    		break;
				}
				break;
				case 3:
					printf("you  choose cold drinks \n select your choice(31 for coco-cola 32 for maza 33 for dew):");
					scanf("%d",&c);
					switch(c)
					{
						case 31:
			    		printf("you have orderded  coco-cola");
			    		printf("\nhow many bottles?");
					scanf("%d",&q);
					total= 80*q;
					printf("\nyour payable bill is %d rupees",total);
			    		break;
			    			case 32:
			    		printf("you have orderded maza");
			    		printf("\nhow many bottles ?");
					scanf("%d",&q);
					total= 90*q;
					printf("\nyour payable bill is %d rupees",total);
			    		break;
			    			case 33:
			    		printf("you have orderded dew");
			    		printf("\nhow many bottles?");
					scanf("%d",&q);
					total= 60*q;
					printf("\nyour payable bill is %d rupees",total);
			    		break;
					}
					break;
					default:
						printf("wrong item selected");
						break;
				
	}
}