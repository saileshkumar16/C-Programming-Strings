#include <stdio.h>

int main() 
{
    char str[] = "Sailesh";
    
    int vow_count = 0;
    int cons_count = 0;
    
    int i = 0;
    
    while(str[i] != '\0')
    {
        
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vow_count++;
        }
        else
        {
            cons_count++;
        }

        i++;
    }
    
    printf("Vowels: %d Consonants: %d\n", vow_count, cons_count);

    return 0;
}
