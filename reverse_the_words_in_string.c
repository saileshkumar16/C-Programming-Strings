#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="the pen";
    
    int n = strlen(str);
    
    int start = 0;
    int end = n-1;
    
    while(start<end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
        
    }
    
    int i=0;
    
    while(i<n)
    {
        int j = i;
        
        while(str[j]!='\0' && str[j]!=' ') 
        j++;
        
        
        int start = i;
        int end = j-1;
        
        while(start<end)
        {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
            
        }
        
        i = j+1;
        
    }
    
    
 printf("\nThe new string is\n%s",str);

    
    return 0;
}



