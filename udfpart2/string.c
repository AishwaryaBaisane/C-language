//Q.2 Write a Program to find the length of the String by passing a string as an argument using
#include<stdio.h>
#include<string.h>
char string(int a)
{
	printf("%d",strlen(a));
}
main()
{
	char a[100];
	printf("enter string :");
	gets(a);
	string(a);
}