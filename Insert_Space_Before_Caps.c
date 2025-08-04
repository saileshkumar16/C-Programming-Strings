// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="SaileshKumarKing";
    
    int n = strlen(str);
    
    char res[20];
    int j=0;
    
    for(int i=0; i<n; i++)
    {
        if(str[i]>='A' && str[i]<='Z' && i!=0)
        {
            res[j]=' ';
            j++;
        }
    
        res[j]=str[i];
        j++;
        
    }
    
    res[j]='\0';
    
    printf("%s",res);
    
    return 0;
}