//4. Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
//Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.
//Ans = 123 RS
#include<stdio.h>
main()
{
	int SALARY;
	int HRA,DA,TA;
	
	printf("enter salary :");
	scanf("%d",&SALARY);
	printf("enter HRA :");
	scanf("%d",&HRA);
	printf("enter DA :");
	scanf("%d",&DA);
	printf("enter TA :");
	scanf("%d",&TA);
	
	int GROSS_SALARY=SALARY+HRA+DA+TA;
	printf("%d",GROSS_SALARY);
	
}