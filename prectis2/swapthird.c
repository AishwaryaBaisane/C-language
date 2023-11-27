#include<stdio.h>
int main()
{
	//swap without third var
	int a=30;
	int b=20;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a=%d",a);
	printf("\nb=%d",b);
}