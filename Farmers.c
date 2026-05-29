#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
         int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int total_days=a+b;
    int x= (c*a)/ total_days;
    int y=c-x;
    printf("%d\n",y);
    }
    
    return 0;
}

