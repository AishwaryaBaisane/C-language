//Q.2 Write a Program to swap two variables using Pointers.
//For example,
//Input:
//Enter the value of x: 5
//Enter the value of y: 3
//
//Output:
//Before swapping:
//x: 5
//y: 3
//
//After swapping:
//x: 3
//y: 5
#include<stdio.h>
#include<conio.h>
int swap(int a,int b)
{
	a= a+b;
	b= a-b;
	a= a-b;
	
	printf("%d\n",*a);
	printf("%d\n",*b);
}
int main()
{
	int x,y;
	printf("enter x & y");
	scanf("%d%d",&x,&y);
	
	int *a = &x;
	int *b = &y;
	
	swap(&a,&b); 
}