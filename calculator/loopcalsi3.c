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
	printf("Press 0 for the exit");
	printf("enter choise :\n");
	scanf("%d",&ans);
	printf("Enter the first numbe :");
	scanf("%d",&a);
	printf("Enter the second numbe :");
	scanf("%d",&b);
	printf("\n");
	   if(ans==0)
    	{
    	  printf("Thank you for using calculator");
	      break;	
		}
	switch(ans)
	{
        case 1 : printf("Addition %d + %d = %d",a,b,a+b);
	     break;
		case 2 : printf("substrect%d - %d = %d",a,b,a-b);
	     break;
		case 3 : printf("into %d * %d = %d",a,b,a*b);
         break;
		case 4 : printf("divisible%d / %d = %d",a,b,a/b);
        break;
	    case 5 : printf("modul %d % %d = %d",a,b,a%b);
	     break;
	   
		
	}
   }
   
}
	
main()
{
	 calsi();
	
}
