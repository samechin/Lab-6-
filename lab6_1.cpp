#include <iostream>
using namespace std;

int main() {
    int num;
    int evenCount = 0, oddCount = 0;
    while (true) {
        cout << "Enter an integer: ";
        cin >> num;

        if (num == 0) {
            break;
        }
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "#Even numbers = " << evenCount << endl;
    cout << "#Odd numbers = " << oddCount << endl;

    return 0;
}