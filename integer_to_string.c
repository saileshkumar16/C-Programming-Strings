#include <stdio.h>

int main()
{
    int num = 123;
    int i = 0;
    char str[4];  

    // Convert number to reverse string
    while (num != 0)
    {
        int rem = num % 10;
        str[i] = rem + '0';
        i++;
        num = num / 10;
    }

    str[i] = '\0'; // null terminate to make it a valid string

    // Reverse the string to get correct order
    for (int j = 0; j < i / 2; j++)
    {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    // Now print the string directly
    printf("Final string is: %s\n", str);

    return 0;
}
