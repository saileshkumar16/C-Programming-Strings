// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[]="    Hi  this    ";
    
    int i=0;
    int j=0;
    int space = 0;
    
    while(str[i]==' ') //remove leading spaces
    i++;
    
    while(str[i]!='\0') //iterate entire string
    {
        if(str[i]!=' ') //current char is not a space
        {
            str[j]=str[i];
            j++;
            space=0; // we are inside word and next char will be a space after the word
        }
        else if(space==0) //current char is space and previous char is not space
        {
            str[j]=' '; //write exactly one space
            j++;
            space=1;
        }
        
        i++; // move to next location
        
    }
    
    if(str[j-1]==' ') //remove trailing spaces
    j--;
    
    str[j]='\0'; //termination
    
    printf("%s",str);

    


    return 0;
}