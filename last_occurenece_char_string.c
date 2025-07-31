#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "sailesh";
    
    char search = 's';
    int found=-1;
    
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]==search)
        {
        found = i;
        }
        
        i++;
    }
if(found!=-1)
printf("last occurence for given %s string is found at %d index",str,found);
else
printf("Character '%c' not found in \"%s\"\n", search, str);

    return 0;
}
