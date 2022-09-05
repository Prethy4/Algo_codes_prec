#include<bits/stdc++.h>

using namespace std;

struct student {
    string name;
    string university;
    int b_year;
    int id;
};

void show(student a[], int arr_size){
    for (int i = 0; i < arr_size; ++i)
        cout << a[i].name<< "-" << a[i].university<<" - " << a[i].b_year << " - " << a[i].id << endl;
};

bool customCompretor(student a, student b){
    return a.b_year> b.b_year;
};

int main()
{
    student array[4];
    array[0].name = "Karim";
    array[0].university = "NEUB";
    array[0].b_year = 1989;
    array[0].id = 1002293;
    
    array[1].name = "Karim";
    array[1].university = "NEUB";
    array[1].b_year = 1939;
    array[1].id = 1002293;

    array[2].name = "Karim";
    array[2].university = "NEUB";
    array[2].b_year = 1949;
    array[2].id = 1002293;

    array[3].name = "Karim";
    array[3].university = "NEUB";
    array[3].b_year = 1289;
    array[3].id = 1002293;

    int Size = (sizeof(array)/sizeof(array[0]));

    sort(array, array + Size, customCompretor);
    // cout << myCar.brand << " " <<  myCar.model << " " << myCar.year << "\n"; 
    // cout << myCar2.brand << " " <<  myCar2.model << " " << myCar2.year << "\n"; 

    // return 0;
}