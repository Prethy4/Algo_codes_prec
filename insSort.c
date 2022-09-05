#include<stdio.h>

void insert(int arr[], int n){
    int i, j, key;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

    while(j>=0 && arr[j] > key){
        arr[j + 1] = arr[j];
        j =j - 1;
        }

        arr[ j+ 1 ] = key;
    }


}


int main(){
    int i , n, arr[100];

    printf("Enter number of items: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");

    for( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    insert(arr, n);
    printf("Sorted elements are: \n");

    for( i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
