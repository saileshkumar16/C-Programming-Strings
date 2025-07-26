#include <stdio.h>
#include <string.h>

int main()
{
    char str[51];
    printf("Enter string: ");
    scanf("%s", str);
    int n = strlen(str);
    
    int i;
    
    for( i=0;i<n/2;i++)
    {
        char tmp = str[n-i-1];
        str[n-i-1] = str[i];
        str[i] = tmp;
    }
    printf("Final reversed string is %s",str);

    return 0;
}
