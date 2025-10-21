#include <stdio.h>

int main()
{
    char str[] ="   -123";
    
    int  res = 0;
    
    int sign;
    
    int i =0;
    
    while(str[i]==' ')
    i++;
    
    if(str[i]=='-')
    {
        sign = -1;
        i++;
    }
    
    else if(str[i]=='+')
    {
        sign = 1;
        i++;
    }
    
    
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            str[i] = str[i] - '0';
            res = (res * 10) + str[i];
        }
        
        i++;
    }
    
    printf("Final result is %d",res*sign);

    return 0;
}
