#include <iostream>
using namespace std;

// Define a maximum size for the non-zero elements
const int MAX = 100;

// Function to print the triplet compact representation
void display(int matrix[MAX][3]) {
    int nonZero = matrix[0][2]; // Total non-zero elements stored in metadata
    
    cout << "\nRow\tColumn\tValue\n";
    cout << "-----------------------\n";
    for (int i = 0; i <= nonZero; i++) {
        cout << matrix[i][0] << "\t" << matrix[i][1] << "\t" << matrix[i][2];
        if (i == 0) cout << "  (Metadata)";
        cout << "\n";
    }
}

// Function to transpose the compact representation
void transpose(int src[MAX][3], int dest[MAX][3]) {
    // 1. Swap total rows and total columns for the metadata row
    dest[0][0] = src[0][1]; // New rows = old columns
    dest[0][1] = src[0][0]; // New columns = old rows
    dest[0][2] = src[0][2]; // Non-zero count remains the same

    int totalCols = src[0][1];
    int totalNonZero = src[0][2];
    int destIndex = 1; // Tracks where to insert in the transposed matrix

    // 2. Loop through columns (0 to totalCols) to keep the transposed matrix sorted by row
    for (int col = 0; col < totalCols; col++) {
        for (int i = 1; i <= totalNonZero; i++) {
            // If the element belongs to the current column, flip and copy it
            if (src[i][1] == col) {
                dest[destIndex][0] = src[i][1]; // New row is the old column
                dest[destIndex][1] = src[i][0]; // New column is the old row
                dest[destIndex][2] = src[i][2]; // Value stays same
                destIndex++;
            }
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int original[MAX][3];
    int k = 1; // Index 0 is reserved for metadata, so data insertion starts at 1

    cout << "Enter the matrix elements line by line:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value;
            cin >> value;
            
            // If element is non-zero, store its row, column, and value
            if (value != 0) {
                original[k][0] = i;
                original[k][1] = j;
                original[k][2] = value;
                k++;
            }
        }
    }

    // Fill the metadata row at index 0 [Total Rows, Total Columns, Total Non-Zero]
    original[0][0] = rows;
    original[0][1] = cols;
    original[0][2] = k - 1; 

    cout << "\n--- Original Matrix (Compact Form) ---";
    display(original);

    // Create array for transposed matrix and compute it
    int transposed[MAX][3];
    transpose(original, transposed);

    cout << "\n--- Transposed Matrix (Compact Form) ---";
    display(transposed);

    return 0;
}
