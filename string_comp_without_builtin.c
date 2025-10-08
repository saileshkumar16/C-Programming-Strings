#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Hi sai";
    int n = strlen(str);

    // Step 1: Reverse the entire string
    int start = 0, end = n - 1;
    while (start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    // Step 2: Reverse each word individually
    start = 0;  // start of the current word
    int i = 0;  // iterator through the string

    while (i <= n)  // include '\0' to handle the last word
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;  // end of the current word

            int s = start;
            int e = end;
            while (s < e)  // reverse characters of the current word
            {
                char tmp = str[s];
                str[s] = str[e];
                str[e] = tmp;
                s++;
                e--;
            }

            start = i + 1;  // move start to the next word
        }
        i++;
    }

    printf("Reversed words string: %s\n", str);

    return 0;
}
