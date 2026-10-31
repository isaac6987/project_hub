#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Insert number(1 to stop): ";
    cin >> number;

    while (number !=1) {
        cout << "You entered: " << number << endl;

    cout << "Insert number(1 to stop): ";
    cin >> number;
    }

    cout << "Program stopped." << endl;
    
    return 0;
}
