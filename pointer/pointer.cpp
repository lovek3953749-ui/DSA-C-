// #include<iostream>
// using namespace std;

// int main(){



//     int a = 10;
//     cout<<a<<endl;     // value of a

//     cout<<&a<<endl;    // address of a 
              //OR
//     int* ptr = &a;     // Address of a
//     cout<<ptr<<endl;

//     cout<<&ptr<<endl;    // Address of ptr

//     cout<< *ptr<<endl;  // (*)Dereference operator give the value of variable

//     cout<<*(&a)<<endl;      // Give value stored at address of a
 
//     cout<< &ptr<<endl;      // Address of ptr
             //OR
//     int** ptr1 = &ptr;      // int* is the data type of ptr. so int** is called pointer to pointer.

//     cout<<ptr1<<endl;

//     int* ptr2 = NULL;       // Null pointer cant do derefrence 
//     cout<<ptr2<<endl;



// int arr[] = {1, 9, 7, 4, 5};

// int a = 10;
// int* ptr = &a;
// cout<< ptr<<endl;
// ptr = ptr+2;          // +2int = 8 byte
// cout<<ptr<<endl;      //+4

// cout<< *arr <<endl;  // value of index 0
// cout<< *(arr+1) <<endl;  // value of index 1
// cout<< *(arr+2) <<endl;  // value of index 2

// int* ptr1;
// int* ptr2;
// int* ptr3 = ptr2;
// cout<<ptr1<<endl;
// cout<<ptr2<<endl;
// cout<< (ptr1 < ptr2)<<endl; // true = 1
// cout<<(ptr2 != ptr3)<<endl; // false = 0
// return 0;
    
// }







// Again pointer


// #include<iostream>
// using namespace std;

// int main(){

    // float price = 100.25f;
    // cout<<price<<endl;          // value of price
    // float* ptr = &price;       // pointer ptr1 stores the address of variable price
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;        // Address of ptr


    // int a = 7;
    // cout<<a<<endl;    // value of a
    // cout<<&a<<endl;    // to print the Address of a
    // int* ptr = &a;    //(int* ptr = int *ptr) both same.   //  pointer ptr stores the address of variable a
    // cout<<ptr<<endl;




    //       // pointer to pointer

    // int val = 21;
    // int* ptr1 = &val;       // ptr1 stores the Address of the variable val
    // int** ptr2 = &ptr1;     //  ptr2 stores the address of the pointer variaable ptr1

    // cout<<ptr1<<endl;   // address of ptr
    // cout<<*ptr2<<endl;  // value of ptr2

    // cout<<ptr2<<endl;   // address of ptr2

    // cout<<*ptr1<<endl;      // value of the variable stored by ptr1
    // cout<<**ptr2<<endl;     // value of the pointer variable stored by ptr1



    //        // Finding size using sizeof()
    // cout<<sizeof(ptr1)<<endl;
    // cout<<sizeof(ptr2)<<endl;




    //    // Modify the Address 
    // int a = 7;
    // int b = 9;

    // int* ptr = &a;
    // cout<<ptr<<endl;

    // ptr = &b;
    // cout<<ptr<<endl;




    //       // NULL pointer
    // int** ptr1;
    // cout<<ptr1<<endl;  // garbage value

    // int* ptr = nullptr;   // null pointer
    // cout<<ptr<<endl;    
    

//     return 0;
// }






#include<iostream>
#include<vector>
using namespace std;


          // Pass by Reference

// // void changeA(int a){     // pass by value
// //     a = 20;
// // }

// void changeA(int* ptr){   // pass by Reference using pointer
//     *ptr = 20; 
// }

// int main(){
//     int a = 10;
    
//     changeA(&a);     
//     cout<<"inside main function :"<<a<<endl;





// int main(){

//     int arr[] = {1, 2, 3, 4, 5};
//     cout<< arr <<endl;              // address of pointer arr of 0th index
//     cout<< *arr <<endl;             // value at 0th index

//     return 0;
// }




      // pointer Arithmetic

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // 1) Increment(ptr++ / ++ptr) and Decrement(ptr--)
    int arr[] = {1, 2, 3, 4, 5};
    int a = 7;
    int* ptr = &a;

    // cout<<ptr<<endl;

    // ptr++;
    // cout<<ptr<<endl;

    // ptr--;
    // cout<<ptr<<endl;



        // Add and Subtract Number
    // ptr = ptr + 1;
    // cout<<ptr<<endl;   // 4bytes space added

    // ptr = ptr + 2;
    // cout<<ptr<<endl;

    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*arr+2<<endl;
    // cout<<*arr+3<<endl;
    // cout<<*arr+4<<endl;


    //        // subtraction
    ptr = ptr + 1;
    int* ptr1 = ptr+1;   // 4bytes added in ptr
    int* ptr2 = ptr+3;   // 12bytes added in ptr

    cout<<ptr1<<endl;    
    cout<<ptr2<<endl;
    // cout<< ptr2 - ptr1 <<endl;     // 2 integer



             // compare
    cout<<(ptr1 < ptr2) <<endl;     // true = 1
    cout<<(ptr1 > ptr2) <<endl;     // false = 0
    cout<<(ptr1 == ptr2) <<endl;     // false = 0
    cout<<(ptr1 != ptr2) <<endl;     // true = 1

    


    return 0;
}