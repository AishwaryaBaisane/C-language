//3. Count No. of digits, alphabets & and special characters.
#include<stdio.h>
#include<string.h>

int main()
{

    char a[1000]; 
    int i;
	int alphabets=0;
	int digit=0;
	int specialcharacters=0;
 
    printf("Enter  the string : ");
    gets(a);
     
    for(i=0; i<strlen(a);i++)  
    {
        if((a[i]>=65 && a[i]<=90)|| (a[i]>=97 && a[i]<=122))
        {
          alphabets++;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
        	digit++;
		}
        else if((a[i]>=33 && a[i]<=47)|| (a[i]>=58 && a[i]<=64))
        {
         specialcharacters++;
        }
 
 	}
 	
     
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digit);
    printf("Special characters = %d", specialcharacters);
    
}
