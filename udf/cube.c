//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125
#include<stdio.h>
#include<conio.h>
int cube()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
	
    int cube = n*n*n;
    return cube;
}

main()
{
	
	printf("cuber of number is = %d",cube());
}