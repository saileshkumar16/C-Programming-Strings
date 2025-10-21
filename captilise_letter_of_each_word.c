#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="sailesh how are you";
    
    int in_word = 0;
    
    int i =0;
    
    while(str[i]!='\0')
    {
        if(i==0)
        {
            in_word = 1;
            str[i] = str[i] - 32;
        }
        
        else if(i>0 && str[i]!=' ' && str[i-1]==' ')
        {
            in_word = 1;
            str[i] = str[i] -32;
        }
        
        i++;
    }
    
    printf("Captilise string is: %s",str);
    
    

    
    
}
