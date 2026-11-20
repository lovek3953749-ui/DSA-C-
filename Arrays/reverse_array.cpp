
            // Reverse of an array
    #include<iostream>
    using namespace std;

    void reverseArr(int arr[], int size){
        int start = 0, end = size-1;
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }

    }
    int main(){
        int size = 7;
        int arr[] = {4, 7, 2, 8, 9, 1, 3};

        reverseArr(arr, size);

        for(int i = 0; i<size; i++){
            cout << arr[i]<<" ";
        }

        cout<<endl;
        return 0;
    }
