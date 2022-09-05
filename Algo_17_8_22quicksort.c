#include<stdio.h>


void quick_sort(int arr[], int beg, int end){
    if( beg <  end){
        int q = partition(arr, beg, end);
        quick_sort(arr, beg, q - 1);
        quick_sort(arr, q + 1, end);
    }

}

int partition (int arr[],int  beg, int end ){
    int temp;
    int x = arr[end];
    int i = beg - 1;
    for(int j = beg; j<= end - 1; j++){
        if(arr[j] <= x){
            i = i + 1;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;


        }
    }
    temp = arr[i + 1];
    arr[i+ 1] = arr[end];
    arr[end] = temp;

    return i + 1;

}
int main(){
    int i, n , arr[100];
    printf("enter the number of items: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++){
        arr[i] = rand()% 100 + 1;
        //printf("arr[%d] = %d\n", i, arr[i]);
    }

    quick_sort(arr, 0, n - 1);
    printf("\nsorted elements are: \n");
    for(i = 0; i<n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

}