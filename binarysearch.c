#include<stdio.h>

int binarysearch(int arr[], int beg, int end, int key){
    if(beg > end){
        return 0;
    }
    int mid = (beg + end) / 2;
    if(arr[mid] == key){
        return mid;
    }
    else if(key > arr[mid]){
        binarysearh(arr,  mid + 1, end, key);
    }
    else{
    binaryseach(arr, beg, mid - 1 , key);
    }
}


int main(){
    int n, key;
    int beg = 0;
    printf("Enter number of items: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%dEnter key: \n", key);
    printf("%d\n");
    binarysearch(arr, beg , n, key);

}
