#include<iostream>
using namespace std;

int SumNnums(int n){

    // base case
    if(n == 1){
        return 1;
    }


    return n + SumNnums(n-1);       // TC = O(n),  SC = O(n)
}

int main(){
    cout<<SumNnums(5)<<endl;
    return 0;
}