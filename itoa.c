#include <stdio.h>

int main()
{
    int num =123;
    
    char str[3];
    
    int i=0;
    
    while(num!=0)
    {
        str[i] = (num%10) + '0';
        i++;
        num = num /10;
    }
    
    int start = 0;
    int end = i -1;
    
    while(start<end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        
        start++;
        end--;
    }
    
    str[i]='\0';
    
    printf("%s",str);

    return 0;
}
