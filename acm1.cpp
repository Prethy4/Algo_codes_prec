#include<bits/stdc++.h>

using namespace std;


void show(int a[], int arr_size){
    for(int i = 0; i < arr_size; ++i){
        cout<< a[i] << "";
    }
}

bool customComparator(int a1, int a2) {
    return a1 < a2;

}

int main(){
    int a[] = {1,4,6,3,7,5,9,0,2};
    int size = sizeof(a) / sizeof(0);
    cout<< "array before sorting is: " <<endl;

    show(a, size);
    sort(a, a + size , customComparator);

    cout<< "\n the array after sorting is: ";
    show(a, size);
    return 0;
}
