#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[]="sail";
    char str2[]="sai";
    
    int i=0;
    
    int comp=0;
    
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            comp = str1[i] - str2[i];
            break;
        }
        i++;
    }
    
    if(comp==0)
    {
        comp = str1[i]-str2[i];
    }
    
    if(comp==0)
    printf("Both string are equal");
    else if(comp>0)
    printf("string 1 is bigger than string2");
    else
    printf("string 1 is smaller than string 2");

    return 0;
    
}
