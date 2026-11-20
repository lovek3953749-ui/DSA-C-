#include<iostream>
using namespace std;

int main(){


     //// Q1) Take input n and check it is positive or negative

    // int n=0;
    // cout<<"Enter the value of n:";
    // cin>>n;
    
    // if(n >= 0){
    //     cout<<"n is Positive"<<endl;
    // }
    
    // else{
    //     cout<<"n is Negative"<<endl;
    // }




    //// Q2) Take age as a input and check whether it is able to vote and cannot able to give vote

    //  int age;
    //  cout<<"Enter Age:";
    //  cin>>age;

    //  if(age>=18){
    //     cout<<"They can able to give vote"<<endl;
    //  }

    //  else{
    //     cout<<"Can not be able to give vote"<<endl;
    //  }
     




    //// Q3) Take input n and check the value of n that is even or not

    // int n;
    // cout<<"Enter n:";
    // cin>>n;

    // if(n%2 == 0){
    //     cout<<"n is Even Number"<<endl;
    // }
    // else{
    //     cout<<"n is Odd Number"<<endl;
    // }





     //// Q4) Take input marks and check their grades

     int marks;
     cout<<"Enter Marks:";
     cin>>marks;

     if(marks >= 90){
        cout<<"Grades = A"<<endl;
     }

     else if((marks >= 80) && (marks < 90)){
        cout<<"Grades = B"<<endl;
     }

     else if ((marks < 80) && (marks >= 60)){
        cout<<"Grades = C"<<endl;
     }

     else if ((marks < 60) && (marks >= 50)){
        cout<<"Grades = D"<<endl;
     }
     else if (marks < 50){
        cout<<"Grades = Fail"<<endl;
     }

     else{
        cout<<"Invalid marks"<<endl;
     }




   /// Q5) Find character lowercase and upercase

   // char ch;
   // cout<<"Enter any Character:";
   // cin>>ch;

   // if(ch >= 'a' && ch <= 'z'){
   //    cout<<"Character is Lowercase"<<endl;

   // }else{
   //    cout<<"Character is Upercase"<<endl;

   // }


      

   // Ternary Statements (comdition?stt1:strr2:)

  //  int n;
  //  cout<<"Enter n:";
  //  cin>>n;

  //  cout<< (n >= 0 ? "positive":"negative")<<endl;





    return 0;
}

