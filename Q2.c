#include <stdio.h>

int main() {
    int arr[10];double sum = 0;
    printf("Enter 10 elements\n");
    for(int i = 0 ; i < 10;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
        printf("Enter another element\n");
    }
    printf("%f",sum/10);
    

    return 0;
}
