#include<stdio.h>
int calsi()
{
   
   	 printf("\n");
	int a; 
	int b;
	int i;
	int opreter;
	int sum=0;
	 while(1)
	{
		printf("\n");
    	printf("enter a :");
     	scanf("%d",&a);
    	printf("enter b :");
	    scanf("%d",&b);
    	printf("enter choise\n");
    	printf("1 = +\n");
     	printf("2 = -\n");
	    printf("3 = /\n");
	    printf("4 = *\n");
     	printf("5 = %%\n");
    	scanf("%d",&opreter);
    	if(opreter==0)
    	{
    	  printf("enter valid number");
	      break;	
		}
    	
    	switch(opreter)
	    {
	
		case 1 : printf("%d + %d = %d",a,b,a+b);
		 break;
		case 2 : printf("%d - %d = %d",a,b,a-b);
	    break; 
		case 3 : printf("%d * %d = %d",a,b,a*b);
		 break;
		case 4 : printf("%d / %d = %d",a,b,a/b);
         break;
		case 5 : printf("%d % %d = %d",a,b,a%b);
        break;
	   
	
	
	  }
  }
}
main()
{
   calsi();
}
