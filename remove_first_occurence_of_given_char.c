#include <stdio.h>
#include <string.h>
int main() 
{
    
    char str[]="sailesh";
    
    int n = strlen(str);
    
    int i=0;
    
    char ch = 's';
    
    
    while(i<n)
    {
        if(str[i]==ch)
        break;
        
        i++;
    }
    
    while(i<n)
    {
        str[i] = str[i+1];
        i++;
    }
    
    printf("After removing first occurence the string is %s",str);

    
    return 0;
}
