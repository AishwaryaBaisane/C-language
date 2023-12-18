#include<stdio.h>

int calsi()
{
	int i;
	while(1)
	{

    printf("\n");
    int a,b;
	char opreter;
	int sum=0;
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