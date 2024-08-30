#include<iostream>
using namespace std;

void insertionSort(int n, int *arr){ // Time Complexity = O(n^2)
    for(int i = 1 ; i < n ; i++){ // loop run for n times
        int curr = arr[i];
        for(int j = i-1 ; j >=0 && arr[j] > curr ; j--){ // loop run for n times
            swap(arr[j] , arr[j+1]);
        }
    }
}

void printarr(int n , int *arr){ // Time Complexity = O(n)
      for(int i = 0 ; i < n ; i++){ // loop run for n times
        cout<<arr[i]<<"\t"; // arr[] = {1, 2, 4, 4, 5, 6, 8, 13, 6}
    }
}

int main(){
    int arr[] = {2, 4, 5 , 1 , 4, 8, 13 , 6};
    int n = sizeof(arr)/sizeof(int);
    
    insertionSort(n, arr);
    printarr(n, arr);
    return 0;
}