//2d array find cube
#include<stdio.h>
#include<string.h>

void cube(int n)
{
	int a[n][n];
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		 // printf("enter array a[%d][%d]",i,j);
		 // scanf("%d",&a[i][j]);
	      
		}
		
   }

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
		    // a[i][j] = a[i][j] * a[i][j]* a[i][j];
	          // printf("%d ",a[i][j]);	
	        int *ptr=&a[i][j];
	       *ptr = *ptr * *ptr * *ptr;
               printf(" %d ",*ptr);
		}
	  	
	}
}

int main()
{
	int n;
	printf("enter size of array : ");
	scanf("%d",&n);



	cube(n);
}
