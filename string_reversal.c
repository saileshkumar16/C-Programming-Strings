#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="sailesh";
    
    int n = strlen(str);
    
    for(int i=0; i<n/2;i++)
    
    {
        char tmp = str[n-i-1];
        str[n-i-1]= str[i];
        str[i] = tmp;
    }
    
    printf("After reversing the string is %s",str);

    return 0;
}
