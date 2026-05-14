#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }


    int min=INT_MAX;
    int max = INT_MIN;

    int max_pos=0,min_pos=0;
    
     for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            min_pos=i;
        }

        if(arr[i]>max)
        {
            max=arr[i];
            max_pos=i;
        }


    }

    

    
        // int temp=max;
        // max=min;
        // min=temp;

    arr[max_pos]=min;

  
    arr[min_pos]=max;

  


        for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }


    //   printf("\n%d \n%d\n",max,min);


    //   printf("\n%d\n%d",max_pos,min_pos);

        return 0;
}
