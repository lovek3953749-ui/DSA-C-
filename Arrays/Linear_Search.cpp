
//            //Linear Search
    // #include<iostream>
    // using namespace std;

    // int linearSearch(int arr[],int size, int target){
    //     for(int i = 0; i<size; i++){
    //         if(arr[i] == target){
    //             return i;
    //         }
    //     }
    //     return -1;

    // }
    // int main(){

    //     int size = 7;
    //     int arr[] = {1, 7, 5, 9, 20, -9, 35};
    //     int target = 5;

    //     linearSearch(arr, size, target);

    //     cout<<linearSearch(arr, size, target)<<endl;

    //     return 0;
    // }



       // Linear search using vector
#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& vec, int target){
    for(int i=0; i<vec.size(); i++){
        if(vec[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>vec = {1, 7, 9, 20, -9, 35};
    int target = 35;

    cout<<linearSearch(vec, target)<<endl;
    
    return 0;
}






 












 