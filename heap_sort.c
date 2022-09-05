#include<stdio.h>
// Max heap sort
//ID: 200103020030

void max_heap(int arr[], int i, int heap_size){
    int large, temp;

    int l= (2 * i) + 1 ;
    int r=(2 * i) + 2;

        if(l < heap_size && arr[l] > arr[i]){
            large = l;
        }
        else{
            large = i;
        }
        if(r < heap_size && arr[r] > arr[large]){
            large=r;
        }
        if (large!=i){

            int temp = arr[i];
            arr[i] = arr[large];
            arr[large] = temp;

            max_heap(arr,large,heap_size);
        }
}

void Build_Max_Heap(int arr[],int heap_size)
{
    for(int i = (heap_size / 2) - 1; i >= 0 ;i--){
        max_heap(arr, i, heap_size);
    }
}

void heapsort(int arr[],int heap_size){
    int temp;

    Build_Max_Heap(arr, heap_size);

        for(int i = heap_size - 1; i>0; i--)
        {
            temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;

            heap_size--;

            max_heap(arr, 0, heap_size);

        }
}

void printarray(int arr[], int heap_size){
    for(int i = 0; i <= heap_size; i++){
        scanf("%d", &arr[i]);
    }
}
void printsort(int arr[], int heap_size){
    for(int i = 0; i <= heap_size; i++){
        printf("%d ", arr[i]);
    }

}


int main()

{
    int heap_size;
    printf("Enter number of array: ");
    scanf("%d",&heap_size);

    int arr[heap_size];

    printf("Enter the elements: \n");
    printarray(arr,heap_size - 1);

    heapsort(arr,heap_size);

    printf("Sorted array are: \n");
    printsort(arr, heap_size - 1);
    return 0;
}
