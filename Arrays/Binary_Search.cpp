#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
        int n = 7;
        int target = 6;

        binarySearch(arr, n, target);
        cout<<binarySearch(arr, n, target)<<endl;
    return 0;
}





// Binary search using Vector

// #include<iostream>
// #include<vector>
// using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st = 0, end = arr.size()-1;

//     while(st <= end){
//         int mid = (st+end)/2;           // for online platform   mid = st + (end - st)/2

//         if(tar < arr[mid]){
//             end = mid - 1;             // first half
//         }else if(tar > arr[mid]){
//             st = mid + 1;            // second half
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};  //odd
//     int tar1 = 12;
//     cout<<binarySearch(arr1, tar1)<<endl;

//     vector<int> arr2 = {-1, 0, 3, 5, 9, 12};  //even
//     int tar2 = 0;
//     cout<<binarySearch(arr2, tar2)<<endl;

//     return 0;
// }




// // Binary Search using Recursion
// #include<iostream>
// using namespace std;

// int recBinarySearch(int arr[], int tar, int st, int end){
//     int mid = st + (end - st)/2;

//     if(tar > arr[mid]){
//         return recBinarySearch(arr, tar, mid+1, end);   // 2nd half
//     }else if(tar < arr[mid]){
//         return recBinarySearch(arr, tar, st, mid-1);    // 1st half
//     }else{
//         return mid;
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {-1, 0, 3, 5, 9, 12};
//     int n = 6;
//     int tar = 9, st = 0, end = n-1;

//     cout<<recBinarySearch(arr, tar, st, end)<<endl;

//     return 0;
// }