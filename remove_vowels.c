#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "ssailesh";
    int n = strlen(str);
    
    for(int i=0; i<n; )
    {
        char ch = str[i];
        
        if(ch>='A' && ch<='Z')
        ch = ch+32;
        
        if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        {
            for(int j=i; j<n; j++)
            {
                str[j] = str[j+1];
            }
            
            n--;
        }
        
        else
        {
            i++;
        }
    }
    
    printf("After removing vowels: %s\n", str);

    return 0;
}
