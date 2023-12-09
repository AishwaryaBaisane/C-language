//4. Write a C program to left-rotate and right-rotate an array without using another array
#include<stdio.h>
main()
{
	int i,j,n;
	printf("enter first value :");
	scanf("%d",&n);
	int a[n];
    for(i=0; i<n; i++)
	{
	      printf("enter a[%d]",i);
          scanf("%d",&a[i]);   
	}
	int tmp;
	for(i=0; i<n; i++)
	{
	   for(j=i+1; j<n; j++)
	   {
		  	tmp=a[i];
		  	a[i]=a[j];
		  	a[j]=tmp;
		  
	   }
	}
	 for(i=0; i<n; i++)
     {
		printf("%d ",a[i]);
	 }  

}
