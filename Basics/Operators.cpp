#include<iostream>
using namespace std;


//Operators




// 1. Arithmetic Operators

// int main(){

  
//     // This is the input to take a and b
//     // int a, b;
//     // cout<<"Enter a:";
//     // cin>>a;

//     // cout<<"Enter b:";
//     // cin>>b;


    

//     //int a= 3, b=4;

//     int a = 4;
//     double b = 3;






//     // int sum = a+b;
    
//     // cout<<"sum:"<<sum<<endl;

//     // or
//     cout<<"sum:"<<(a+b)<<endl;
//     cout<<"difference:"<<(a-b)<<endl;
//     cout<<"product:"<<(a*b)<<endl;
//     cout<<"division:"<<(a/b)<<endl;   // cout << "division:" << (a / (double)b) << endl;

//    // cout<<"remainder:"<<(a%b)<<endl;
     

//     return 0;

// }



 // 2. Relational operators

// int main(){
//     int a=5, b=2;

//     cout << (a>b) << endl;
//     cout << (a>=b) << endl;
//     cout << (a<b) << endl;
//     cout << (a<=b) << endl;
//     cout << (a==b) << endl;
//     cout << (a!=b) << endl;

//     return 0;
// }



// Logical operators

// int main(){
    
//     cout<< !(3 > 1) <<endl;
//     cout<< !(3 < 1) <<endl;
//     cout<< ((4>2) || (2>3)) <<endl;
//     cout<< ((1>3) && (2>3)) <<endl;

//      return 0;

// }



// Unary Operators

// 1. Increment unary operator(++)
int mainL(){
    int a = 10;

    int b = a++;   // kam; update

    // int b = ++a  // update; kam

    cout<<"b = "<< b <<endl;  // 10
    cout<< "a = "<<a <<endl;  // 11

    return 0;
}


// 1. Decrement unary operator(--)
int mainL(){
    int a = 10;

    int b = a--;   // kam; update

    // int b = --a  // update; kam

    cout<<"b = "<< b <<endl;  // 10
    cout<< "a = "<<a <<endl;  // 11

    return 0;
}