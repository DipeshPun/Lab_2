#include <iostream>
#include <string>
using namespace std;

// Function to add two binary numbers
string binaryAddition(string a, string b) {
    int carry = 0;
    string result = "";

    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int bitA = (i >= 0) ? a[i] - '0' : 0;
        int bitB = (j >= 0) ? b[j] - '0' : 0;

        int sum = bitA + bitB + carry;
        result = to_string(sum % 2) + result;
        carry = sum / 2;

        i--;
        j--;
    }

    return result;
}

// Function to multiply two binary numbers
string binaryMultiplication(string a, string b) {
    string result = "0";

    for (int i = b.size() - 1; i >= 0; i--) {
        if (b[i] == '1') {
            result = binaryAddition(result, a);
        }
        a += '0'; // Left shift 'a'
    }

    return result;
}

int main() {
    string binary1, binary2;

    cout << "Enter first binary number: ";
    cin >> binary1;
    cout << "Enter second binary number: ";
    cin >> binary2;

    string sum = binaryAddition(binary1, binary2);
    string product = binaryMultiplication(binary1, binary2);

    cout << "Binary Addition: " << sum << endl;
    cout << "Binary Multiplication: " << product << endl;

    return 0;
}
