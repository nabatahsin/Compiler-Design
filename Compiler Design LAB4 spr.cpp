#include <iostream>
using namespace std;

int calculateFactorial(int n) {
   {
    if (n == 0)
        return 1;
    int i = n, factorial = 1;
    while (n / i != n) {
        factorial = factorial * i;
        i--;
    }
    return factorial;
}
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial cannot be calculated for negative numbers." <<endl;
    } else {
        int result = calculateFactorial(number);
        cout << "Factorial is: " << result << endl;
    }

    return 0;
}
