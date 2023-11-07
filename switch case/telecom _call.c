#include<stdio.h>
main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1 : printf("\nwelcome to our shop \n\n");
		
		char language;
		printf("select your language\n");
		printf("A.hindi\n");
		printf("B.ENGLISH\n\n");
	
	    printf("enter ans :");
		scanf(" %c",&language);
		
		switch(language)
		{
			case 'A' : printf("me aapki kese maddad kar sakti hu ?\n\n");
			
			printf("1.order dene ke liye 3754246756 number pe call kre\n");
			printf("2.shikayt karne ke liye 345635786 number pe call kre\n\n");
			
			int ans;
			printf("enter your ans :");
			scanf("%d",&ans);
			
			switch(ans)
			{
				case 1 : printf("\naapka order conform hogya \nthank you for visit\n");
				break;
				case 2 : printf("aapki shikayt par kam kiya jayega \n");
				break;
				
			}
			break;
			case 'B' : printf("how can i help you ?\n\n");
			
			printf("1.conform your order this number 3754246756 \n");
			printf("2.if you have any problum conect this number 345635786\n\n");
			
			ans;
			printf("enter your ans :");
			scanf("%d",&ans);
			
			switch(ans)
			{
				case 1 : printf("\n\nyour order is conform \nthank you for visit\n");
				break;
				case 2 : printf("\nworking on your problum ");
				break;
				
			}
			
			break;
		
		}
		
		
		break;
		case 0 : printf("BYY");
		break;
		
	}
}