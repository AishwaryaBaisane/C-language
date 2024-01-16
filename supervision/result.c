//Q.2 Write a Program to generate mark sheets for a student. 
//Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a 
//Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks.
//Display the percentage of each student.?
#include<stdio.h>
struct result
{
	int roll_no;
	float  Chemistry, Mathematics,  Physics;
	char name[20];
};
int main()
{
	struct result stu;
	char name[20];
	float  Chemistry, Mathematics,  Physics;
	int i;

    for(i=0; i<=5; i++)   
	{
		printf("enter %d student details :-",i+1);
		printf("\nenter roll number:");
		scanf("%d",&stu.roll_no);
		
		printf("enter name :");
		scanf(" %[^\n]",&stu.name);

		printf("enter chemestry marks:");
		scanf("%f",&stu.Chemistry);

		printf("enter Mathematics:");
		scanf("%f",&stu.Mathematics);

		printf("enter physics:");
		scanf("%f",&stu.Physics);
        
        printf("\n");
       
	}
	for(i=0; i<=5; i++)
	{
		 printf("\n");
        printf("student roll number : %d",stu.roll_no);
        printf("\nstudent name is :%s",stu.name);
        printf("\nstudent chemistry marks : %f",stu.Chemistry);
	    printf("\nstudent Mathematics marks : %f",stu.Mathematics);
	    printf("\nstudent Physics marks : %f",stu.Physics);
	    
	    
	     float per = stu.Chemistry + stu.Mathematics + stu.Physics;
	     printf("\nstudent total : %f",per);
	     per = (per/300)*100;
	     
	     printf("\nstudent persantage : %f",per);
	     
	     printf("\n\n");
	}
	
}
