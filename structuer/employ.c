//Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number 
//of employees using structure.Consider the below-mentioned attributes in the Employee structure:

#include<stdio.h>
struct emp
{
	int id,age,exp;
	char name[20],city[10],company[20],role[20];
};
int main()
{
	int n;
	printf("enter number of employ:");
	scanf("%d",&n);
	struct emp s1[n];
	char name[20];
	int i;
	for(i=0; i<n; i++)
	{
	
		printf("enter %d employee name:",i+1);
		scanf(" %[^\n]",&s1[i].name);
		printf("enter id:");
		scanf("%d",&s1[i].id);
		
		printf("enter age:");
		scanf("%d",&s1[i].age);
		
		printf("enter experience:");
		scanf("%d",&s1[i].exp);
		
		printf("enter company:");
		scanf(" %[^\n]",&s1[i].company);
		
		printf("enter role:");
		scanf(" %[^\n]",&s1[i].role);
		
		printf("enter city:");
		scanf(" %[^\n]",&s1[i].city);
		printf("\n");
	}
	
	printf("\n");
	printf("%d number employ detail given below :",n);
	
	for(i=0; i<n; i++)
	{
	   printf("\nemp_name :%s\n",s1[i].name);	
	   
	   printf("emp_id :%d\n",s1[i].id);
	   
	   printf("emp_age :%d\n",s1[i].age);
	  
	   printf("emp_experience :%d\n",s1[i].exp);
	  
	   printf("emp_company :%s\n",s1[i].company);
	   
	   printf("emp_role :%s\n",s1[i].role);
	   
	   printf("emp_city :%s\n",s1[i].city);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}