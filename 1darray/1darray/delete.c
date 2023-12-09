//3. Write a C program to  Delete operations of the element into the array.
#include<stdio.h>
main()
{
	int a[5]={1,3,6,4,5};
	int tmp,i,j;

 	a[1]=a[2];
 	a[2]=a[3];
 	a[3]=a[4];
	   
	for(i=0; i<5-1; i++)
    {
      printf("%d ",a[i]);	
    }
}
