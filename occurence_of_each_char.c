// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="sailesh";
    
    for(int i=0; str[i]!='\0';i++)
    {
        int count =1;
        for(int j=i+1; str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
                str[j]='0';
                
            }
        }
        printf("%c: %d\n", str[i], count);
    }
    
    return 0;
}