#include<stdio.h>
 #include<string.h>
int main()
{
    char s[100000];
    gets(s);
    int length = strlen(s);
   int flag;
    int i=0;
    int j=length - 1;
    for(; i<j; i++,j--)
    {
      if(s[i]==s[j])
      flag=1;

      else{
        flag=0;
        break;
      }
    }
    
    if(flag){
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}










    
