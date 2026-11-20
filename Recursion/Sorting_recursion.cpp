//   // BUBBLE SORT

// #include<iostream>
// using namespace std;

// void sortArray(int arr[], int size){

//     //base case 
//     if(size == 0 || size == 1){
//         return;
//     }

//     // recursion function
//     for(int i = 0; i<size-1; i++){
//         if(arr[i] > arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }

//     sortArray(arr, size-1);
// }

// int main(){
//     int arr[] = {2, 5, 1, 6, 9};
//     int size = 5;

//     sortArray(arr, size);

//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }






  // MERGE SORT
  
// #include<iostream>
// using namespace std;

// void merge(int arr[], int s, int e){

//     int mid = (s + e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];
      
//     // copy value
//     int k = s;                    // k = main array index
//     for(int i=0; i<len1; i++){
//         first[i] = arr[k++];
//     }

//     k = mid+1;
//     for(int i=0; i<len2; i++){
//         second[i] = arr[k++];
//     }

//     // merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     k = s;

//     while(index1 < len1 && index2 < len2){
//         if(first[index1] < second[index2]){
//             arr[k++] = first[index1++];
//         }else{
//             arr[k++] = second[index2++];
//         }
//     }

//     while(index2 < len2){
//         arr[k++] = second[index2++];
//     }

// }

// void mergeArray(int arr[], int s, int e){

//     //base case 
//     if(s >= e){
//         return;
//     }

//     int mid = (s + e)/2;

//     mergeArray(arr, s, mid);
//     mergeArray(arr, mid+1, e);
//     merge(arr, s, e);
// }

// int main(){
//     int arr[5] = {2, 5, 8, 6, 9};
//     int size = 5;

//     mergeArray(arr, 0, size-1);

//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }



 
// OUICK SORT
#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    // placed pivot at righjt position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right part
    int i = s, j = e;

    while(i <pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i <pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e){

    // base case
    if(s >= e){
        return;
    }

    // partition
    int p = partition(arr, s, e);

    // left part sorting
    quickSort(arr, s, p-1);

    // right part sorting
    quickSort(arr, p+1, e);
}

int main(){

    int arr[6] = {80,30,90,40,50,70};
    int n = 6;

    quickSort(arr, 0, n-1);
    cout<<"Sorted elements are :";

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}



 