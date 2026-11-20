#include<iostream>
using namespace std;

int Sum_array(int arr[], int size){
    
    // base case
    if(size == 0){
        return 0;
    }
    
    // recursion Call
    return arr[0] + Sum_array(arr+1, size-1);
}

int main(){
    int arr[] = {3, 2, 5, 1, 7};
    int size = 5;

    cout<<"Sum of all elements = "<<Sum_array(arr, size)<<endl;
    return 0;
}