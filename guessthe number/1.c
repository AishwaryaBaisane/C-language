#include<stdio.h>
main()
{
	int a;
	printf("guess the number between 1 to 10\n");
	printf("are you guess the number ?");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1 : printf("ok\n");
		
		int b;
		printf("number is even or odd ?\n");
		printf("1.even\n");
		printf("2.odd");
		printf("enter ans :");
	   	scanf("%d",&b);
		
		switch(b)
		{
			case 1 :printf ("\nnumber is 5> or <5 ?\n");
			
			int c;
			printf("enter ans \n");
			printf("1 or 2\n");
			printf("enter ans :");
			scanf("%d",&c);
			switch(c)
			{
				case 1 :printf("number is 2,4\n");
				break;
				case 2 :printf("number is 6,8");
				break;
				
			}
			break;
			case 2 :printf ("number is 5> or <5 ?\n");
			int d;
			printf("enter ans\n");
			printf("1 or 2\n");
			printf("enter ans :");
			scanf("%d",&d);
			
			switch(d)
			{
				case 1 :printf("number is 3,1\n");
				break;
				case 2 :printf("number is 7,9");
				break;
				
			}
		
		}
			break;
			case 2 :printf("then guess");
			break;
	}
	
}