#include<iostream>
#include<vector>
using namespace std;

void heapify(int i , vector<int> &arr , int n){ // for max heap ascending
    int l = 2*i + 1;
    int r = 2*i + 2;
    int maxI = i;

    if(l < n && arr[l] > arr[maxI]){
        maxI = l;
    } 
    if(r < n && arr[r] > arr[maxI]){
        maxI = r;
    }

    if(maxI != i){
        swap(arr[i], arr[maxI]);
        heapify(maxI, arr, n);
    }
} 


// void heapify(int i , vector<int> &arr , int n){ // for min heap descending
//     int l = 2*i + 1;
//     int r = 2*i + 2;
//     int minI = i;

//     if(l < n && arr[l] < arr[minI]){
//         minI = l;
//     } 
//     if(r < n && arr[r] < arr[minI]){
//         maxI = r;
//     }

//     if(maxI != i){
//         swap(arr[i], arr[minI]);
//         heapify(minI, arr, n);
//     }
// }

void heapSort(vector<int> &arr){  // O(n*log n)
    int n = arr.size();
    //step 1:
    for(int i = n/2-1 ; i >= 0 ; i--){ // O(n*log n)
        heapify(i , arr, n);
    }

    //step 2
    for(int i = n-1 ; i >= 0 ; i--){  // O(n*log n)
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}
 
int main(){
    vector<int> arr = {1, 4, 2, 5, 3};
    heapSort(arr);

    for(auto it : arr){
        cout<<it<<" ";
    }
    return 0;
}