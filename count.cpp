#include<iostream>
using namespace std;

void countSort(int n , int *arr){
    int freq[100000];
    int minVal = INT32_MAX ,maxVal = INT32_MAX;
    for(int i = 0 ; i < n ; i++){
        minVal = min(minVal , arr[i]);
        maxVal = max(maxVal , arr[i]);
    }

    for(int i = 1; i < n ; i++){
        freq[arr[i]]++;
    }

    for(int i = minVal, j ; i <= maxVal ; i++ ){
        while(freq > 0){
            arr[j++] = i ;
            freq[i]--;
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
    
    countSort(n, arr);
    printarr(n, arr);
    return 0;
}