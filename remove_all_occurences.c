#include <stdio.h>
#include <string.h>
int main() 
{
    
    char str[]="sailesh";
    
    int n = strlen(str);
    
    int i=0;
    int j=0;
    
    char ch = 's';
    
    while(i<n)
    {
        if(str[i]==ch)
        {
            int j = i;
            
            while(j<n)
            {
                str[j] = str[j+1];
                j++;
            }
            
            n--;
            i--;
        }
        
        i++;
        
    }
    
    printf("After removing all occurences the string is %s",str);

    
    return 0;
}
