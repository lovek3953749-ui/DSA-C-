#include<iostream>
using namespace std;

// bubble sort
void bubbleSort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

// selection sort
void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int Sidx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[Sidx]){
                Sidx = j; 
            }
            swap(arr[j], arr[Sidx]);
        }    
    }
}

// Insetion Sort
void insertionSort(int arr[], int n){
    for(int i = 1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

int main(){
    int arr[] = {7, 4, 9, 5, 2, 8, 3};
    int n = 7;

    bubbleSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selectionSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertionSort(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}