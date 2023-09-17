#include <iostream>
using namespace std;
// Function to print prime factors of a number
void primeFactors(int num) {
    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    if (num > 2) {
        cout << num << " ";
    }
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Prime factors of " << number << " are: ";
    primeFactors(number);

    cout <<endl;

    return 0;
}
