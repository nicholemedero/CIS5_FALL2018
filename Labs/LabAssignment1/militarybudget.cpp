#include <iostream>
using namespace std;

int main( )
{
    float milBdgt, fedBdgt, mlPrcnt;
    milBdgt = 7.0e11f;
    fedBdgt = 4.1e12f;
    cout << "The military budget represents 700 billion USD of the total 4.1 trillion USD federal budget. \n";
    mlPrcnt = (milBdgt / fedBdgt) * 100;
    cout << "In other words, it takes up ";
    cout << mlPrcnt;
    cout << "% of the federal budget.";
    return 0;
}

