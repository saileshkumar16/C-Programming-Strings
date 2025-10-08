#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="madam";
    
    int is_pal = 1;
    
    int start = 0;
    
    int n = strlen(str);
    
    int end = n -1;
    
    
    for(int i=0; i<n/2; i++)
    {
        if(str[start]!=str[end])
        {
            is_pal = 0;
            break;
        }
        
        start++;
        end--;
    }
    
    if(is_pal)
    printf("Palindrome");
    else
    printf("not a palindrome");

    return 0;
}
