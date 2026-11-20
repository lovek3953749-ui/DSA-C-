#include<iostream>
using namespace std;
int main(){




    // Q1) Factorial of a number n:

    int n, product = 1;
    cout<<"Enter n = ";
    cin>>n;

    // (let n = 5 factorial of 5 is => 1*2*3*4*5 = 120)

    for(int i = 1; i<=n; i++){
        product = product*i;

    }
    cout<<"Factorial of n = "<<product;
    cout<<endl;





    //// Q2) Sum of all numbers from 1 to N which are divisible by 3:

    int n, sum = 0;
    cout<<"Enter n = ";
    cin>>n;

    // (let n= 9, sum of 3+6+9 = 18)

    for(int i = 3; i <= n; i++){
        if(i%3 == 0){
            sum = sum + i;

        }
         
    }
    cout<<"Sum of multiple of 3 in between 1 to n is :" <<sum;
    cout<<endl;
     

    return 0;
}