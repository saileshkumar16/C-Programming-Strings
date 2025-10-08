#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "the pen is blue";
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

    // Step 2: Reverse each word individually using your logic
    start = 0;
    for (int i = 0; i <= n; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int end = i - 1;

            while (start < end)
            {
                char tmp = str[start];
                str[start] = str[end];
                str[end] = tmp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("The new string is:\n%s", str);
    return 0;
}
