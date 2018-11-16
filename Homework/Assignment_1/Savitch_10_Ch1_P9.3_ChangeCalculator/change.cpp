#include <iostream>
using namespace std;

int main( ) 
{
    int numberOfQuarters, numberOfNickels, numberOfDimes, totalChange;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of quarters:\n";
    cin >> numberOfQuarters;
    cout << "Enter the number nickels:\n";
    cin >> numberOfNickels;
    cout << "Enter the number of dimes:\n";
    cin >> numberOfDimes;
    totalChange = (numberOfQuarters * 25) + (numberOfNickels * 5) + (numberOfDimes * 10);
    cout << "If you have ";
    cout << numberOfQuarters;
    cout << " quarters,";
    cout << numberOfNickels;
    cout << " nickels, and ";
    cout << numberOfDimes;
    cout << " dimes, then\n";
    cout << "you have ";
    cout << totalChange;
    cout << " cents.\n";
    return 0;
}

