#include<stdio.h>

int binary(int arr[], int beg, int end, int key){
    if(beg > end){
        return -1;
    }
    int mid = (beg + end) / 2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key){
            binary(arr, beg, mid - 1, key);
    }
    else{
     binary(arr, mid + 1, end, key);
    }
}

int main(){
    int arr[100],i , n, key;
    printf("Enter number of items: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++){
       /* arr[i] = rand()% 100 ;
        printf("arr[%d] = %d\n", i, arr[i]); */
        scanf("%d", &arr[i]);
    }
    printf("Enter elements:");
    scanf("%d", key);
   int element = binary(arr, 0, n- 1, key);

    if(element > 0){
        printf("Element placed in %d position ",element);
    } else{
        printf("Item not found in the list!");
    }

}
