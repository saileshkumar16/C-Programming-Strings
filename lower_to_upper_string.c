#include <stdio.h>

int main()
{
    char str[]="sailesh";
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        
        i++;
    }
    
    printf("%s",str);

    return 0;
}
