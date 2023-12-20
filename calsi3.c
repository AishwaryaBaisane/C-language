#include<stdio.h>
int calsi()
{

	int a; 
	int b;
	int i;
	char opreter;
	int sum=0;
	for(a; i!='\0'; a++)
	{
		printf("\n");
    	printf("enter a :");
     	scanf("%d",&a);
    	printf("enter b :");
	    scanf("%d",&b);
    	printf("enter choise :+ , - , / , * :");
    	scanf(" %c",&opreter);
    	switch(opreter)
	  {
		case '+' : printf("%d + %d = %d",a,b,a+b);
		break;
		case '-' : printf("%d - %d = %d",a,b,a-b);
		break;
		case '*' : printf("%d * %d = %d",a,b,a*b);
		break;
		case '/' : printf("%d / %d = %d",a,b,a/b);
		break;
	
	  }
  }
}
main()
{
   calsi();
}
