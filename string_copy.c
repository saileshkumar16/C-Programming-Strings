#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="Sailesh";
    
    printf("%s",str1);
    
    int n = strlen(str1);
    
    char str2[n];
    
    for(int i=0; i<n;i++)
    {
        str2[i] = str1[i];
    }
    
    printf("%s",str2);
    

    return 0;
}
