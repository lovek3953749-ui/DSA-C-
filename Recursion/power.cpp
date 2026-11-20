#include<iostream>
using namespace std;

int pow(int x, int n){
    
    // base case 
    if(n == 0){
        return 1;
    }

    // recursive relation
    return x * pow(x, n-1);
}

int main(){
    cout<<pow(2, 4)<<endl;
    return 0;
}