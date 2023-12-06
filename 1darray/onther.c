//6. Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter value of n :");
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(i=0; i<=n; i++)
	{
      printf("enter a[%d]",i);
      scanf("%d",&a[i]);
	}
	for(i=0; i<=n; i++)
	{
      b[i]=a[i];
       printf("b[%d]:%d\n",i,b[i]);
	}

}