#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="sssailesh";
    int count;
    int max_count = 0;
    char max_char;
   
    for(int i=0; str[i]!='\0';i++)
    {
            count=1;
            if(str[i]=='0')
            continue;
        
        for(int j=i+1;str[j]!='\0';j++)
        {

            if(str[i]==str[j])
            {
                count++;
               str[j]='0';
            }
        }
        
        if(count > max_count)
        {
            max_count = count;
            max_char = str[i];
        }
        

    }
    
    printf("Maximum occurring character: %c\n", max_char);
    printf("It occurred %d times.\n", max_count);

    return 0;
}
