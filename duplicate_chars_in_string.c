#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="saaileshh";
    int count;
   
    for(int i=0; str[i]!='\0';i++)
    {
            count=0;
            if(str[i]=='0')
            continue;
        
        for(int j=i+1;str[j]!='\0';j++)
        {

            
            if(str[i]==str[j])
            {
                count++;
               str[j]='0';
            }
        }
        
    if(str[i]!='0' && count >=1)
    printf("%c",str[i]);
    }
    
    


    return 0;
}
