//            // Linear search
// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target){
//     for(int i = 0; i<size; i++){
//         if(arr[i] == target){
//             return i;
//         }        
//     }
//     return -1;
// }
// int main(){
//     int arr [] = {4, 2, 7, 8, 1, 2, 5};
//     int size = 7;
//     int target = 7;

//     cout<<linearSearch(arr, size, target)<<endl;
//     return 0;
// }




//              // Binary Search
// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int target){
//     int low = 0, high = size-1;

//     while(low <= high){
//         int mid = (low + high)/2;
//         if(arr[mid] == target){
//             return mid;
//         }else if(arr[mid] < target){
//             low = mid + 1;
//         }else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int size = 5;
//     int arr[] = {3, 6, 9, 5, 7};
//     int target = 9; 

//     cout<<binarySearch(arr, size, target)<<endl;
//     return 0;
// }




                   // Bubble sort
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {3, 6, 5, 9, 1};
//     int size = 5;

//     for(int i = 0; i<size -1; i++){
//         for(int j = 0; j < size-i-1; j++){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }

//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }