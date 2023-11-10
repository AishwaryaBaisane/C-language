#include<stdio.h>
main()
{

     int firstyear;
     int lastyear;
     printf("enter first year :");
     scanf("%d",&firstyear);
     printf("enter last year :");
     scanf("%d",&lastyear);

     printf("total leap year :%d",((lastyear-firstyear)/4)+1);
  

}

