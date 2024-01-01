#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	v:
	printf("enter gmail :");
	gets(a);
	char b[10]="@gmail.com";
	int l=strlen(a);
	int i,check=0,j,x=0;
	for(i=0; i<l; i++)
	{
		if(a[i]>=65&&a[i]<=122)
		{
			check=1;
		}
		if(a[i]>=48&&a[i]<=57)
		{
			check=0;
		}

	}
	if(check==1)
	{
	check=0;
	for(i=0; i<l; i++)
	{
		if(a[i]=='@')
		{
			check=1; 
			j=i;  
		}
	}
	if(check==1)
	{
		check=0;
	     for(i=0; i<l; i++)
	        {
		       if(a[i]==' ')
		       {
			     check=1;
			     
		        }
		    }
		    	if(check==0)
		        {
		         for(j;b[x]!=0;j++)
	          	{
		        	if(a[j]==b[x])
		         	{
			        	check++;
			        }
			       x++;
		        }
	               if(check==10)
	               {
	               	 printf("you creat gmail-id sucseesfully");
				   }
				   else
				   {
				   	 printf("keep @gmail.com together !");
				   	 printf("\n");
				   	 goto v;
				   }
				}
				else
				{
					printf("space not allow !");
					 printf("\n");
					 goto v;
				}
		    
		        
		    }
		    else
		    {
		    	printf("enter @ !");
		    	 printf("\n");
		    	goto v;
			}
 }
 else
 {
 	printf("enter valid user name !");
 	printf("\n");
    goto v;
 }
				
		    
		    
}
	
