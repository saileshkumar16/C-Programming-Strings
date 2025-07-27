#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="sailesh";
    
    int n = strlen(str);
    char alpha = 'a';
    int found = 0;
    int i;
    
    for( i=0;i<n;i++)
    {
        if(str[i]==alpha)
        {
        found = 1;
        break;
        }
    }
    
    if(found)
    printf("%c is Found at %d index in given string %s",alpha,i,str);
    else
    printf("Not found");
    

    return 0;
}
