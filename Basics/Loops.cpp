///------ While LOOPs-------

// #include<iostream>
// using namespace std;

// int main(){

// // Q1) Print number 1 to 5

// int i = 1;            // use any variable instead of i
// while(i <= 10){

//     //cout<<"Count"<<endl;    (print count not 1 to 5)

//     cout<<i << " ";
//     i = i+1 ;           // use (i ++) or (i += 1)
// }
// cout<<endl;  // to remove % sign use this





//     // Q2) Print number  upto n

//     int n = 20;
//     int i = 1;
//     while(i <= n){
//         cout<< i << " ";
//         i = i+1 ;
//     }
//     cout<<endl;

//     return 0;
// }



//// Q3) Sum of all even number
#include <iostream>
using namespace std;
 int main(){

  int n;
  cout<<"Enter n = ";
  cin>>n;

  int i = 2, sum = 0;
  while(i <= n){

    sum = sum + i;
    i = i+2;
  }
  cout<<"sum of Even number is:"<<sum;
  cout<<endl;


  return 0;

 }



 //// Q4) Given number is prime or not





///----- For LOOPs-------

// #include<iostream>
// using namespace std;
//  int main(){

/// Q1) print 1 to 20 numbers

// int n = 20;
// for(int i = 1; i <= n; i++){
//     cout<<i<< " ";
// }
// cout<<endl;




/// Q2) Sum of numbers from 1 to n

// using while loop

// int n = 5;
// int i =1 , sum = 0;
// while(i <= n){

//     sum = sum + i;
//     i = i+1;
// }
// cout<<sum;
// cout<<endl;




//      // using for loop

// int n;
// cout<<"Enter the value of n = ";
// cin>>n;
// int sum = 0;;
// for(int i = 1; i<=n; i++){
//     sum = sum + i;

//     if(i == 5){
//         break;       // stop the loop when i == 5 for using break statements
//     }
// }
// cout<<"Sum of n Numbers is:"<<sum <<endl;





/// Q3) Sum of all Odd numbers from 1 to N

//       int n = 10, oddsum = 0;
//       for(int i = 1; i <= n; i++){
//         if(i % 2 != 0){
//           cout<<i<< " ";

//           oddsum = oddsum + i;
//         }

//       }
//       cout<<endl;
//       cout<<"sum of odd number is = " << oddsum<<endl;

//     return 0;
// }




/////-------- do while lopps----------

// #include<iostream>
// using namespace std;
// int main(){

//   // do{
//   //   cout<<"hello World!\n";
//   // }
//   // while(2>5);

//   int n = 10;
//   int i = 1;

//   do{
//     cout<< i <<" ";
//     i++;
//   }while(i <= n);
//   cout<<endl;

//   return 0;
// }
