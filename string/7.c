//6. WAP to convert given string in Title Case.
#include<stdio.h>
main()
{

	int n;
	printf("enter n :");
	scanf("%d",&n);
	char a[n];
	printf("enter name :");	
	scanf("%s",&a);
	int i,x;
	
	if(a[0]>=97)
	{
		a[0]=a[0]-32;
	}
    int length = sizeof(a);
    for(i=0; i<n*4; i++)
    {
    	if(a[i]==' ')
    	{
    		if(a[i+1]>=97)
    		{
    	    	a[i-1]-=32;
    		
			}
			
		}
	
       
	}
    printf("%s",a);
	
    
    
}


