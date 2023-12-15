//3. WAP to given string length.

#include<stdio.h>
main()
{ 

	char a[100];
	printf("enter name :");	
	scanf("%s",&a);
    int i;
    int count=0;
    for(i=0; a[i]!=0; i++)
    {
    	count++;
		
    }
	printf("%d",count);

}
