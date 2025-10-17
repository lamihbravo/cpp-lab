#include <iostream>
using namespace std;

class Matrix {
    int mat[10][10];
    int rows, cols;

public:
    void input() {
        cout << "Enter number of rows: ";
        cin >> rows;
        cout << "Enter number of columns: ";
        cin >> cols;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix operator+(const Matrix& m) {
        Matrix temp;
        if (rows != m.rows || cols != m.cols) {
            cout << "Matrix dimensions do not match!\n";
            return temp;
        }

        temp.rows = rows;
        temp.cols = cols;

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];

        return temp;
    }
};

int main() {
    Matrix m1, m2, m3;

    m1.input();
    m2.input();

    m3 = m1 + m2;

    cout << "Sum of matrices:\n";
    m3.display();

    return 0;
}
