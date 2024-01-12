//. WAP to print your basic information in HTML using file handling using Dev C++.
#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp = fopen("data.html","w");
	
	char name[20];
	printf("Enter name :");
	scanf(" %[^\n]s",name);
	
	int age;
	printf("\Eenter age :");
	scanf("%d",&age);
	
	int grid;
	printf("\nEnter Grid :");
	scanf("%d",&grid);
	
	char school[20];
	printf("\nEnter school name :");
	scanf(" %[^\n]s",&school);
	
	char course[20];
	printf("\nEnter course name :");
	scanf(" %[^\n]s",&course);
	
	fprintf(fp,"<html>");
	fprintf(fp,"<head>");
	fprintf(fp,"<title>");
	
	fprintf(fp,"bio-data");
	
	fprintf(fp,"</title>");
	
	fprintf(fp,"<body>");
	printf("%s",name);
	fprintf(fp,"<h3>\nName :%s\n\n<h3>",name);
	
	printf("\n%d",age);
	fprintf(fp,"<h3>Age :%d</h3>",age);
	
	printf("\n%d",grid);
	fprintf(fp,"<h3>GRID :%d</h3>",grid);
	
	printf("\n%s",school);
	fprintf(fp,"<h3>School Name :%s</h3>",school);
	
	printf("\n%s",course);
	fprintf(fp,"<h3>Course Name :%s</h3>",course);
	
	fprintf(fp,"</body>");
	fprintf(fp,"</head>");
	fprintf(fp,"</html>");
	
}