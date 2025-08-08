#include <stdio.h>
#include <string.h>


void swap_array(int *p1, int*p2, int n)
{
    for(int i=0; i<n; i++)
    {
        int temp = *(p1+i);
        *(p1+i) = *(p2+i);
        *(p2+i) = temp;
    }
}

int main()
{
    int arr1[]={10,20,30};
    int arr2[]={70,80,90};
    
    int n= sizeof(arr1)/sizeof(arr1[0]);
    
    swap_array(arr1,arr2,n);
    
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr1[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr2[i]);
    }
    
    

    
    return 0;
}
