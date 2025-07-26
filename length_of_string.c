#include <stdio.h>

int main()
{
    char str[]="Sailesh";
    
    int i=0;
    
    while(str[i]!='\0')
    {
        i++;
    }
    
    printf("The length of %s is %d",str,i);
    
}
