#include<stdio.h>

int main(){
 int i , n , mult,  arr[100];

    printf("Enter number of items: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");

    for(i = 0; i < n; i++){

        scanf("%d", &arr[i]);
    }
    printf("Value to multiply: \n");
    scanf("%d", &mult);
    printf("Final value: \n");
    for(i = 0; i<n; i++){
        printf("%d\n", mult * arr[i]);
    }

    return 0;

}
