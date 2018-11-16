

/* 
 * File:   truthtable.cpp
 * Author: Nichole Medero
 * Purpose: Truth Table
 * Created on October 4, 2018, 10:23 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    bool x, y;

    //truth table
    cout << "X Y !X !Y X&&Y X||Y X^Y x^Y^Y x^Y^X !(X&&Y) "
            << "!X||!Y !X(||Y) !X&&!Y" << endl;

    //output the first row
    x = true;
    y = true;
    cout << (x ? 'T' : 'F') << " "
            << (y ? 'T' : 'F') << "  "
            << (!x ? 'T' : 'F') << "  "
            << (!y ? 'T' : 'F') << "  "
            << (x && y ? 'T' : 'F') << "    "
            << (x || y ? 'T' : 'F') << "    "
            << (x^y ? 'T' : 'F') << "    "
            << (x^y^y ? 'T' : 'F') << "     "
            << (x^y^x ? 'T' : 'F') << "      "
            << (!(x && y)?'T' : 'F') << "       "
            << (!x||!y?'T' : 'F') << "       "
            << (!(x||y)?'T' : 'F') << "      "
            << (!x&&!y?'T' : 'F');
    cout << endl;

    //output the second row
    x = true;
    y = false;
    cout << (x ? 'T' : 'F') << " "
            << (y ? 'T' : 'F') << "  "
            << (!x ? 'T' : 'F') << "  "
            << (!y ? 'T' : 'F') << "  "
            << (x && y ? 'T' : 'F') << "    "
            << (x || y ? 'T' : 'F') << "    "
            << (x^y ? 'T' : 'F') << "    "
            << (x^y^y ? 'T' : 'F') << "     "
            << (x^y^x ? 'T' : 'F') << "      "
            << (!(x && y)?'T' : 'F') << "       "
            << (!x||!y?'T' : 'F') << "       "
            << (!(x||y)?'T' : 'F') << "      "
            << (!x&&!y?'T' : 'F');
    cout << endl;


    //output the third row
    x = false;
    y = true;
    cout << (x ? 'T' : 'F') << " "
            << (y ? 'T' : 'F') << "  "
            << (!x ? 'T' : 'F') << "  "
            << (!y ? 'T' : 'F') << "  "
            << (x && y ? 'T' : 'F') << "    "
            << (x || y ? 'T' : 'F') << "    "
            << (x^y ? 'T' : 'F') << "    "
            << (x^y^y ? 'T' : 'F') << "     "
            << (x^y^x ? 'T' : 'F') << "      "
            << (!(x && y)?'T' : 'F') << "       "
            << (!x||!y?'T' : 'F') << "       "
            << (!(x||y)?'T' : 'F') << "      "
            << (!x&&!y?'T' : 'F');
    cout << endl;


    //output the fourth row
    x = false;
    y = false;
    cout << (x ? 'T' : 'F') << " "
            << (y ? 'T' : 'F') << "  "
            << (!x ? 'T' : 'F') << "  "
            << (!y ? 'T' : 'F') << "  "
            << (x && y ? 'T' : 'F') << "    "
            << (x || y ? 'T' : 'F') << "    "
            << (x^y ? 'T' : 'F') << "    "
            << (x^y^y ? 'T' : 'F') << "     "
            << (x^y^x ? 'T' : 'F') << "      "
            << (!(x && y)?'T' : 'F') << "       "
            << (!x||!y?'T' : 'F') << "       "
            << (!(x||y)?'T' : 'F') << "      "
            << (!x&&!y?'T' : 'F');
    cout << endl;


    return 0;
}

