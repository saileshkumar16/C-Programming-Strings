#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "ABABCD";
    char str2[] = "ABCD";

    int n1 = strlen(str1);
    int n2 = strlen(str2);
    
    int i =0;
    int j =0;
    
    int found = 0;
    
    while(i<n1)
    {
        if(str1[i]==str2[j])
        {
            i++;
            j++;
            
            if(j==n2)
            {
                found = 1;
                break;
            }
        }
        
        else
        {
            i = i - j + 1; // check current and next
            j = 0;
        }
    }
    
    if(found)
    printf("%s is a substring of %s",str2,str1);
    else
    printf("%s is not a substring of %s",str2,str1);

    return 0;
}
