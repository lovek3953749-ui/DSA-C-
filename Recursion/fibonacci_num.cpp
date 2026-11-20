#include<iostream>
using namespace std;

int fibonacci(int n){    // TC = O(2^n)

    // base case
    // if(n == 0){
    //     return 0;
    // }

    // if(n == 1){
    //     return 1;
    // }else{
    //     return (fibonacci(n-1) + fibonacci(n-2));
    // }


    //OR

    if(n==0 || n==1){
        return n;
    }

    return (fibonacci(n-1)+fibonacci(n-2));


}

int main(){
    cout<<fibonacci(6)<<endl;
    return 0;
}