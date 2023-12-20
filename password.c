#include<stdio.h>
#include<string.h>
int password()
{
	
char a[32];
   start:
   	printf("\n");
	printf("enter string :");
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
	 	 	printf("enter capital alphabet");
            goto start;
		  }
	}

	else
	{
		printf("password size  must be greter than 8");
		goto start;
	}
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
	 	 	printf("enter number");
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
		check=0;
		 for(i=0; i<l; i++)
         {
       	
       	 if(a[i]==' ')
       	 {
       	   check=1;
       	 
	 	 }
	 	 
        }
		 if(check==1)
        {
   	      printf("remove space");
   	      goto start;
         }  
         else
         {
         	printf("password is success");
		 }
      
   }
  

}
    



main()
{
	password();
}
