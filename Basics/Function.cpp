// #include<iostream>
// using namespace std;

// // function definition
// void printHello(){              // void function is use when no any integer is present
//      cout<< "hello\n";

// }

// int main(){              // int is a function and main is the name of this main function

//     // function call or invoke
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();
//     printHello();

// int printHello(){
//     cout<<"hello\n";
//     return 3;
// }

// int main(){
//     int val = printHello();
//     cout<< "val = " <<val <<endl;    //or  cout << printHello() << endl;
// }

// return 0;

//}




// //sum of 2 number
// int sum (int a, int b){
//     int s = a + b;
//     return s;
// }

// int main(){
//     cout<<sum;
// }





// // minimum of 2 number
// int minofTwo (int a, int b){
//     if(a < b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// int main(){
//     cout<<"mini = "<< minofTwo(10, 5)<<endl;   // arguments

//     return 0;

// }





// // Questions 1) Calculate sum of numbers from 1 to N

// #include <iostream>
// using namespace std;

// int sumN(int n){
//     int sum = 0;

//     for (int i = 1; i <= n; i++){
//         sum = sum + i;
//     }

//      return sum;
// }

// int main(){
//     cout << "sum = " << sumN(5) << endl;
//     cout << "sum = " << sumN(10) << endl;

//     return 0;
// }





// // Question 2) Calculate N factorial
// #include<iostream>
// using namespace std;

// int factN(int n){
//     int factorial = 1;

//     for(int i = 1; i<=n; i++){
//         factorial = factorial * i;
//     }

//     return factorial;
// }

// int main(){
//     cout<<"Factorial = "<<factN(3)<<endl;
//     cout<<"Factorial = "<<factN(5)<<endl;

//     return 0;
// }





/// Calculate sum of a number (Pass by value function)

// #include<iostream>
// using namespace std;

// int sumofDigits(int num){
//     int digSum = 0;

//     while (num > 0){
//         int lastDig = num % 10;
//         num /= 10;

//         digSum += lastDig;
//     }

//     return digSum;
// }

// int main(){
//     cout<< "sum = "<<sumofDigits(2356)<<endl;

//     return 0;
// }





/// Decimal to Binary 

//  #include<iostream>
//  using namespace std;

//  int decToBinary(int decNum){
//     int ans = 0, pow = 1;

//     while(decNum > 0){
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }

//     return ans;   // binary form

//  }

//  int main(){
//     int decNum = 50;
//     cout<<"Decimal to Binary number is.."<<endl;

//     for(int i = 1; i <= 10; i++){
         
//         cout<<i << " = "<<decToBinary(i) << endl;
//     }

//     //cout<<"Decimal to Binary = "<<decToBinary(decNum)<<endl;

//     return 0;
//  }
  



/// Bitwise Operator 

// 1) Bitwise & operator

// #include<iostream>
// using namespace std;

// int main(){

//     int a = 4, b = 8;

//     /// All output value are in decimal form
//     cout<< (a & b)<<endl;     // bitwise AND operator  
//     cout<< (a | b)<<endl;     // bitwise OR operator 
//     cout<< (a ^ b)<<endl;     // bitwise XOR operator
    
//     int n = 10;
//     cout<< (n >> 1)<<endl; //or cout<< (10 >> 1)<<endl;    // bitwise Right-Shift operator
//     cout<< (n << 1)<<endl;                                 // bitwise Left-Shift operator



//     return 0;

// }




// // Data type modifiers
// #include<iostream>
// using namespace std;

// int main(){
//     cout<< sizeof(int)<<endl;
//     cout<< sizeof(long int)<<endl;
//     cout<< sizeof(short int)<<endl;
//     cout<< sizeof(long long int)<<endl;

//     return 0;
// }





