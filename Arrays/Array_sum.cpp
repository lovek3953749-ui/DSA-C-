     // Sum of Arrays element
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 3, 4};
//     int size = 4, sum = 0;

//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<" ";
//         sum = sum+ arr[i];
         
//     }
//     cout<<endl;
//     cout<<"Sum = "<<sum<<endl;
//     return 0;
// }



        // count of odd numbers in array
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, oddCount = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]%2 != 0){
            cout<<arr[i]<<" ";
            oddCount++;
        }
    }
    cout<<endl;
      
    cout<<oddCount<<endl;
    return 0;
}

