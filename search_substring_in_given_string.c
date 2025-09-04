#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="sailesh";
    char s2[]="ile";
    
    int n = strlen(s1);
    
    int i=0;
    int j=0;
    int count=0;
    
    int m = strlen(s2);
    
    while(i<n && j<m)
    {
        if(s1[i]==s2[j])
        {
            i++;
            j++;
            count++;
        }
        
        else if(s1[i]!=s2[j])
        {
            j=0;
            count=0;
            i++;
        }
    }
    
    if(count==m)
    printf("%s is a sub string of %s",s2,s1);
    else
    printf("Not a sub string");

    
    return 0;
}
