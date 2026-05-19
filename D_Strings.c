#include<stdio.h>
#include<string.h>
int main()
{
    char s[11],a[11];
    scanf("%s%s",s,a);
    int length_1, length_2;
    length_1=strlen(s);
    length_2=strlen(a);
    printf("%d %d\n",length_1,length_2);
    char x[11];
    printf("%s%s\n",s,a);
    int temp=s[0];
    s[0]=a[0];
    a[0]=temp;
    printf("%s %s",s,a);



    return 0;
}
