#include <stdio.h>

int main()
{
    char str[51];
    printf("Enter string: ");
    scanf("%s", str);
    
    int i = 0;
    while (str[i] == '0' && str[i] != '\0')
    {
        i++;
    }

    if (str[i] == '\0')
    {
        printf("The final string is 0\n");
    }
    else
    {
        printf("The final string is %s\n", &str[i]);
    }

    return 0;
}
