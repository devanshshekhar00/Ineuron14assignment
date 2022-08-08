#include <stdio.h>

int main() {
    int arr[10];double avg = 0;
    printf("Enter 10 elements\n");
    for(int i = 0 ; i < 10;i++)
    {
        scanf("%d",&arr[i]);
        avg = avg + arr[i];
        printf("Enter another element\n");
    }
    printf("%f",avg/10);
    

    return 0;
}
