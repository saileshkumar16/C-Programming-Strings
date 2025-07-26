#include <stdio.h>

int main()
{
    int num =123;
    int i=0;
    char str[4];
    while(num!=0)
    {
        int rem = num % 10;
        
        if(rem >=0 && rem<=9)
        {
            str[i] = rem + '0';
            i++;
        }
        num = num / 10; 
    }
    
    for(int j=0; j<i/2;j++)
    {
        char temp = str[j];
        str[j]= str[i-j-1];
        str[i-j-1]= temp;
    }
    
    for(int k=0; k<i; k++)
    {
        printf("%c",str[k]);
    }

    
}
