#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char pass[32];
	s:
	printf("enter gmail-id :");
	gets(a);
	int i,j,x,t=0,y=0;
	
	char b[10]="@gmail.com";
    int l = strlen(a);
    int check=0;
    int password=0;
    if(l>5)
    {
	
    for(i=0; i<l; i++)
    {
    	if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
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
		   	for(i=0; i<l; i++)
		    {
		       if(a[i]==' ')
		       { 
		    	check=0; 
			      
		       }
		    }
		   if(check==1)
		   {
		   	   check=0;
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
		        	v:
		        	printf("enter your password :");
		        	gets(pass);
		        	int L=strlen(pass);
		        	
		        	if(L>=8&&L<=32)
		        	{
		        		for(i=0; i<L; i++)
		        		{
		        		   if(pass[i]==' ')
						   {
						   	  password=1;
							}
							password=0;	
						}
						if(password==0)
						{
//								password=0;
							for(i=0; i<L; i++)
		             	     {
		        	   	       if(pass[0]>=65&&pass[0]<=90)
		        	   	       {
		        	   	     	 y=1;
							   }
						     }
							   for(i=0; i<L; i++)
		             	       {
							     if(pass[i+1]>=97 && pass[i+1]<=122)
							     {
							   	  t=2;
							     }
					        	}
					        
					    if(y==1 && t==2)
					    {
					        password=0;
					    	for(i=0; i<L; i++)
		             	     {
		        	   	        if(pass[i]>=48 && pass[i]<=57)
		        	   	        {
		        	   	         	password=1;
							    }
					        }
					        if(password==1)
					        {
					           	 password=0;
					    	     for(i=0; i<L; i++)
		             	         {
		        	   	           if(pass[i]>=58 && pass[i]<=64)
		        	   	            {
		        	   	            	password=1;
							       }
					            }
					            if(password==1)
					            {
					               printf(" * your gmail-id & password is redy *");
					               
								}
								else
								{
									printf(" error :enter special cherector\n");
									goto v;
								}
							}
							else
							{
								printf("error : enter number !\n");
								goto v;
							}
							
						}
						else
						{
							printf("error : first latter must be capital ! \n or \n enter small latter\n");
							goto v;
						}
						}
						else
						{
							printf("error : remove space !\n"); 
							goto v;
						}
		        		
					}
					else
					{
						printf("password must be greter than 8 !\n");
						goto v;
					}
				}
				else
				{
					printf("error : keep @gmail.com together\n");
					goto s;
				}
		   }
		   else
		   {
		   	printf("error : space not allow !\n");
		   	goto s;
		   }
		}
		else
		{
			printf("error : enter @ !\n");
			goto s;
		}
	   
	}
	else
	{
		printf("error : enter name\n");
		goto s;
	}
  }
  else
  {
  	printf("error : your user name is to short !\n");
  	goto s;
  }
}