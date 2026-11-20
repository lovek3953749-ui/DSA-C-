// #include<iostream>
// #include<string>
// using namespace std;

// struct salary{
//     double basic;
//     double hra;
// };
// struct employee{
//     string name;
//     int empNo;
//     char designation;
//     salary sal;

// };

// int main(){
//     int totalEmp = 1;
//     employee emp[totalEmp];
//     for(int i = 0; i<totalEmp; i++){
//         cout<<"Enter employee "<<(i+1) <<" details :"<<endl;

//         cout<<"Enter name :";
//         cin>>emp[i].name;

//         cout<<"Enter empNo :";
//         cin>>emp[i].empNo;

//         cout<<"Enter designation :";
//         cin>>emp[i].designation;

//         cout<<"Enter Basic Salary :";
//         cin>>emp[i].sal.basic;

//         cout<<"Enter HRA salary :";
//         cin>>emp[i].sal.hra;

//     }

//     for(int i = 0; i<totalEmp; i++){
//         cout<<"Employee :"<<(i+1)<<endl;
//         cout<<"Name :"<<emp[i].name<<endl;
//         cout<<"Emp_No :"<<emp[i].empNo<<endl;
//         cout<<"Designation :"<<emp[i].designation<<endl;
//         cout<<"Basic salary :"<<emp[i].sal.basic<<endl;
//         cout<<"HRA Salary :"<<emp[i].sal.hra<<endl;

//         cout<<"Total Salary :"<<(emp[i].sal.basic+emp[i].sal.hra)<<endl;
//     }
//     return 0;

// }





// #include<iostream>
// #include<string>
// using namespace std;

// struct salary{
//     double basic;
//     double hra;
// };

// struct employee{
//     string name;
//     int empNo;
//     char designation[30];
//     salary sal;
// };

// int main(){
//     int totalEmp = 5;
//     employee emp[totalEmp];

//     for(int i = 0; i<totalEmp; i++){
//         cout<<"Enter name :";
//         cin>>emp[i].name;

//         cout<<"Enter Emp_No :";
//         cin>>emp[i].empNo;

//         cout<<"Enter Designation :";
//         cin>>emp[i].designation;

//         cout<<"Enter Basic_Salary :";
//         cin>>emp[i].sal.basic;

//         cout<<"Enter HRA_Salary :";
//         cin>>emp[i].sal.hra;
//     }
//     for(int i = 0; i<totalEmp; i++){
//         cout<<"Employee :" <<(i+1);
//         cout<<"Employee_Name :" <<emp[i].name<<endl;
//         cout<<"Employee_No :" <<emp[i].empNo<<endl;
//         cout<<"Employee_Designation :" <<emp[i].designation<<endl;
//         cout<<"Employee_Basic_salary :" <<emp[i].sal.basic<<endl;
//         cout<<"Employee_HRA_Salary :" <<emp[i].sal.hra<<endl;
//         cout<<"Employee_Total_Salary :" <<(emp[i].sal.basic + emp[i].sal.hra)<<endl;
//     }
//     return 0;
// }





// // To implement the addition of two univariate polynomials using an array of structures.
// #include <iostream>
// using namespace std;

// // Structure to represent a single polynomial term
// struct Term {
//     int coeff;   // Coefficient of the term
//     int expo;    // Exponent (power) of the term
// };

// // Function to add two polynomials represented as arrays of structures
// int addPolynomials(Term p1[], int n1, Term p2[], int n2, Term p3[]) {
//     int i = 0, j = 0, k = 0;

//     // Traverse both arrays
//     while (i < n1 && j < n2) {
//         if (p1[i].expo == p2[j].expo) {
//             p3[k].expo = p1[i].expo;
//             p3[k].coeff = p1[i].coeff + p2[j].coeff;
//             i++; j++; k++;
//         }
//         else if (p1[i].expo > p2[j].expo) {
//             p3[k] = p1[i];
//             i++; k++;
//         }
//         else {
//             p3[k] = p2[j];
//             j++; k++;
//         }
//     }

//     // Copy remaining terms of first polynomial, if any
//     while (i < n1) {
//         p3[k++] = p1[i++];
//     }

//     // Copy remaining terms of second polynomial, if any
//     while (j < n2) {
//         p3[k++] = p2[j++];
//     }

//     return k; // Return total number of terms in resultant polynomial
// }

// // Function to display a polynomial
// void displayPolynomial(Term p[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << p[i].coeff << "x^" << p[i].expo;
//         if (i != n - 1) cout << " + ";
//     }
//     cout << endl;
// }

// int main() {
//     // First polynomial: 3x^2 + 5x^1 + 2
//     Term p1[3] = {{3, 2}, {5, 1}, {2, 0}};
//     int n1 = 3;

//     // Second polynomial: 4x^2 + 2x^0
//     Term p2[2] = {{4, 2}, {2, 0}};
//     int n2 = 2;

//     Term p3[10]; // Resultant polynomial array

//     int n3 = addPolynomials(p1, n1, p2, n2, p3);

//     cout << "First Polynomial: ";
//     displayPolynomial(p1, n1);

//     cout << "Second Polynomial: ";
//     displayPolynomial(p2, n2);

//     cout << "Sum of Polynomials: ";
//     displayPolynomial(p3, n3);

//     return 0;
// }








#include <iostream>
using namespace std;

// 1. Define the structure for a single term
struct Term {
    int coeff; // The number (e.g., 5 in 5x^2)
    int expo;  // The power (e.g., 2 in 5x^2)
};

int main() {
    // 2. Define the two input polynomials (Max 10 terms for simplicity)

    cout<<"poly 1: 5x^2 + 4x^1 + 2x^0"<<endl;
    Term poly1[3] = {{5, 2}, {4, 1}, {2, 0}};
    int size1 = 3;

    cout<<"poly 2: 3x^2 + 1x^0"<<endl;
    Term poly2[2] = {{3, 2}, {1, 0}};
    int size2 = 2;

    // 3. Array to store the result
    Term result[10];
    int size3 = 0;

    // 4. Add all terms from the first polynomial to the result
    for (int i = 0; i < size1; i++) {
        result[size3] = poly1[i];
        size3++;
    }

    // 5. Merge terms from the second polynomial
    for (int j = 0; j < size2; j++) {
        bool found = false;

        // Check if this exponent already exists in the result
        for (int k = 0; k < size3; k++) {
            if (poly2[j].expo == result[k].expo) {
                result[k].coeff += poly2[j].coeff; // Add coefficients
                found = true;
                break;
            }
        }

        // If the exponent is new, add it as a new term at the end
        if (!found) {
            result[size3] = poly2[j];
            size3++;
        }
    }

    // 6. Print the result
    cout << "Result: ";
    for (int i = 0; i < size3; i++) {
        cout << result[i].coeff << "x^" << result[i].expo;
        if (i < size3 - 1) {
            cout << " + ";
        }
    }
    cout << endl;

    return 0;
}
