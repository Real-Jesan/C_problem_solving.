#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    if (scanf("%d", &t) != 1) return 0;

    while (t > 0) 
    {
        // 1000001 characters + 1 for the null terminator '\0'
        char w[1000002];
        char h[1000002];

        // %s automatically skips any leading whitespace/newlines left in the buffer
        scanf("%s", w);
        scanf("%s", h);

        // strcmp returns 0 if the strings are identical
        if (strcmp(w, h) == 0) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }

        t--;
    }    
    return 0;
}
