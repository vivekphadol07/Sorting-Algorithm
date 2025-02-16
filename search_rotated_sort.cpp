#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& arr , int st , int end , int target){
    int mid = (st + end)/2;
    if(st > mid){
    }
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[st] <= arr[mid]){
            if(arr[st] <= target && target < arr[mid]){
                return search(arr , st , mid-1 , target); // left half
            }
            else{
                return search(arr , mid+1 , end , target);
            }
        }
        else{
            if(arr[mid] < target && target <= arr[end]){
                return search(arr , mid+1 , end , target);
            }
            else{
                return search(arr , st , mid-1 , target);
            }
        }
    return -1;
}
 
int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};

    cout<<search(arr , 0, arr.size()-1, 0 );

    return 0;
}