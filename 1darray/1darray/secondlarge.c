//2. Write a C program to find the second largest number in the array.
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
		  if(a[i]>a[j])
		  {
		  	tmp=a[i];
		  	a[i]=a[j];
		  	a[j]=tmp;
		  }
	   }
	   a[i]=a[n-2];	
	}
	
	printf("larg :%d",a[n-1]);
	

}