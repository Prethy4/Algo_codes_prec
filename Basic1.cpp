#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int beg,int mid,int End)
{
    int nl=mid-beg+1;
    int nr=End-mid;
    int left[nl+1],right[nr+1],i,j,k;
    for(i=0;i<nl;i++)
        left[i]=arr[beg+i];
    for(j=0;j<nr;j++)
        right[j]=arr[mid+1+j];
    left[nl]=2000000000;
    right[nr]=2000000000;
    i=0;
    j=0;
    for(k=beg ; k<=End; k++)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
    }
}
void merge_sort(int arr[],int beg,int End)
{
    if(beg>=End)
        return ;
    int mid=(beg+End)/2;
    merge_sort(arr,beg,mid);
    merge_sort(arr,mid+1,End);
    Merge(arr,beg,mid,End);
}
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    merge_sort(x,0,n-1);
    for(int i=0;i<n;i++)
        cout<<x[i]<<" ";


}