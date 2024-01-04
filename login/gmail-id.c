#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	v:
	printf("enter gmail :");
	gets(a);
	char b[10]="@gmail.com";
	int l=strlen(a);
	int n=l;
	int c=0;
	int i,check=0,j,x=0;
	int y=0;
	for(i=0; i<l; i++)
	{
		if((a[i]>=65&&a[i]<=122)&&(a[i]>=48||a[i]<=57))
		{
			check=1;
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
	                	c=0;
	                 	y=0;
	               	 for(i=n-10; a[i]!=0; i--)
			     	{
				       
	                    if((a[i]>=48&&a[i]<=57))
	                    {
	                 	 y=1;
					    }
					    else if((a[i]>=65&&a[i]<=122))
                   	    {
		                   c=1; 
		                   
	                    }
	                    a[i]--;
				   }
				    if(y==1&&c!=1)
				   {
				   	printf("enter name !\n");
				   	 goto v;
				   }
				   else if(c==1||y==1)
				   {
				   	printf("your gmail-id created sucessfully !");
				   }
				  
				   }
				   else
				   {
				   	 printf("keep @gmail.com together \n or \n enter user name!");
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
 	printf("enter valid user name \n or \nuse kind of sum number!");
 	printf("\n");
    goto v;
 }
				
		    
		    
}
	
