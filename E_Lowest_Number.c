#include<stdio.h>
#include<limits.h>
int main()
{
     int n;
     
     scanf("%d",&n);
     int arr[n];

     for(int i=0; i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
    // int low= arr[0];
    int min= INT_MAX;
    int min_indx;


     for(int i=0; i<n;i++)
     { 
         if (arr[i]<min)
         {
            min= arr[i];
            min_indx= i+1;
         }

           }
           printf("%d %d",min,min_indx);

    return 0;
}
