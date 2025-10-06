// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    
    char str[]="    Words in a string   ";
    
    int i = 0;
    
    int word_count = 0;
    
    while(str[i]!='\0')
    {
        if(str[i]!=' ' && (i==0 || str[i-1]==' '))
        word_count++;
        
        i++;
    }
    
    printf("%d",word_count);
    
    return 0;
}
