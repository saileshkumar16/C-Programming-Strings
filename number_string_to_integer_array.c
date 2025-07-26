#include <stdio.h>
#include <string.h>

int main()
{
    char str[]="1234";
    int n = strlen(str);
    
    int res=0;
    
    int arr[n];
    
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            str[i] = str[i] - '0';
            res = (res * 10) + str[i];
        }
        
        i++;
    }
    
    printf("%d\n",res);
    
 
        for(int i=0;i<n;i++)
        {
          int rem = res % 10;
          arr[i] = rem;
          res = res / 10;
        }
        
        for(int j=0; j<n/2;j++)
        {
            int tmp = arr[j];
            arr[j] = arr[n-j-1];
            arr[n-j-1] = tmp;
        }
        
        for(int k=0; k<n; k++)
        {
            printf("%d ",arr[k]);
        }
    

    return 0;
}
