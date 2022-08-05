#include <stdio.h>

int main() {
    int arr[10];int sume = 0;int sumo =0;
    printf("Enter 10 elements\n");
    for(int i = 0 ; i < 10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
        {
            sume = sume + arr[i];
        }
        else 
        {
            sumo = sumo + arr[i];
        }
        printf("Enter another element\n");
    }
    printf("sum of odd numbers %d\n",sumo);
    printf("sum of even numbers %d\n",sume);
    

    return 0;
}
