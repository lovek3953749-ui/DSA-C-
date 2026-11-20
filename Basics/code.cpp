# include <iostream>      // preprocessor directive 
using namespace std;       // standard namespace locate files 
  
// // this is the starting point of execution
// int main(){              // main function
//     cout<<"Luv kumar\n";   // output line
//     cout<<"Hello World\n";
//     cout<<"This is my first program\nin C++ DSA course\n";

//     //or
//     cout<<"Hello World " << "Luv kumar" <<endl;


//     // These are called as primitive Data types

//     int age = 25;         // integer datatype stores 4 bytes space in memory
//     cout<<age<<endl;

//     char grade = 'a';     // charcter datatype stores 1 bytes space in memory
//     cout<<grade<<endl;

//     float PI = 3.14f;       // float datatypes stores 4 bytes space in memory
//     cout<< PI <<endl;

//     bool isSafe = true;     // boolyen datatype stores 1 bytes space in memory
//     cout<<isSafe<<endl;

//     double price = 100.99;   // float datatype stores 4 bytes space in memory
//     cout<<price<<endl;
     
//     return 0;             // without this code also run but this the sign of good programmer
//}


//Implicit Converssion--> Small datatype bytes convert into big datatype bytes

// int main(){
//     char grade = 'A';   // ASCII value of character A is 65
//     int value = grade;
//     cout<<value<<endl;

//     char grade = 'a';     // ASCII value of character a is 65
//     int value = grade;
//     cout<<value<<endl;
// }


// int main(){
//     double price = 100.99;         // there is no roundoff after decimal any value that is neglect
//     int newPrice = (int)price;
//     cout<<newPrice<<endl;

//     return 0;
// }



// Input in C++

// Take a input to your age 
// int main(){
//     int age;
//     cout<<"Enter the age:";
//     cin>>age;

//     cout<<"Your age is :" <<age<<endl;
// }


// Take a input to your lover

int main(){
    string name;
    cout<<"Enter your partner name:";
    cin>>name;
    cout<<"Your partner name is:"<<name<<endl;
    

}