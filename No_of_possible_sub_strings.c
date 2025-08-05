#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "abc";
    
    int n =strlen(str);
    
    for(int i=0;i<n;i++) // each character possible sub strings
    {
        char emp_str[20]="";
        int k=0;
        
        for(int j=i; j<n; j++) // generate possible combinations
        {
            emp_str[k] = str[j];
            k++;
            emp_str[k]='\0'; //terminate for safe practice
            printf("%s\n",emp_str);
        }
    }

    return 0;
}
