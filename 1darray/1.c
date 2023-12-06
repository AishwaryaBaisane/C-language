//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
#include<stdio.h>
main()
{
	
	int n;
	printf("Enter array size : ");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int m;
	printf("\nEnter array size : ");
	scanf("%d",&m);
	int b[m];
        int j;
	for(j=0 ; j<m ; j++)
	{
		printf("\nEnter the value b[%d]: ",j);
		scanf("%d",&b[j]);
	}
	int c[n+m];
	
	for(i=0;i<n;i++)
      {
         c[i]=a[i];
	  }
	  for(i=0;i<m;i++)
	  {
	  	c[n+i]=b[i];
	  }
	  
	  printf("c[%d] :",n+m);
	  
	  for(i=0;i<n+m;i++)
	  {
	    printf("%d ",c[i]);
	  }
	
}

	
	
	
