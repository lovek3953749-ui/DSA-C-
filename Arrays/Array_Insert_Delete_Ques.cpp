#include<iostream>
using namespace std;
int main(){

    int arr[10] = {20, 40, 90, 50, 60, 10, 70};
    int n = 7;
    int pos, val, del;



               // Insert into any index
    cout<<"Enter index position :";
    cin>>pos;
    cout<<"Enter new value :";
    cin>>val;

    if(pos > n){
        cout<<"Invalid index! "<<endl;
    }else{
        for(int i = n-1; i>=pos; i--){
            arr[i+1] = arr[i];
        }
    arr[pos] = val;
    n++;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



               //  delete from any index

    cout<<"Enter index position to be delete :";
    cin>>del;
    if(del > n){
        cout<<"Invalid index! "<<endl;
    }else{
        for(int i=del; i<n; i++){       // pos = 2
            arr[i]=arr[i+1];
        }
        n--;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}