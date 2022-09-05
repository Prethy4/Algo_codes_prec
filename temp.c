#include<stdio.h>
void array_scanf(int arr[],int n)
{
    for(int i=0;i<=n;i++)
        scanf("%d",&arr[i]);
}
void print(int arr[],int n)
{
    for(int i=0;i<=n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}


void max_heapify(int arr[], int i,int heap_size)
{

    int largest;
    int l=(2*i)+1;
    int r=(2*i)+2;
    if(l<heap_size && arr[l]>arr[i])
        largest=l;
    else
        largest=i;
    if(r<heap_size &&arr[r]>arr[largest])
        largest=r;
    if (largest!=i)
    {

        int tmp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=tmp;
        max_heapify(arr,largest,heap_size);
    }
}

void build_max_heap(int arr[],int heap_size)
{
    for(int i=(heap_size/2)-1; i>=0 ;i--)
        max_heapify(arr,i,heap_size);
}
void heap_sort(int arr[],int heap_size)
{
    build_max_heap(arr,heap_size);

    for(int i=heap_size-1;i>0;i--)
    {
        int tmp=arr[0];
        arr[0]=arr[i];
        arr[i]=tmp;
        heap_size--;
        max_heapify(arr,0,heap_size);

    }
}

int main()

{
    int heap_size;
    scanf("%d",&heap_size);
    int arr[heap_size];
  //  heap_size--;
    array_scanf(arr,heap_size-1);
    print(arr,heap_size-1);
    heap_sort(arr,heap_size);
    print(arr,heap_size-1);

    return 0;
}

