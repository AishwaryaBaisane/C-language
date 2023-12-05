//Q.3 Write a Program to perform the addition operation of two 1D arrays & and store it in another array. Keep in mind that both array sizes must be the same.
//For example,
//Input:
//Enter array size: 5
//
//Enter array A's elements:
//a[0] = 7
//a[1] = 4
//a[2] = 9
//a[3] = 5
//a[4] = 2
//
//Enter array B's elements:
//b[0] = 1
//b[1] = 3
//b[2] = 1
//b[3] = 7
//b[4] = 3
//
//Output:
//Array C is: 8, 7, 10, 12, 5
#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    int i;
    int sum[n];
    for(i=0; i<n; i++)
    {
    	printf("enter a[%d]",i);
    	scanf("%d",&a[i]);
    }
     for(i=0; i<n; i++)
    {
    	printf("enter b[%d]",i);
    	scanf("%d",&b[i]);
    }
     for(i=0; i<n; i++)
    {
    	sum[n] = b[i] + a[i];
    	 printf("%d ",sum[n]);
    }
   
  
}






















