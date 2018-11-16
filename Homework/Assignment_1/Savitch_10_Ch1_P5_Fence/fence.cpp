#include <iostream>
using namespace std;

int main( ) 
{
    int width, height, totalLength;
    cout << "Press return after entering a number.\n";
    cout << "Enter the width:\n";
    cin >> width;
    cout << "Enter the height:\n";
    cin >> height;
    totalLength = 2 * (width + height);
    cout << "If you have ";
    cout << width;
    cout << " feet in width\n";
    cout << "and ";
    cout << height;
    cout << " feet in height, then\n";
    cout << "your fence is ";
    cout << totalLength;
    cout << " feet in total.\n";
    return 0;
}

