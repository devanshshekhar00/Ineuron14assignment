#include <stdio.h>

int main() {
    int arr[10];
    int i = 0;
    while(i < 10)
    {
        printf("Enter element\t");
        scanf("%d",&arr[i]);
        i++;
    }
    for(int i=0;i<9;i++)
    {
        for(int j = 0 ; j < 9;j++)
        {
            if(arr[j] > arr[j+1])
        {
            int k = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = k;
        }
        }
        
    }
    printf("Greatest number is %d",arr[9]);


    return 0;
}
