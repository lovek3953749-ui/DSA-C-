#include<iostream>
using namespace std;

int count_to_reach_stairs(long long nStairs){
    
    // base case 
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }

   // function call
    return (count_to_reach_stairs(nStairs-1) + count_to_reach_stairs(nStairs-2));
}

int main(){
    cout<<count_to_reach_stairs(4)<<endl;
    return 0;
}