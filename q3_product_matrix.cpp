3. Write a program to implement Boolean matrix operations product.

#include <iostream>
using namespace std;
int main() {
    int rows1, columns1; // variables to store the number of rows and columns of matrix A
    cout << "For matrix A:" <<endl;
    cout << "Enter the rows: ";
    cin >> rows1;
    cout << "Enter the columns: ";
    cin >> columns1;

    int rows2, columns2;
    cout << "For matrix B:" <<endl;
    cout << "Enter the rows: ";
    cin >> rows2;
    cout << "Enter the columns: ";
    cin >> columns2;

    int A[rows1][columns1], B[rows2][columns2], C[rows1][columns2];

    cout << "\nEnter data for boolean matrix A:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "\nEnter data for boolean matrix B:" <<endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    cout << "\nMatrix A:" <<endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns1; j++) {
            cout << A[i][j] << "\t";
        }
        cout <<endl;
    }

    cout << "Matrix B:" <<endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < columns2; j++) {
            cout << B[i][j] << "\t";
        }
        cout <<endl;
    }

    cout << "\nBoolean product of matrices A and B:" <<endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < rows2; k++) {
                C[i][j] = C[i][j] || (A[i][k] && B[k][j]);
            }
            cout << C[i][j] << "\t";
        }
        cout <<endl;
    }

    return 0;
}
