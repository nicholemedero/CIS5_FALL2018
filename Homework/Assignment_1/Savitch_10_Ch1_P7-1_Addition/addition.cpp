#include <iostream>
using namespace std;

int main( ) 
{
    int integer1, integer2, totalSum;
    cout << "Press return after entering a number.\n";
    cout << "Enter an integer:\n";
    cin >> integer1;
    cout << "Enter another integer:\n";
    cin >> integer2;
    totalSum = integer1 + integer2;
    cout << "If you have\n";
    cout << integer1;
    cout << " in addition to\n";
    cout << integer2;
    cout << ", then the sum of those integers is \n";
    cout << totalSum;
    cout << "\nThis is the end of the program.\n";
    return 0;
}

