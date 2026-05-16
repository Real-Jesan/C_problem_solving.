#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    char t[1001];
    gets(s);
    gets(t);
    printf("%d ",strlen(s));
    printf("%d\n",strlen(t));
    printf("%s ",s);
    printf("%s",t);

    return 0;
}
