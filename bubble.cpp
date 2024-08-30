#include<iostream>
using namespace std;

void bubbleSort(int n , int *arr){  // Time Complexity = O(n^2)
    for(int i = 0 ; i < n-1 ; i++){ // loops run for n times
        for(int j = 0 ; j < n-i-1 ;j++){ // loop run for n times
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void printarr(int n , int arr[]){ // Time Complexity = O(n)
      for(int i = 0 ; i < n ; i++){ // loop run for n times
        cout<<arr[i]<<"\t"; // arr[] = {1, 2, 4, 4, 5, 6, 8, 13, 6}
    }
}

int main(){
    int arr[] = {2, 4, 5 , 1 , 4, 8, 13 , 6};
    int n = sizeof(arr)/sizeof(int);
    
    bubbleSort(n, arr);
    printarr(n,arr);
    return 0;
}
