#include <iostream>
#include <vector>
#include <utility>
using namespace std;

// Partitions the array using the Hoare scheme
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j) {
            return j;
        }

        swap(arr[i], arr[j]);
    }
}

// Recursive Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    vector<int> data = {24, 9, 29, 14, 19, 27};
    
    quickSort(data, 0, data.size() - 1);
    
    for (int num : data) {
        cout << num << " ";
    }
    cout<<endl;
    return 0;
}
