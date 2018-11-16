#include <iostream>
using namespace std;

int main( ) 
{
    int timeOfFall, totalDistance;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of seconds an object may be falling:\n";
    cin >> timeOfFall;
    totalDistance = timeOfFall * 32;
    cout << "If an object falls for ";
    cout << timeOfFall;
    cout << " seconds,\n";
    cout << "it will fall a total of ";
    cout << totalDistance;
    cout <<  " feet.\n";
    return 0;
}

