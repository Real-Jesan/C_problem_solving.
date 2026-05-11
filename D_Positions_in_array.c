#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0; i<n;i++)
     {
        scanf("%d",&arr[i]);
     }

     for(int i=0; i<n;i++)
     { 
        if (arr[i]<=10){
            printf("A[%d] = ",i);
        printf("%d\n",arr[i]);
        }
     }

    return 0;
}
