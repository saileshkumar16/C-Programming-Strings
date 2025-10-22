#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "Hi How Are You";
    int n = strlen(str);

    printf("Original string: %s\n", str);

    // Step 1: Reverse the entire string
    int start = 0, end = n - 1;
    while(start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    printf("After reversing entire string: %s\n", str); 
    // Output: "uoY erA woH iH"

    // Step 2: Reverse each word individually
    int word_start = 0;
    for(int i = 0; i <= n; i++) // <= n to include null terminator
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            int s = word_start, e = i - 1;
            while(s < e)
            {
                char tmp = str[s];
                str[s] = str[e];
                str[e] = tmp;
                s++;
                e--;
            }
            word_start = i + 1;
        }
    }

    printf("After reversing each word: %s\n", str); 
    // Output: "You Are How Hi"

    return 0;
}
