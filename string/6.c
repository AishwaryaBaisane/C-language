//5. WAP to convert given string in Toggal Case.

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
	for(i=0; i<n; i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
     	         printf("%c",a[i]-32);
        	goto x;
                }
        }
    x:
   for(i=i+1; i<n; i++)
    {
     printf("%c",a[i]);
    }


}
