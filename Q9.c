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
    for(int i=9;i>=0;i--)
    {
        printf("%d\n",arr[i]);
        
    }
    


    return 0;
}
