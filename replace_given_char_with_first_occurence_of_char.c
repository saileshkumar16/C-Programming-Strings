#include <stdio.h>
#include <string.h>
int main() 
{
    
    char str[]="sailesh";
    
    int n = strlen(str);
    
    char ch ='s';
    char replace='k';
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==ch)
        {
            str[i]=replace;
            break;
            
        }
    }
    
    
    printf("%s",str);

    
    return 0;
}
