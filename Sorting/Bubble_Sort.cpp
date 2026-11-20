          // Bubble Sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        bool isSwap = false;


        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){               //// for decending order = arr[j] < arr[j+1]
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){     // array already sorted
            return;
        }
    }
}



// void printArray(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


int main(){
    int arr[] = {7, 4, 9, 5, 2, 8, 3};
    int n = 7;

    bubbleSort(arr, n);

    // printArray(arr, n);

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}




 

 