#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "the pen is blue";
    int n = strlen(str);

    // Step 1: Reverse the whole string
    int start = 0;
    int end = n - 1;
    while(start < end) 
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    // Step 2: Reverse each word individually
    int starting = 0;
    int i = 0;
    
    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            int end;
            
            if(str[i+1]=='\0')
            end = i;
            
            else
            end = i -1;
            
            int s = starting;
            int e = end;
            
            while(s<e)
            {
                char tmp = str[s];
                str[s] = str[e];
                str[e] = tmp;
                
                s++;
                e--;
            }
            
              starting = i+1;
            
        }
        
        i++;
        
      
    }

    printf("Reversed words string: %s\n", str);

    return 0;
}
