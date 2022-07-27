#include <iostream>
using namespace std;

int main() {

    int a;
    int b;
    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Enter Number A: ";
    cin >> a;

    cout << "Enter Number B: ";
    cin >> b;

    cout << "Number A =  " << a << endl;
    cout << "Number B = " << b << endl;
    return 0;
}