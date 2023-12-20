#include<stdio.h>
#include<string.h>
int password()
{
	
   char a[32];
   start:
   	printf("\n");
	printf("enter password :");
        gets(a);

    int i;
    int check=0;
	int l = strlen(a);

	if(l>=8 && l<=32)
	{
	     if(a[0]>=65 && a[0]<=90)
       	       {
       	 	check =1;
	 	 }
	        else
	 	 {
	 	   printf("first later must be capital alphabet");
                   goto start;
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
		  if(check==1)
                 {
   	          printf("error : remove space");
   	          goto start;
                 } 
	     }  
       }
       check=1;
       	if(check==1)
	   {
		check=0;
	   for(i=0; i<l; i++)
       {
       	
       	 if(a[i]>=97 && a[i]<=122)
       	 {
       	 	check =1;
	 	 }
	 	
	   }
	   if(check!=1)
	 	 {
	 	 	printf("enter small alphabet");
            goto start;
		  }
   }
   if(check==1)
	{
		check=0;
	   for(i=0; i<l; i++)
       {
       	
       	 if(a[i]>=48 && a[i]<=57)
       	 {
       	 	check =1;
	 	 }

	   }
	     if(check!=1)
	 	 {
	 	 	printf("error : enter number");
            goto start;
		  }
   }
	if(check==1)
	{
		check=0;
	   for(i=0; i<l; i++)
       {
       	
       	 if(a[i]>=58 && a[i]<=64)
       	 {
       	 	check =1;
	 	 }
	 	
	   }
	   if(check!=1)
	 	 {
	 	 	printf("enter special cherector");
            goto start;
		  }
   }
   	if(check==1)
	{
		
      	printf("password is success");
	       
      
   }
        
	}

	else
	{
		printf("password size  must be greter than 8");
		goto start;
	}

  

}
main()
{
	password();
}
