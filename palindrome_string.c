#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="madam";
    
    int n = strlen(str);
    
    int is_pal = 1;
    
    for(int i =0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
        is_pal=0;
        break;
        }
    }
    
    if(is_pal)
    printf("%s is a palindrome",str);
    else
    printf("%s is not a palindrome",str);
    

    return 0;
}
