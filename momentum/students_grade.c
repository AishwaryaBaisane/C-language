//calculate students grade
#include<stdio.h>
main()
{
	int grade;
	printf("enter grade :");
	scanf("%d",&grade);
	
	if(grade>=90 && grade<=99)
	{
		printf("grade : A+");
	}
	else if(grade>=80 && grade<=90)
	{
		printf("grade : B+");
	}
	else if(grade>=70 && grade<=80)
	{
		printf("grade : C+");
	}
	else
	{
		printf("grade : D+");
	}
}