#include <stdio.h>
#include <string.h>
int main() 
{
    
    char str[]="sailesh";
    
    int n = strlen(str);
    
    char ch ='s';
    char replace='k';
    
    int last_index = -1;
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==ch)
        {
            last_index = i;
            
        }
    }
    
    str[last_index]= replace;
    
    printf("%s",str);

    
    return 0;
}
