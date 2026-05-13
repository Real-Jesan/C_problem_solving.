#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

        int index;

    

      while (1) {
        printf("Enter index (0 to %d): ", n-1);
        scanf("%d", &index);

        if (index >= 0 && index < n) {
            break; // Valid input, exit the loop
        } else {
            printf("Error: Index %d is out of range. Try again.\n", index);
        }
    }




         for(int i=index; i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }

n--;
     for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }


       return 0;
}
