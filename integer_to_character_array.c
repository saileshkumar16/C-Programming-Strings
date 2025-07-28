#include <stdio.h>

int main() {
    
 int arr[50]={1,4,5,8,7,6,3};
 
 int n = 7;
 int i;
 char arr2[n];
 
 for( i=0;i<n;i++)
 {
     arr2[i] = arr[i] + '0';
 }
 
printf("%s",arr2);
 

    
    return 0;
}
