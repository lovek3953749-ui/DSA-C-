#include<iostream>
using namespace std;

void print(int arr[], int size){
    cout<<"Size of an array is :"<< size <<endl;

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


bool linearSearch(int arr[], int size, int key){
    print(arr, size);

    // base case
    if(size == 0){
        return false;
    }
    
    // recursive function call
    if(arr[0] == key){
        return true;
    }else{
        return linearSearch(arr+1, size-1, key);
    }

}

int main(){

    int arr[] = {3, 2, 5, 1, 7};
    int size = 5;
    int key = 7;

    cout<<linearSearch(arr, size, key)<<endl;
    return 0;
}