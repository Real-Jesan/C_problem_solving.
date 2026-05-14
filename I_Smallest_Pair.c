#include<stdio.h>
#include<limits.h>
int main()
{   int t;
    scanf("%d",&t);

    while(t)

    {
        int n;
    scanf("%d",&n);
    int arr[n];
    int min_result=INT_MAX;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);        
    }


    

for(int i=0; i<n;i++)
{
     for(int j=i+1;j<n;j++)
     {
         int result= arr[i]+arr[j]+ j-i;
              if(result<min_result)
              {
                min_result=result;
              }
     }
}

  printf("%d\n",min_result);
    t--;
    
    }
    



        return 0;

    }
    

