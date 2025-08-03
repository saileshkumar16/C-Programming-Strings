#include <stdio.h>
#include <string.h>

int main()
{
    char str[] ="hello world";
    int n = strlen(str);
    
    int in_word=0;
    
    for(int i=0; i<n; i++)
    {
       
        if(str[i]!=' ' && in_word==0) // Start of word
        {
        in_word = 1;
        str[i] = str[i]-32;
        }
        
        else if(str[i]==' ')
        in_word = 0;
    }
    
    printf("%s",str);
    
 
 
    return 0;
}
