#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ="hello world";
    int n = strlen(str);
    
    
    for(int i=0; i<n;i++)
    {
        if(str[i]==' ')
        {
            str[i] = '-';
        }
    }
    
    printf("%s",str);
    
 
    return 0;
}
