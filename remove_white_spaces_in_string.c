// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[]="h e ll";
    int n = strlen(str);
    printf("String before removing spaces is |%s|\n",str);
    
    for(int i=0; i<n; i++)
    {
        if(str[i]==' ')
        {
            for(int j=i; j<n; j++)
            {
                str[j] = str[j+1];
            }
            
            n--;
            i--;
        }
    }
    printf("String after removing spaces is |%s|",str);

    return 0;
}
