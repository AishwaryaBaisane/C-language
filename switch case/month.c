#include<stdio.h>
main()
{
	int month;
	printf("enter monthe :");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("January - 31 Days");
		break;
		case 2 : printf("February - 28 Days");
		break;
		case 3 : printf("March - 30 Days");
		break;
		case 4 : printf("April - 31 Days");
		break;
		case 5 : printf("May - 30 Days");
		break;
		case 6 : printf("June - 31 Days");
		break;
		case 7 : printf("July - 30 Days");
		break;
		case 8 : printf("Auguest - 31 Days");
		break;
		case 9 : printf("Saptember - 30 Days");
		break;
		case 10 : printf("Octomber - 31 Days");
		break;
		case 11 : printf("November - 30 Days");
		break;
    	case 12 : printf("December - 31 Days");
		break;
	}
}