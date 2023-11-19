#include<stdio.h>

int main()
{
	char name[5]="hello";
	puts(name);
	
	char Name[5]="hello";
	printf("\nenter name1 :");
	gets(Name);

	char na[10]="nayan";
	int len = strlen(na);
	printf("\n%d",len);

    char NAME[10]="hello";
    printf("\n\n%s",strupr(NAME));
    
    char name1[10]="HELLO";
    printf("\n\n%s",strlwr(name1));
    
    char name2[10]="Hello";
    char surName[10]="World";
	printf("\n\n%s",strcat(name2,surName));
	
	
//	char name3[10]="Hello";
//	char sname;
//	Strcpy(sname,name3);
//	printf("\n\n%s",sname);
//	
}