// Reverse the String
#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){

    cout<<"Call received for : "<< str <<endl;

    // base case
    if(i > j){
        return;
    }

    // function call
    swap(str[i], str[j]);
    i++;
    j--;
    return reverse(str, i, j);
}

int main(){
    string letter = "abcde";
    cout<<endl;
    reverse(letter, 0, letter.length()-1);
    cout<<endl;

    cout<<"Ans. = "<<letter<<endl;
    return 0;
}