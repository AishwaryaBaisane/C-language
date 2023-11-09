//4. Write C program use switch statement. Display Monday to Sunday.
//    Ex. User Input: M
//    Output: Monday
#include<stdio.h>
main()
{
	char d;
	printf("enter day :");
	scanf(" %c",&d);
	
	switch(d)
	{
		case'S': printf("Sunday");
		break;
		case'M': printf("Monday");
		break;
		case'T': printf("Tuesday");
		break;
		case'W': printf("Wednesday");
		break;
		case't': printf("Thursday");
		break;
		case'F': printf("Friday");
		break;
		case's': printf("Sautarday");
		break;
	
	}
}