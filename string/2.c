//1. WAP to convert given string in lowercase.
#include<stdio.h>
main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	char a[n];
	printf("enter name :");	
	scanf("%s",&a);
	int i;
	for(i=0; i<n*4; i++)
	{
	   if(a[i]>='A'&&a[i]<='Z')
          {
            a[i]=a[i]+32;
          }
        }
        printf("%s",a);
     

}
