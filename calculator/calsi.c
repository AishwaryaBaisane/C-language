//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping.
// Make sure that the program is endless until a certain letter is pressed.
#include<stdio.h>

int calsi()
{
	start:
    printf("\n");
    int a,b;
	int ans;
	int sum=0;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter choise \n");
	printf("1 = +\n");
	printf("2 = -\n");
	printf("3 = /\n");
	printf("4 = *\n");
	printf("5 = %%\n");
	scanf("enter ans %d",&ans);
    
	switch(ans)
	{
        case 1 : printf("%d + %d = %d",a,b,a+b);
		goto start;
		case 2 : printf("%d - %d = %d",a,b,a-b);
		goto start;
		case 3 : printf("%d * %d = %d",a,b,a*b);
    	goto start;
		case 4 : printf("%d / %d = %d",a,b,a/b);
	    goto start;
	    case 5 : printf("%d % %d = %d",a,b,a%b);
	    goto start;
	    case 0 :printf("enter valid number");
	    break;
	
		
	}
   
}
	
main()
{
	 calsi();
	
}
