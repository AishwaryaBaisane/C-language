#include<stdio.h>
#include<string.h>

int main()
{
	char gmail[100];//@gmail.com
	char a[10]="@gmail.com";
	int L=strlen(a);
    int i,j=0;
	start:
	printf("\n\n");
	printf("enter your gmail-id:");
	gets(gmail);
	int l = strlen(gmail);
	int check=0;
	int  gmailcheck=0;
	int x=1;
  for(i=0; i<l; i++)
  {
  		if(gmail[i]!=' ')
  	        {
  		      check=1;
	       }
	    
  
  }
  if(check==1)
  {
  		check=0;
         	 for(i=0; i<l; i++)
           {
  	
         	 if(gmail[i]=='@')
  	       	 {
  		      	check=1;
  		      	
  		      	
	      	}
		    
		  }
		  if(check==1)
		  {
		  	check=1;
		  }
		   else
		   {
	   		printf("error : enter @!");
	        goto start;
		    }
  }
  else
  {
  	printf("not space allow");
  }
  
  if(check==1)
  {
  	 for(j;gmail[i]!=0; j++)
      {
   	   if(gmail[i]==a[j])
   	   {
   		  gmailcheck++;
   		  
	   }
	     i++;
      }
     
  }
   if(gmailcheck==10)
      {
      	for(i=0; i<l; i++)
      	{
		  
      	if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122)
        {      		
		       x=0;
	    }
       }
       if(x==0)
		{
			printf("your gmail-id created successfully");
		}
		else
		{
		
			printf("error : keep @gmail.com together");
			goto start;
		}
      }
      else
      {
      	printf("enter @gmail.com!");
	  }
		
	}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

