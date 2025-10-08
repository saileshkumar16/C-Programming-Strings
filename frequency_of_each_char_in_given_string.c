#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="sailesh";
    
    int n = strlen(str);
    
    for(int i=0; i<n; i++)
    {
        if(str[i]=='\0')
        continue;
        
        int count = 1;
        
        for(int j=i+1; j<n; j++)
        {
            if(str[i]==str[j])
            {
                count++;
                str[j]='\0';
                
            }
        }
        
        printf("%c character has been repeated %d times\n",str[i],count);
    }

    return 0;
}
