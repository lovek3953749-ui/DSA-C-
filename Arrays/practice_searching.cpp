#include<iostream>
using namespace std;

void binarySearch(int arr[], int n, int target){
    int s =0, e = n-1;

    while(s <= e){
        int mid = (s + e)/2;
        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 8};
    int n = 8; 
    int target = 7;

    binarySearch(arr, n, target);
    return 0;
}