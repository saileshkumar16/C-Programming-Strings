#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100]="Sailesh";
    char str2[]="Kumar";
    int i =0 ;
    int j =0;
    
    while(str1[i]!='\0')
    {
        i++;
    }
    
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    
    str1[i]='\0';
    
    printf("%s",str1);
    
    
    
    

    return 0;
}
