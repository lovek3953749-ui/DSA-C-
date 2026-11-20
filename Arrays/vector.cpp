#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>vec;    // size = 0. empty vector
    // cout<<vec[0]<<endl;
    cout<< "size = "<<vec.size()<<endl;

    vec.push_back(25);                   // size = 4
    vec.push_back(21);
    vec.push_back(45);
    //vec.push_back(56);
    cout<< "After push size = "<<vec.size()<<endl;                       // size = 3
    cout<< "After push capacity of vector  = "<<vec.capacity()<<endl;    // capacity = 4

    vec.pop_back();
    cout<< "After pop size = "<<vec.size()<<endl;     // pop means to remove last element

    cout<<vec.front()<<endl;              // to print first value
    cout<<vec.back()<<endl;              // to print last value
    cout<<vec.at(1)<<endl;  // or.  cout<<vec[1];        // to print value at index  1


    for(int i : vec){
        cout<< i <<" ";
    }
    cout<<endl;




    // vector<int>vec = {1, 2, 3};   // size = 3
    // cout<<vec[0];

    // vector<int>vec(5, 0);      // size = 3, value = 0
    // // cout<<vec[0]<<endl;
    // // cout<<vec[1]<<endl;
    // // cout<<vec[2]<<endl;

    // for(int i : vec){
    //     cout<< i <<endl;
    // }

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};

    // cout<< "size = "<<vec.size()<<endl;
    // // change 'int i' to 'char i' or 'auto i'
    // for(char val : vec){
    //     cout << val << endl;
    // }


    return 0;
}