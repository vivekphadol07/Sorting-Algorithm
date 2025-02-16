#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[] , int st , int mid , int end){ // O(n)
    vector<int> temp;
    int i = st ;
    int j = mid + 1;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    while(j <= end){
        temp.push_back(arr[j++]);
    }
    for(int i = st , x=0 ; i <= end ; i++){
        arr[i] = temp[x++];
    }
}

void merge_Sort( int arr[] , int st , int end){  // O(nlogn)
    if(st >= end){
        return;
    }
    int mid = st + (end - st)/2;
    merge_Sort(arr, st, mid); //left
    merge_Sort(arr, mid+1, end); //right

    merge(arr, st, mid, end);
}

void print(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<endl;
    }
}


 
int main(){
    int arr[6] = { 6, 3, 7, 5, 2, 4};
    int n= 6;
    merge_Sort(arr, 0 , n-1);
    print(arr , n);
    return 0;
}