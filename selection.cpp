#include<iostream>
using namespace std;

void selectionSort(int n, int *arr){ // Time Complexity = O(n^2)
    for(int i = 0 ; i < n-1 ; i++){ // loop run for n times
        int minIdx = i;
        for(int j = i-1 ; j < n ; j++){ // loop run for n times
            if(arr[j] < arr[minIdx]){
                minIdx++;
            }
        }
        swap(arr[i] , arr[minIdx]);
    }
    printarr(n,arr);
}

void printarr(int n , int *arr){ // Time Complexity = O(n)
      for(int i = 0 ; i < n ; i++){ // loop run for n times
        cout<<arr[i]<<"\t"; // arr[] = {1, 2, 4, 4, 5, 6, 8, 13, 6}
    }
}

int main(){
    int arr[] = {2, 4, 5 , 1 , 4, 8, 13 , 6};
    int n = sizeof(arr)/sizeof(int);
    
    selectionSort(n, arr);
    printarr(n, arr);
    return 0;
}
