    
    // Q1) Write a program to Calculate sum and product of all numbers in an Array.
// #include<iostream>
// using namespace std;

// int main(){

//     int arr[] = {1, 2, 3};
//     int size = 3;
//     int sum =0;
//     int product = 1;
    

//     for(int i = 0; i<size; i++){
//         sum = sum + arr[i];
//         product = product*arr[i];
//     }

//     cout<<"Sum of all elements of an Array is : "<<sum<<endl;
//     cout<<"Product of all elements of an Array is : "<<product<<endl;
//     return 0;
// }




          /// OR,  using function

// #include<iostream>
// using namespace std;

// void CalSumandProd(int arr[], int size){

//     int sum = 0;
//     int product = 1;

//     for(int i = 0; i<size; i++){
//         sum = sum + arr[i];
//         product = product * arr[i];
//     }

// }

// int main(){

//     int arr[] = {1, 2, 3, 4};
//     int size = 4;           // or, int size = sizeof(arr)

//     long long totalSum;
//     long long totalProduct;


//     CalSumandProd(arr, size, totalSum, totalProduct);

//     cout<<"Sum : "<<totalSum<<endl;
//     cout<<"product :"<<totalProduct<<endl;

//     return 0;
// }




