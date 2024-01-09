//wap to swap two variables without using the third variable and using a pointer.#include<stdio.h>
int swap(int **x,int **y)
{
	**x = **x + **y; 
	**y = **x - **y; 
	**x = **x - **y; 
//	printf("%d\n",**x);
//	printf("%d\n",**y);
}
int main()
{
	int a;
	int b;
	
	printf("enter a :");
	scanf("%d",&a);
	printf("enter b :");
	scanf("%d",&b);
	
	printf("Before swapping :\n");
	printf("a :%d\n",a);
	printf("b :%d\n",b);
	
	int *x = &a;
	int *y = &b; 
	swap(&x,&y);
	printf("After swapping :\n");
	printf("a :%d\n",*x);
	printf("b :%d\n",*y);
}