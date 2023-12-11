// Write a program in C to count the frequency of each element of an array.
#include <stdio.h>

int main()
{
    
    int n,i,j, count;
    int x[n];
    printf("enter n :");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
        x[i] = -1; 
    }

  
    for (i = 0; i < n; i++)
    {
        count = 1; 
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;   
                x[j] = 0; 
            }
        }

        if (x[i] != 0)
        {
            x[i] = count;
        }
    }

    
    printf("\nfrequency elements array : \n");
    for (i = 0; i < n; i++)
    {
        if (x[i] != 0)
        {
            printf("%d = %d times\n", a[i], x[i]);
        }
	
    }
}
