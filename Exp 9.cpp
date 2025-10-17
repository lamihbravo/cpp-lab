#include <iostream>
using namespace std;

class Matrix {
    int arr[10][10];
    int r, c;

public:
    void getData() {
        cout << "Enter number of rows: ";
        cin >> r;
        cout << "Enter number of columns: ";
        cin >> c;

        cout << "Enter elements:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> arr[i][j];
            }
        }
    }

    Matrix add(Matrix m) {
        Matrix result;
        if (r != m.r || c != m.c) {
            cout << "Addition not possible. Sizes are different.\n";
            result.r = result.c = 0;
            return result;
        }

        result.r = r;
        result.c = c;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                result.arr[i][j] = arr[i][j] + m.arr[i][j];
            }
        }
        return result;
    }

    void show() {
        cout << " SUm of two metrixMatrix:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    Matrix A, B, Sum;

    cout << "First Matrix\n";
    A.getData();

    cout << " Second Matrix\n";
    B.getData();

    Sum = A.add(B);
    Sum.show();

}
