#include <stdio.h>
#include <string.h>

int main() 
{
    
    char str[]="Sailesh is a good boy";
    int word_count =1;
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        word_count++;
        
        i++;
    }
    
    printf("%d",word_count);
    


    return 0;
}
