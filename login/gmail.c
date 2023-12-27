#include<stdio.h>
#include<string.h>

int main()
{
	char gmail[100];//@gmail.com
	char a[10]="moc.liamg@";
    int i,j=0;
	start:
	printf("\n\n");
	printf("enter your gmail-id:");
	gets(gmail);
	int l = strlen(gmail);
	int check=0;
	int  gmailcheck=0;
	
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
  
  if(check=1)
  {
  
  	 for(i=l-1;i>=0;i--)
      {
   	   if(gmail[i]==a[j])
   	   {
   		  gmailcheck++;
   		  
	   }
	     j++;
      }
		if(check==1 && gmailcheck==10)
		{
			printf("your gmail-id created successfully");
		}
		else
		{
		
			printf("error : enter valid gmail && keep @gmail.com together");
			goto start;
		}
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}
