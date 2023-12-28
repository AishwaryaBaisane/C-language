//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping.
// Make sure that the program is endless until a certain letter is pressed.
#include<stdio.h>

int calsi()
{
	while(1)
	{
	
	start:
    printf("\n");
    int a,b;
	int ans;
	int sum=0;
	printf("Press 1 for +\n");
	printf("Press 2 for -\n");
	printf("Press 3 for /\n");
	printf("Press 4 for *\n");
	printf("Press 5 for %%\n");
	printf("Press 0 for the exit\n");
	printf("enter choise :");
	scanf("%d",&ans);
   	if(ans==0)
   	{
   	  printf("Thank you for using calculator");
	  break;	 	      	
	}
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("\n");
   
	   
	switch(ans)
	{
        case 1 : printf("Addition %d + %d = %d\n",a,b,a+b);
	     break;
		case 2 : printf("substrect%d - %d = %d\n",a,b,a-b);
	     break;
		case 3 : printf("into %d * %d = %d\n",a,b,a*b);
         break;
		case 4 : printf("divisible%d / %d = %d\n",a,b,a/b);
        break;
	    case 5 : printf("modul %d % %d = %d\n",a,b,a%b);
	     break;
	   
		
	}
   }
   
}
	
main()
{
	 calsi();
	
}