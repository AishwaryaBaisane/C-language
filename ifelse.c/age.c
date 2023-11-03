#include<stdio.h>
main()
{
	int age;
	printf("enter age :");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
			printf("kaha se aaye ho tum !");
		}
		else
		{
			printf("you enter valid age");
		}
	}
	else
	{
		if(age<0)
		{
			printf("you enter negitive age");
			
		}
		else
		{
			printf("enter valid age");
		}
	}
}