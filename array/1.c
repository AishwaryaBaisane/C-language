//Q.1 Write a Program to find the length of a 1D array.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 3
//a[1] = 7
//a[2] = 1
//a[3] = 8
//a[4] = 6

//Output:
//Length of an Array: 5
#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
    int a[n];
    int i;
    for(i=0; i<n; i++)
    {
    	printf("enter a[%d]",i);
    	scanf("%d",&a[i]);
	}

		printf("%d\n",n);
		printf("%d",sizeof a/sizeof a[i]);
	
   
}