#include<iostream>
using namespace std;

int fact(int n){
   
    // base case (condition when recursive relation stop)
    if(n == 0){
        return 1;
    }

    return n * fact(n-1);   // recursion call itsef (recursive relation)
   
}

int main(){
    cout<<fact(4)<<endl;

    return 0;
}