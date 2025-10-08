// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[]="saai";
    
    int n = strlen(str);
    
    for(int i=0; i<n; i++)
    {
        if(str[i]=='#')
        continue;
        
        
        char ch = str[i];
        printf("first occurence of %c is %d\n",ch,i);
        
        
        for(int j=i+1; j<n; j++)
        {
            if(str[j]==ch)
            {
                str[j]='#';
            }
        }
    }

    return 0;
}
