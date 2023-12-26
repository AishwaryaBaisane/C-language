//Q.2 Write a Program to find the length of the String by passing a string as an argument using
//tnrs
#include<stdio.h>
#include<string.h>
char string()
{
	char a[100];
	printf("enter string :");
	gets(a);
	return strlen(a);
	
}
main()
{
	
	int x=string();
	printf("%d",x);
}