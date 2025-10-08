#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="aassh";
    
    int n = strlen(str);
    
    int max = 0;
    int min = n;
    
    char maxchar, minchar;
    
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
        
        if(count > max)
        {
            max = count;
            maxchar = str[i];
        }
        
        if(count<min)
        {
            min = count;
            minchar = str[i];
        }
        
        printf("%c character has been repeated %d times\n", str[i], count);
    }
    
        printf("\nHighest frequency: %c = %d times\n", maxchar, max);
    printf("Lowest frequency: %c = %d times\n", minchar, min);


    return 0;
}
