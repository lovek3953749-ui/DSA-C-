
    //        // find smallest/largest number in an array
    // #include <iostream>
    // using namespace std;

    // int main()
    // {
    //     int nums[] = {4, 6, 7, 8, -7, 1, -9};
    //     int size = 7;

    //     int smallest = INT_MAX;
    //     int largest = INT_MIN;
    //     // int nums;

    //     for (int i = 0; i < size; i++){
    //         cout << nums[i] << " ";

    //         if (nums[i] < smallest){
    //             smallest = nums[i];
    //         }
    //         else if(nums[i] > largest){
    //             largest = nums[i];
    //         }
    //     }
    //     cout<<endl;

    //     cout<<"Smallest = " << smallest << endl;
    //     cout<<"Largest = " << largest << endl;

    //     return 0;
    // }



// OR


    // // Q) find the smallest/largest number in an array

// #include<iostream>
// using namespace std;

// int main (){

//     int nums[] = {3, 7, 200, 21, -32, 10};
//     int size = 6;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for(int i = 0; i<size; i++){
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest); 
//     }

//     cout<<"smalllest number = "<<smallest<<endl;
//     cout<<"Largest number = "<<largest<<endl;

//     return 0;
// }

  


      // by using function 
#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MAX;

    for(int i = 0; i<size; i++){

        if(arr[i] > max){             // or   max = MAX{max,  arr[i]};
            max = arr[i];
        }

    }
    return max;
}

int getMin(int arr[], int size){
    int min = INT_MIN;

    for(int i = 0; i<size; i++){

        if(arr[i] < min){          // or   min = MIN{min, arr[i]};
            min = arr[i];
        }

    }
    return min;
}


int main(){
    int arr[] = {5, 7, 4, -2, 9, -3, 8};
    int size = 7;

    cout<<"Largest value is : "<<getMax(arr, size)<<endl;
    cout<<"Smallest value is : "<<getMin(arr, size)<<endl;

    return 0;
}