// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size){
//     cout<<"Printing the Array "<<endl;
//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"Printing Done."<<endl;
// }

// int main(){
//     int first[15];
//     cout<<"value at index 14 is :"<<first[14]<<endl;

//     int second[3] = {5, 7, 11};
//     cout<<"value at index 2 is :"<<second[2]<<endl;

//     int third[15] = {2, 7};
//     int size = 15;
//     printArray(third, 15);

//     int fourth[10] = {0};
//     int size = 10;
//     printArray(fourth, 10);

//     int fifth[10] = {1};
//     int size = 10;
//     printArray(fifth, 10);

//     return 0;  
// }



           // Update an Array
#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout<<"Inside the function"<<endl;
    arr[0] = 120;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main function"<<endl;
}



int main(){
    int arr[3] = {1, 2, 3};
    int n = 3;

    update(arr, 3);

    cout<<"Printing the main function"<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}