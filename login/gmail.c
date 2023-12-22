#include<stdio.h>
#include<string.h>

int main()
{
	char gmail[100];//@gmail.com
	char a[10]="moc.liamg@";

	start:
	printf("\n\n");
	printf("enter your gmail :");
	gets(gmail);
	int l = strlen(gmail);
	int i,j=0;
	int check=0;
	int check2=0;
	int gmailcheck=0;
	if(gmail > 10)
	{
		for(i=0; i<l; i++)
		{
		      if(gmail[i]=='.')
			   {
				  check=1;
				   
			   } 
			   if(gmail[i]=='@')
			   {
				  check2=2;
				   
			   } 
			 
		}
	  for(i=l-1;i>=0;i--)
      {
   	   if(gmail[i]==a[j])
   	   {
   		  gmailcheck++;
   		  
	   }
	     j++;
      }
		if(check==1 && check2==2 && gmailcheck==10)
		{
			printf("valid gmail");
		}
		else
		{
		
			printf("invalid gmail");
			goto start;
		}
	}
	else
	{
		printf("gmail size to short");
		goto start;
	}
}