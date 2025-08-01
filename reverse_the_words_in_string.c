#include <stdio.h>
#include <string.h>

int main() 
{
    char str[]="I am";
    
    int n = strlen(str);
    
    int start = 0;
    int end = n-1;
    
    int i;
    
    while(start<end)
    {
        char tmp = str[start];
        str[start]=str[end];
        str[end]=tmp;
        start++;
        end--;
    }
    
    printf("%s",str);
    printf("\n");
    
    i = 0;
    
while(i < n)
{
    while(i < n && str[i] == ' ') i++;  // skip leading spaces

    int start_word = i; //starting of the word found

    while(i < n && str[i] != ' ') i++;  // ending of the word found

    int end_word = i - 1;

    while(start_word < end_word)
    {
        char tmp = str[start_word];
        str[start_word] = str[end_word];
        str[end_word] = tmp;
        start_word++;
        end_word--;
    }
}

    
    printf("%s",str);
    return 0;
}


