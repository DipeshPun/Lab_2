#include <iostream>
using namespace std;
int euclidean(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void extendedEuclidean(int a, int b, int& gcd, int& x, int& y) {
    if (b == 0) {
        gcd = a;
        x = 1;
        y = 0;
    } else {
        int x1, y1;
        extendedEuclidean(b, a % b, gcd, x1, y1);
        x = y1;
        y = x1 - (a / b) * y1;
    }
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int gcd, x, y;
    gcd = euclidean(a, b);
    extendedEuclidean(a, b, gcd, x, y);

    cout << "GCD(" << a << ", " << b << ") = " << gcd <<endl;
    cout <<"coefficients: x = " << x << ", y = " << y <<endl;

    return 0;
}
