#include<stdio.h>

int calsi()
{
  printf("\n");
   int a,b;
	char ans;
	int sum=0;
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	printf("enter choise :+ , - , / , * :");
	scanf(" %c",&ans);
	
	switch(ans)
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
	return calsi();
}
	
main()
{
	 calsi();
	
}