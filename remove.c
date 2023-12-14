#include<stdio.h>
#include<string.h>

int main()
{
	char a[200],x;
	printf("enter string :");
	gets(a);
    
    int i,j;
    
    int length = strlen(a);
    for(i=0; i<length; i++)
    {
    	x=0;
    	for(j=0; j<length; j++)
    	{
    		if(a[j]==' ')
    		{
    			x=1;
			}
			if(x==1)
			{
				a[j]=a[j+1];
			}
		}
	}
    puts(a);

	
}