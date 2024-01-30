#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;

    // Input dimensions of the first matrix
    cout << "Enter the number of rows for matrix 1: ";
    cin >> row1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> col1;

    // Input dimensions of the second matrix
    cout << "Enter the number of rows for matrix 2: ";
    cin >> row2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> col2;

    // Check if matrix multiplication is possible
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible due to incompatible dimensions." << endl;
        return 1;
    }

    // Create the matrices and result matrix
    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col2];

    // Input elements of matrix 1
    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements of matrix 2
    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the result matrix with zeros
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}