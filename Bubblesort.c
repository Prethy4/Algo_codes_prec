#include<stdio.h>

void bubblesort(int arr[], int n){
    int i, j, temp;
    for(i = 0; i <= n - 1; ++i){
        for(j = 0; j < n - i - 1 ; ++j){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }

}

int main(){
    int j , n, arr[100];

    printf("Enter number of items: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");

    for( j = 0; j < n; ++j){
        scanf("%d", &arr[j]);
    }

    bubblesort(arr, n);
    printf("Sorted elements are: \n");

    for( j = 0; j < n; ++j){
        printf("%d\n", arr[j]);
    }

    return 0;


}
