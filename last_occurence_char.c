#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="sailesh";
    
    int n = strlen(str);
    
    char ch ='s';
    
    int last_index = -1;
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==ch)
        {
            last_index = i;
        }
    }
    
    if(last_index!=0)
    printf("Last occurrence of '%c' is at index %d\n", ch, last_index);
    else
    printf("not found");
    return 0;
}
