#include <stdio.h>
#include <string.h>
int main() 
{
    
    char str[]="sailesh";
    
    int n = strlen(str);
    
    int i=0;
    
    char ch = 's';
    
    int last = -1;
    
    while(i<n)
    {
        if(str[i]==ch)
        {
            last = i;
        }
            
        
        i++;
    }
    
    
    while(last<n)
    {
        str[last] = str[last+1];
        last++;
    }
    
    printf("After removing last occurence the string is %s",str);

    
    return 0;
}
