//tsrn
#include<stdio.h>
#include<conio.h>
int cube(int n)
{
	
    int cube = n*n*n;
    printf("cube of number is = %d",cube);
}

main()
{
	int n;
	printf("enter number :");
	scanf("%d",&n);
    cube(n);
    
	
}