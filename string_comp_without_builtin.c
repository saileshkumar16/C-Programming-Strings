#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]="sai";
    char str2[100]="sailesh";
    
    int comp=0;
    
    int i =0;

    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    i++;

    int comp = str1[i]-str2[i];
    
    if(comp<0)
    printf("String 1 is shorter than string 2");
    else if(comp==0)
    printf("Both strings are equal");
    else if(comp>0)
    printf("String 1 is bigger than string 2");

    return 0;
}

