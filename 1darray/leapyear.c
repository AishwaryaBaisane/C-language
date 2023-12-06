//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040
#include<stdio.h>
main()
{
	int i,f;
	int l;
	printf("enter first year :");
	scanf("%d",&f);
	printf("enter last year :");
	scanf("%d",&l);
	
	int count=0;
	
	for(i=f; i<=l; i++)
	{
	  if(i%4==0)
	  {
	  	printf("%d ",i);
	  	count++;
	  }
	}
	printf("\ntota leap year :%d",count);

}
