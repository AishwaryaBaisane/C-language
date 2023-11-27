#include<stdio.h>
main()
{
	int n;
	printf("guess the number ");
	printf("\nare you guess the number ?");
	scanf("%d",&n);
	char y;
	printf("\nnumber is even or odd ?");
	printf("A.even\n ");
	printf("B.odd ");
	
	scanf("\nyour ans : %c",&y);
	
	switch(y)
	{
		case 'A' :printf("\nnumber is 5> or 5< ?");
		    
		     int an;
		     printf("\nenter your ans :");
		     scanf("%d",&an);
		     
		     switch(an)
		     {
		     	case 1 : printf("ans 2,4\n");
		     	break;
		     	case 2 : printf("ans 6,8");
			 }
		     
		break;
		case 'B' : printf("\nnumber is 5> or 5< ?");
		     int ch;
		     printf("\nenter your ans :");
		     scanf("%d",&ch);
		     
		     switch(ch)
		     {
		     	case  1 :printf("ans 3,5\n");
		     	break;
		     	case  2 : printf("ans 7,9");
			 }
		break;
	}
}