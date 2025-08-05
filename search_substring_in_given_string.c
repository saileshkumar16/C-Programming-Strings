#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "hello world";
    char s2[] = "world";
    
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
        
        i++;
    }
    
   // printf("%d",count);
    
    if(count==m)
    printf("%s is the substring of %s",s2,s1);
    else
    printf("Not a substring");

    return 0;
}
