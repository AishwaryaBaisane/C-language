//Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
#include<stdio.h>
#include<string.h>
int cube(int *a, int n)
{
	int i;

	for(i=0; i<n; i++)
	{
	  a[i] = a[i] * a[i];
   	  printf("%d ",a[i]);	
	}
}

int main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);

	int i;
    int a[n];
	for(i=0; i<n; i++)
	{
		 printf("enter array a[%d]",i);
		 scanf("%d",&a[i]);
	
   }

	cube(&a,n);
	
}