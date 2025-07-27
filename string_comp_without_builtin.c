#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]="sai";
    char str2[100]="sailesh";
    
    int comp=0;
    
    int i =0;
    
    while(str1[i]!='\0' && str2[i]!='\0') // both strings same length
    {
        if(str1[i]!=str2[i])
        {
            comp = str1[i] - str2[i];
            break;
        }
        
        i++;
    }
    
    if(comp == 0 && (str1[i]=='\0' || str2[i]=='\0') ) // if any one string is terminated first
    {
        comp = str1[i] - str2[i];
    }
    
    if(comp<0)
    printf("String 1 is shorter than string 2");
    else if(comp==0)
    printf("Both strings are equal");
    else if(comp>0)
    printf("String 1 is bigger than string 2");

    return 0;
}
