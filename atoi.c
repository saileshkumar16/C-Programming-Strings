#include <stdio.h>

int main()
{
    
    char str[10]="123";
    
    int res = 0;
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            str[i] = str[i] - '0';
            res = (res * 10) + str[i];
        }
        
        i++;
    }
    printf("%d",res);
}
