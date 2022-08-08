
#include <stdio.h>

int main() {
    int arr[10];int arr1[10];
    int i = 0;
    while(i < 10)
    {
        printf("Enter element\t");
        scanf("%d",&arr[i]);
        i++;
    }
    i = 0;
    while(i < 10)
    {
        arr1[i] = arr[i];
        i++;
    }
    printf("Duplicate Array\n");
    for(int i = 0; i < 10;i++) printf("%d\n",arr1[i]);
    
    


    return 0;
}
