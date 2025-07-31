#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "madams";
    
    char search = 'm';
    int found = 0;
    
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]==search)
        {
        found = 1;
        break;
        }
        
        i++;
    }
    
    printf("First occurence for given %s string is found at %d index",str,i);

    return 0;
}
