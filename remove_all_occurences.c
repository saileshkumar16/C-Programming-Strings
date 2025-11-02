// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[]="baloon";
    
    char ch = 'o';
    
    int n = strlen(str);
    
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==ch)
        {
            for(int j=i; j<n; j++)
            {
                str[j] = str[j+1];
            }
            n--;
            i--;
        }
    }
    
    printf("%s",str);

    return 0;
}
