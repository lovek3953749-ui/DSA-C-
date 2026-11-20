#include<iostream>
using namespace std;

void printNums(int n){

    // Base Case
    if(n == 0){
        return ;
    }

    //recursive relation
    cout<<n<<" ";
    printNums(n-1);  // Function calls repetedly

}

void printHello(int n){

    // Base Case
    if(n == 0){
        return;
    }

    cout<<"Hello"<<endl;
    printHello(n-1);      // recursive case
}


void functionStar(int x){
    if(x > 0){
        return;
    }

    else{
        for(int i = 0; i<x; i++){
            cout<<"*";
            return functionStar(x-1);
        }
    }
}

int fibo(int n){
    // base case
    if(n == 0 || n == 1){
        return n;
    }

    // recursion call
    return (fibo(n-1) + fibo(n-2));
}


int main(){
    printNums(7);
    printHello(4);

    functionStar(4);

    cout<<fibo(3)<<endl;

    return 0;
}