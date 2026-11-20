// ///Q2) write a program to Swap the Max and Min number of an array

// #include<iostream>
// using namespace std;

// int swapMinMax(int arr[], int size){
//     if(size<=1) return;
//         int minIndex = 0;
//         int maxIndex = 0;

//         for(int i = 0; i<size; i++){
//             if(arr[i]<arr[minIndex]){
//                 minIndex = i;
//             }
//             if(arr[i]>arr[maxIndex]){
//                 maxIndex = i;
//             }
//         }
//     int swap(arr[minIndex], arr[maxIndex]);
// }

// int main(){

//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int size = 7;

//     return 0;

// }




//  #include <iostream>

// void swapMaxAndMin(int arr[], int size) {
//     // If the array has 1 or 0 elements, no swapping is needed
//     if (size <= 1) return;

//     // Track the indices of the minimum and maximum elements
//     int minIndex = 0;
//     int maxIndex = 0;

//     for (int i = 1; i < size; ++i) {
//         if (arr[i] < arr[minIndex]) {
//             minIndex = i; // New minimum found
//         }
//         if (arr[i] > arr[maxIndex]) {
//             maxIndex = i; // New maximum found
//         }
//     }

//     // Manual swap using a temporary variable (no <algorithm> library)
//     int temp = arr[minIndex];
//     arr[minIndex] = arr[maxIndex];
//     arr[maxIndex] = temp;
// }

// int main() {
//     int myArray[] = {12, 5, 2, 9, 27, 18};
//     int size = sizeof(myArray) / sizeof(myArray[0]);

//     std::cout << "Original array: ";
//     for (int i = 0; i < size; ++i) {
//         std::cout << myArray[i] << " ";
//     }
//     std::cout << std::endl;

//     // Call the function to swap min and max
//     swapMaxAndMin(myArray, size);

//     std::cout << "Modified array: ";
//     for (int i = 0; i < size; ++i) {
//         std::cout << myArray[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
