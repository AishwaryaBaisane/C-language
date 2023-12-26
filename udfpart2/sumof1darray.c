//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
#include<stdio.h>
int sum(int n)
{
	int a[n];
	int sum=0,i;
    for(i=0; i<n; i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
    for(i=0; i<n; i++)
    {
    	sum=sum+a[i];
	}
   	printf("sum is %d",sum);
}

main()
{
	int i,n;
	printf("enter n :");
	scanf("%d",&n);
	sum(n);

}