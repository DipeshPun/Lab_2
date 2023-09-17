#include <iostream>
using namespace std;
// Function to scan values of matrices
void scanMatrix(char matName, int** mat, int rows, int columns) {
    cout << "Enter data for matrix " << matName << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> mat[i][j];
        }
    }
}

// Function to print data in matrix form
void printMatrix(char matName, int** mat, int rows, int columns) {
    cout << "\nMatrix " << matName << ":\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << mat[i][j] << "\t";
        }
        cout <<endl;
    }
}

int main() {
    int rows, columns;
    cout << "Enter the rows for the matrix: ";
    cin >> rows;
    cout << "Enter the columns for the matrix: ";
    cin >> columns;

    // Declare and allocate memory for matrices A and B
    int** A = new int*[rows];
    int** B = new int*[rows];
    for (int i = 0; i < rows; i++) {
        A[i] = new int[columns];
        B[i] = new int[columns];
    }

    // Call functions to scan matrices A and B
    scanMatrix('A', A, rows, columns);
    scanMatrix('B', B, rows, columns);

    // Display data in matrix form
    printMatrix('A', A, rows, columns);
    printMatrix('B', B, rows, columns);

    // Display the join of matrices A and B (logical OR)
    cout << "\nJoin of matrices A and B:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << (A[i][j] || B[i][j]) << "\t";
        }
        cout <<endl;
    }

    return 0;
}
