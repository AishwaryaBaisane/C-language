//votter registration system
#include<stdio.h>
main()
{
	int age;
	printf("enter age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		if(age<=100)
		{
			printf("you can");
		}
		else
		{
			printf("enter valid age");
		}
	}
	else
	{
		printf("you can not");
	
	}
}