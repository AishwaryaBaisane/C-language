//Q.1 Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping.
// Make sure that the program is endless until a certain letter is pressed.
#include<stdio.h>

int add(int a,int b)
{
   return a+b;
   
}
int sub(int a,int b)
{
   return a-b;
   
}
int into(int a,int b)
{
   return a*b;
   
}
int div(int a,int b)
{
   return a/b;
   
}
int modul(int a,int b)
{
   return a%b;
   
}
	
main()
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
	    
	}
	if(ans!=0)
	{
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number :");
	scanf("%d",&b);
	printf("\n");
   }

	switch(ans)
	{
        case 1 : printf("Addition %d\n",add(a,b));
		goto start;
		case 2 : printf("substrect %d\n",sub(a,b));
		goto start;
		case 3 : printf("into %d\n",into(a,b));
    	goto start;
		case 4 : printf("divisible %d\n",div(a,b));
	    goto start;
	    case 5 : printf("modul %d\n",modul(a,b));
	    goto start;
	    
		
	}
	
}