//wap to find the address of the chain pointer.
#include<stdio.h>
int main()
{
	int a = 100;
	int *p = &a;
	int **p2 = &p;
	int ***p3 = &p2;
	int ****p4 = &p3;
	
	printf("%d",****p4);
}