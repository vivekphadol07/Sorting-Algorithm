#include<iostream>
using namespace std;

int partition(int arr[] , int st , int end){
    int i = st-1;
    int pivot = arr[end];

    for(int j = st ; j < end ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}

void quick_Sort(int arr[], int st , int end ){
    if(st >= end){
        return;
    }
    int pivotIdx = partition(arr , st , end);

    quick_Sort(arr , st , pivotIdx-1);
    quick_Sort(arr , pivotIdx+1 , end);
}

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = { 6, 3, 7, 5, 2, 4};
    int n= 6;

    quick_Sort(arr , 0 , n-1);
    print(arr , n);
    return 0;
}