#include <stdio.h>
#include <string.h>

void remove_char_j0(char str[], char ch) 
{
    int n = strlen(str);
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)  // Scans from start each time
        {
            if (str[j] == ch) 
            {
                // Shift left
                for (int k = j; k < n - 1; k++) 
                {
                    str[k] = str[k + 1];
                }
                n--;
                j--; // stay at same index after shift
            }
        }
    }
    str[n] = '\0';
    printf("After removing '%c' (j=0): %s\n", ch, str);
}

void remove_char_ji(char str[], char ch) 
{
    int n = strlen(str);
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++)  // Scans only from current i
        {
            if (str[j] == ch) 
            {
                // Shift left
                for (int k = j; k < n - 1; k++) 
                {
                    str[k] = str[k + 1];
                }
                n--;
                j--; // stay at same index after shift
            }
        }
    }
    str[n] = '\0';
    printf("After removing '%c' (j=i): %s\n", ch, str);
}

int main() 
{
    char str1[] = "saai";
    char str2[] = "saai";
    char ch = 'a';

    remove_char_j0(str1, ch);
    remove_char_ji(str2, ch);

    return 0;
}
