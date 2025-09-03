#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "sailesh";
    char s2[] = "ile";
    
    int n = strlen(s1);
    int m = strlen(s2);
    int count = 0;
    
    int i=0;
    int j=0;
    
    while(i<n && j<m)
    {
        if(s1[i]==s2[j])
        {
            j++;
            count++;
        }
        
        else if(s1[i]!=s2[j])
        {
            j=0;
            count=0;
        }
        
        i++;
    }
    
    if(count==m)
    printf("%s is the substring of %s",s2,s1);
    else
    printf("Not a substring");
    return 0;
}
