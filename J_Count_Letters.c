#include <stdio.h>

char s[10000001];   // global because |S| can be up to 10^7

int main()
{
    scanf("%s", s);

    // frequency array for a-z
    int fre[26] = {0};

    // count frequency of each character
    for(int i = 0; s[i] != '\0'; i++)
    {
        // convert character to index
        // a -> 0
        // b -> 1
        // c -> 2
        // ...
        // z -> 25

        fre[s[i] - 'a']++;
    }

    // print in ascending order (a to z)
    for(int i = 0; i < 26; i++)
    {
        if(fre[i] > 0)
        {
            // i+'a' converts index back to character
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }

    return 0;
}
