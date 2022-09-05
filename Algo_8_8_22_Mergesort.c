#include<stdio.h>


int merge_sort(int arr[], int p,int r){
    if(p<r){
        int q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p ,q, r);

    }
}


int merge(int arr[], int p,int q,  int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1 + 1], R[n2 + 1];
    int i, j, key;

    for(i = 0; i < n1 ; i++){
        L[i] = arr[p + i];
    }

    for(j = 0; j < n2; j++ ){
        R[j] = arr[q + 1 + j];
    }

    L[n1 + 1] = 5000;
    R[n2 + 1] = 5000;

    i = 0;
    j = 0;

    for(key = p; key <= r; key++)
        {
        if(L[i] <= R[j]){
            arr[key] = L[i];
            i++;
        } else{
            arr[key] = R[j];
            j++;
        }
    }
}

int main(){
    int i , n, arr[100];

    printf("Enter number of items: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");

    for(i = 0; i < n; i++){

        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n -1);
    printf("Sorted array elements are: \n");

    for(i = 0; i<n; i++){
        printf("%d", arr[i]);
        printf("\n");
    }

    return 0;

}