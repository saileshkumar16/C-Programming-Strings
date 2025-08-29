// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    
    char str[]="the pen";
    
    printf("The old string is\n %s",str);
    
    int n=strlen(str);
    
    int start = 0;
    int end = n-1;
    
    while(start<end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    
    int i=0; //starting index
    
    while(i<n) //iterate the string
    {
        int j=i; //start of the word
        
        while(j<n && str[j]!=' ') //iterate till end of current word
        {
            j++;
        }
        
        start = i; //start index of current word
        end = j-1; //end index of current word
        while(start<end)
        {
            char tmp = str[start];
            str[start] = str[end];
            str[end] = tmp;
            start++;
            end--;
            
        }
        
        i=j+1; //move to the start of new word after the space
    }
    
    printf("\nThe new string is\n%s",str);

    return 0;
}
