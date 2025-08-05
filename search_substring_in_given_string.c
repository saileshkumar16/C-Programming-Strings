#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "hello world";
    char s2[] = "world";

    int n = strlen(s1);
    int m = strlen(s2);

    int found = 0;  // assume substring is not found first

    for (int i = 0; i <= n - m; i++)
    {
        int flag = 1;

        for (int j = 0; j < m; j++)
        {
            if (s1[i + j] == s2[j])
                continue;
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            printf("%s is a substring of main string %s and it's found at %d index\n", s2, s1, i);
            found = 1;  // match found
        }
    }

    if (!found)
        printf("Substring is not found\n");

    return 0;
}
