#include <iostream>
using namespace std;

void print(int arr[], int start, int end){
    //cout<<"Size of an array is :"<< size <<endl;

    for(int i = start; i<=end; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[], int start, int end, int key){
    cout<<endl;
    print(arr, start, end);

    if (start > end){
        return false;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        return true;
    }

    if(arr[mid] < key){
        return binarySearch(arr, mid+1, end, key);
    }else{
        return binarySearch(arr, start, mid-1, key);
    }


    // OR

    // // base case
    // if(size == 0){
    //     return false;
    // }

    // // recursive function call
    // int mid = (start+end)/2;
    // if((arr[0] == key) || (arr[1] == key)){
    //     return true;
    // }else{
    //     return binarySearch(arr+1, size-1, key);
    // }


}

int main(){
    int arr[] = {2, 4, 6, 10, 14, 17};
    int size = 6;
    int key = 17;

    cout << binarySearch(arr, 0, 5, key) << endl;
    return 0;
}