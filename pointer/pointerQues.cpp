// //To reverse an array of integers using pointer arithmetic without direct array indexing.
// #include <iostream>
// using namespace std;

// // Function to reverse the array using pointer arithmetic
// void reverseArray(int* arr, int size) {
//     int* left = arr;               // Pointer to the first element
//     int* right = arr + size - 1;   // Pointer to the last element

//     // Swap elements while the left pointer is before the right pointer
//     while (left < right) {
//         int temp = *left;
//         *left = *right;
//         *right = temp;
//         //swap(arr[*left], arr[*right]);

//         left++;   // Move forward
//         right--;  // Move backward
//     }
// }

// int main() {
//     const int size = 5;
//     int arr[size] = {10, 20, 30, 40, 50};

//     cout << "Original array: ";
//     for (int* ptr = arr; ptr < arr + size; ptr++) {
//         cout << *ptr << " ";
//     }
//     cout << endl;

//     // Call reverse function
//     reverseArray(arr, size);

//     cout << "Reversed array: ";
//     for (int* ptr = arr; ptr < arr + size; ptr++) {
//         cout << *ptr << " ";
//     }
//     cout << endl;

//     return 0;
// }







#include<iostream>
using namespace std;

void reverseArr(int* arr, int size){
    int* start = arr;
    int* end = arr + size - 1;

    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main(){
    int size = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    reverseArr(arr, size);
    for(int* ptr = arr; ptr<arr+size; ptr++){
        cout<<*ptr<<" ";
    }
    cout<<endl;
    return 0;
}