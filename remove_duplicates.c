#include <stdio.h>
#include <string.h>
int main() 
{
    
    char str[]="sailesh";
    
    int n = strlen(str);
    
    for(int i=0; i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j; k<n; k++)
                {
                    str[k] = str[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    printf("After removing all duplicate characters is %s",str);

    
    return 0;
}
