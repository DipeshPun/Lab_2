3. Write a program to implement Boolean matrix operations meet.

#include <iostream>
using namespace std;

// Function to perform Boolean matrix meet (logical AND)
void booleanMeet(int** matrixA, int** matrixB, int** result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] && matrixB[i][j];
        }
    }
}

// Function to display a Boolean matrix
void displayMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrices: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrices: ";
    cin >> cols;

    // Allocate memory for matrices
    int** matrixA = new int*[rows];
    int** matrixB = new int*[rows];
    int** meetResult = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrixA[i] = new int[cols];
        matrixB[i] = new int[cols];
        meetResult[i] = new int[cols];
    }

    cout << "Enter elements for matrix 1:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter elements for matrix 2:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrixB[i][j];
        }
    }

    booleanMeet(matrixA, matrixB, meetResult, rows, cols);

    cout << "\nMeet of matrices:\n";
    displayMatrix(meetResult, rows, cols);

    return 0;
}
