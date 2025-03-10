// write a program to rotate the matrix by 90 degrees clockwise.
#include <iostream>
using namespace std;

void rotate90degrees(int matrix[][100], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {  // Fix: `j<i` instead of `j<i+1`
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for (int k = 0; k < n; k++) {
        int i = 0, j = n - 1;
        while (i < j) {  // Fix: `i < j` instead of `i <= j`
            int temp = matrix[k][i];
            matrix[k][i] = matrix[k][j];
            matrix[k][j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    int m;
    cout << "Enter the number of rows/columns: ";
    cin >> m;

    int matrix[100][100];  // Fixed-size array

    cout << "Enter your matrix which you have to rotate 90 degrees:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    rotate90degrees(matrix, m);  // Fixed function call

    cout << "Matrix after 90-degree rotation:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}