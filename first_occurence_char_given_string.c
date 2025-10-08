#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="sailesh";
    
    int n = strlen(str);
    
    char ch ='s';
    
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==ch)
        {
            printf("%c is found at %d index in given string %s ",ch,i,str);
            break;
        }
    }
    return 0;
}
