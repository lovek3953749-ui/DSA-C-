/// pattern 1 = Square Star pattern

// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cout << "Enter n number of rows and columns = ";
//     cin >> n;

//     ///// Using While loops

//     int i = 1;
//     while (i <= n){
//         int j = 1;

//         while (j <= n){
//             cout << "*"<<" ";
//             j = j + 1;
//         }
//         cout << endl;

//         i = i + 1;
//     }
// }


       ///. Using for Loops
    //     int m;
    //     cout << "Enter m number of *  = ";
    //     cin >> m;

    //     for (int i = 1; i <= n; i++){
    //         for (int j = 1; j <= m; j++){
    //             cout << "*"<<" ";
    //         }
    //         cout << endl;
    //     }

    //     return 0;
    // }





    /// Pattern 2 = Square Number pattern

    // #include<iostream>
    // using namespace std;
    // int main(){

    //     int n;
    //     cout<<"Enter n =";
    //     cin>>n;

    //     for(int i = 1; i <= n; i++){
    //         for(int j = 1; j<=n; j++){
    //             cout<<j<<" ";
    //         }
    //         cout<<endl;

    //     }

    //     return 0;
    // }





    //// pattern 3  = Square Character pattern

    // #include<iostream>
    // using namespace std;
    // int main(){

    //     int n;
    //     cout<<"Enter n = ";
    //     cin>>n;

    //     for(int i = 1; i<=n; i++){
    //         char ch = 'A';
    //         for(int j = 1; j<=n; j++){

    //             cout<<ch<<" ";
    //             ch = ch+1;     // Ascii number (A B C...)-->(65 66 67.....)
    //         }
    //         cout<<endl;

    //     }
    // }





    // pattern 4 = Square increasing number pattern

    #include<iostream>
    using namespace std;
    int main(){

        int n, num = 1;
        cout<<"Enter n = ";
        cin>>n;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j<=n; j++){
                cout<<num<<" ";
                num = num+1;

            }
            cout<<endl;

        }

    }






    /// pattern 5(error)

    // #include<iostream>
    // using namespace std;
    // int main(){

    //     int n, character = 1;
    //     cout<<"Enter n = ";
    //     cin>>n;

    //     for(int i = 1; i<=n; i++){
    //         char ch = 'A';
    //         for(int j = 1; j<=n; j++){

    //             cout<<ch;
    //             ch = ch+1;     // Ascii number (A B C...)-->(65 66 67.....)
    //         }
    //         cout<<endl;

    //     }
    // }






    /// pattern 6 = Star right triangle

    // #include<iostream>
    // using namespace std;
    // int main(){

    //     int n;
    //     cout<<"Enter n = ";
    //     cin>>n;

    //     for(int i = 1; i<=n; i++){
    //         for(int j = 1; j<=i; j++){
    //             cout<<"*"<<" ";
    //         }
    //         cout<<endl;

    //     }
    //   return 0;

    // }





//// pattern 7 = Star Right tringle

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j<=i; j++){
//             cout<<"*"<<" ";               // (if we print same as 1, 22, 333 so here we replace  * to i)

//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     return 0;
// }





//// pattern 8 = Reverse triangle pattern

// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i = 0; i<n; i++){                 //let  n=4

//         for(int j=i+1; j>0; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }




// //// pattern 9 = Floyd's Triangle pattern

// #include<iostream>
// using namespace std;
// int main(){

//     int n, num=1; 
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<num<<" ";
//             num = num+1;
//         }
//         cout<<endl;
//     }


// }



//// pattern 10 = reverse Triangle pattern

// #include<iostream>
// using namespace std;
// int main(){

//     int n; 
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i =0; i< n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<j<<" ";
             
//         }
//         cout<<endl;
//     }


// }




// //// pattern 11 = inverted Triangle pattern

// #include<iostream>
// using namespace std;
// int main(){

//     int n, num=1; 
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=i+1; j>0; j--){
//             cout<<num<<" ";
//             num = num+1;
//         }
//         cout<<endl;
//     }


// }




// /// pattern 12 = pyramid pattern
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i = 0; i<=n; i++){
//         for(int j = 0; j<=n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j =1; j<=i+1; j++){
//             cout<<j;
//         }
//         for(int j =i; j>0; j--){
//             cout<< j;
//         }

//         cout<<endl;
//     }


//     return 0;

// }




// /// pattern 13 = Hollow Dimond pattern
// #include<iostream>
// using namespace std;
// int main(){

//     int n; 
//     cout<<"Enter n = ";
//     cin>>n;

//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n-i-1; j++){
//             cout<<" ";
//         }

//         cout<< "*" ;

//         if(i != 0){
//             for(int j =0; j<2*i-1; j++){
//                 cout<< " ";
//             }
//             cout<< "*" ;
//         }
//         cout<<endl;
//     }



//     for(int i =0; i<n-1; i++){
//         for(int j =0; j<i+1; j++){
//             cout<<" ";
//         }

//         cout<< "*";

//         if(i != n-2){
//             for(int j=0; j<2*(n-i)-5; j++){
//                 cout<< " ";
//             }
//             cout<< "*" ;
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }