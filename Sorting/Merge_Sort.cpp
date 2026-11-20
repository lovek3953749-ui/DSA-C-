#include <iostream>
#include <vector>
using namespace std;

// Merges two subarrays of vec[].
// First subarray is vec[left..mid]
// Second subarray is vec[mid+1..right]
void merge(vector<int>& vec, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary vectors
    vector<int> L(n1);
    vector<int> R(n2);

    // Copy data to temporary vectors
    for (int i = 0; i < n1; i++) L[i] = vec[left + i];
    for (int j = 0; j < n2; j++) R[j] = vec[mid + 1 + j];

    // Merge the temporary vectors back into vec[left..right]
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

// left is for left index and right is right index of the sub-array of vec to be sorted
void mergeSort(std::vector<int>& vec, int left, int right) {
    if (left >= right) return; // Base case

    int mid = left + (right - left) / 2;
    
    // Sort first and second halves
    mergeSort(vec, left, mid);
    mergeSort(vec, mid + 1, right);
    
    // Merge the sorted halves
    merge(vec, left, mid, right);
}

int main() {
    vector<int> data = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(data, 0, data.size() - 1);

    cout << "Sorted array: ";
    for (int num : data) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}




