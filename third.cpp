#include <iostream>

using namespace std;

int main(){
    int num1, num2, sum;

    cout << "Enter the first integer number: ";
    cin >> num1;

    cout << "Enter the second integer number: ";
    cin >> num2;

    sum = num1 * num2;
    cout << "Product: " << num1 << "*" << num2 << " = " << sum;

    return 0;
}