#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
      char a[101];
      char b[101];
      scanf("%s %s", a,b);
      
      int i;
      for(i=0; a[i]!=0 && b[i]!=0; i++)
      {
        printf("%c%c",a[i],b[i]);
      }

      if (strlen(a)>i)
      {
        printf("%s",&a[i]);
      }

      
      if (strlen(b)>i)
      {
        printf("%s",&b[i]);
      }
      
      printf("\n");
    }
    return 0;
}
