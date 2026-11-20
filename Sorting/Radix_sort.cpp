#include<iostream>
using namespace std;
void countSort(vector<int>&a,int pos){
    // create freq array
    vector<int>freq(10,0);
    for(int i=0;i<a.size();i++){
        freq[(a[i]/pos)%10]++;
        
    }
    // cumulative frequency
    for(int i=1;i<10;i++){
       freq[i]+=freq[i-1];
    }
   // ans array
   vector<int>ans(a.size());
   for(int i=a.size()-1;i>=0;i--){
     ans[--freq[(a[i]/pos)%10]]=a[i];
   }
   for(int i=0;i<a.size();i++){
    a[i]=ans[i];
   }
}
void redix_Sort(vector<int>&a){
    int largest=INT_MIN;
    for(int i=0;i<a.size();i++){
        if(a[i]>largest)
        largest=a[i];
    }
    // cout<<largest;
    for(int pos=1;largest/pos>0;pos*=10){
        countSort(a,pos);
    }

}
int main(){
   int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter araay elemnets: ";
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    redix_Sort(a);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}