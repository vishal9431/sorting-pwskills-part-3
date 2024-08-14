// Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6]={4,6,1,9,2,8};
    int k=3;
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<" kth smallest element in array is "<<arr[k-1];

}