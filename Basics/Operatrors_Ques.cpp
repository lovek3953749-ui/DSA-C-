#include <iostream>
using namespace std;
int main()
{

   // Q1) Write a program to calculate the average of three numbers using arithmetic operators.

   //  float a, b, c;
   //  cout<<"Enter a:";
   //  cin>>a;

   //  cout<<"Enter b:";
   //  cin>>b;

   //  cout<<"Enter c:";
   //  cin>>c;

   //  //float a = 4, b = 5, c = 7;

   //  cout<<"Average of a, b and c is: "<<(a+b+c)/3<<endl;




   // // Q2) Write a program to calculate the area and perimeter of a rectangle using user inputs for length and width.

   //  int length, width;
   //  cout<<"Enter Length:";
   //  cin>>length;
   //  cout<<"Enter Width:";
   //  cin>>width;

   //  cout<<"Area of a Rectangle is: "<<length*width<<endl;
   //  cout<<"Perimeter of a Rectangle is: "<<2*(length+width)<<endl;





   // // Q3)Write a program to check if a number is not divisible by 3 using the logical NOT operator (`!`).

   // int x;
   // cout<<"Enter the value of x: ";
   // cin>>x;

   // if(!(x % 3 == 0)){
   //    cout<<"x is not divisible by 3."<<endl;
   // }else{
   //    cout<<"x is divisible by 3."<<endl;
   // }




   // //Q4) Write a program to compare two integers and print whether the first is greater, less, or equal to the second.

   // int x, y;
   // cout<<"Enter x:";
   // cin>>x;

   // cout<<"Enter y:";
   // cin>>y;

   // if(x > y){
   //    cout<<"x is Greater then y"<<endl;
   // }
   // else if(x < y){
   //    cout<<"x is Smaller then y"<<endl;
   // }
   // else if(x == y){
   //    cout<<"x is equal to y"<<endl;
   // }

   // else{
   //    cout<<"Invalid number"<<endl;
   // }




   //Q5) Write a program to check the type of a triangle based on its sides:
   // - Equilateral (all sides equal)
   // - Isosceles (two sides equal)
   // - Scalene (all sides different)

   // int a, b, c;
   // cout<<"Enter a:";
   // cin>>a;

   // cout<<"Enter b:";
   // cin>>b;

   // cout<<"Enter c:";
   // cin>>c;

   // if((a == b) && (a == c)){
   //    cout<<"Eqilateral Triangle"<<endl;
   // }

   // else if(((a == b) && (a != c)) || ((a != b) && (a == c))){
   //    cout<<"Isosceles Triangle"<<endl;
   // }
   // else if((a != b) && (a != c)){
   //    cout<<"Scalene Triangle"<<endl;
   // }

   // else{
   //    cout<<"Invalid Sides"<<endl;
   // }




   // Q6) A student is eligible for college admission if:
   //  - They scored at least 60% in both Math and Science.
   //  - If Math marks >= 80 and Science >= 70, they get a scholarship.
   //  Write a program to check admission eligibility and scholarship qualification.

   double math, science;

   // Input marks from the user
   cout << "Enter Math marks (out of 100): ";
   cin >> math;

   cout << "Enter Science marks (out of 100): ";
   cin >> science;

   // Check admission eligibility
   if (math >= 60 && science >= 60)
   {
      cout << "Admission Status: Eligible" <<endl;

      // Check scholarship qualification
      if (math >= 80 && science >= 70)
      {
         cout << "Scholarship Status: Qualified" <<endl;
      }
      else
      {
         cout << "Scholarship Status: Not Qualified" <<endl;
      }
   }
   else
   {
      cout << "Admission Status: Not Eligible" <<endl;
      cout << "Scholarship Status: Not Eligible (Requires Admission)" <<endl;
   }


return 0;
}