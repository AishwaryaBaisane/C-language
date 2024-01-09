//2d array find cube
#include<stdio.h>
#include<string.h>
//int cube(int **a, int n)
//{
//	int i,j;
////	int a[n][n]=&ptr;
//	for(i=0; i<n; i++)
//	{
//		for(j=0; j<n; j++)
//		{
//		    a[i][j] = a[i][j] * a[i][j] * a[i][j];
//	     	printf("cube of array %d ",a[i][j]);	
//		}
//	  	
//	}
//
//
//}

int main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);

	int i,j;
    int a[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		 printf("enter array a[%d][%d]",i,j);
		 scanf("%d",&a[i][j]);
		}
		
   }
//   int *ptr =  &a[n][n];
//	cube(&a,n);
for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		    a[i][j] = a[i][j] * a[i][j] * a[i][j];
	     	printf(" %d ",a[i][j]);	
		}
	  	
	}	
}