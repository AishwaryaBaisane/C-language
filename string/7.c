//title
#include<stdio.h>
#include<string.h>

int main()
{
   char a[100];
   printf("enter name :");
   gets(a);
   int i;
   int length=strlen(a);
  if(a[0]>=97 && a[0]<=122)
  {
  	 a[0]=a[0]-32;
  }
  for(i=1; i<length; i++)
  {
  	 if(a[i-1]==' ')
		{
			if(a[i]>=97 && a[i]<=122)
			{
				a[i]=a[i]-32;
			}
		}
		else if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
  }
  puts(a);
}
