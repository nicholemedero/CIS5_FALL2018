/*
 * Write a program that determines whether a meeting room is in violation of fire
 * law regulations regarding the maximum room capacity. The program will read in
 * the maximum room capacity and the number of people attending the meeting. 
 * If the number of people is less than or equal to the maximum room capacity, 
 * the program announces that it is legal to hold the meeting and tells how 
 * many additional people may legally attend. If he number of people exceeds the
 * the maximum room capacity, the program announces that the meeting cannot be
 * held as planned de to fire regulations and tells how many people must be
 * excluded in order to meet the fire regulations.
 * 
 */


#include <iostream>

using namespace std;


int main( ) {

    int maxRoomCap, peopleAttending, peopleOver, peopleUnder;
    
    cout << "Press return after entering a number.\n";
    cout << "Enter the maximum room capacity:\n";
    cin >> maxRoomCap;
    cout << "Enter the number of people attending:\n";
    cin >> peopleAttending;
    
    if (peopleAttending <= maxRoomCap) {
        peopleUnder = maxRoomCap - peopleAttending;
        cout << "You may hold a meeting in this room. You may have ";
        cout << peopleUnder;
        cout << " additional people and maintain fire law regulations.";
    }
    
    if (peopleAttending > maxRoomCap) {
        peopleOver = peopleAttending - maxRoomCap;
        cout << "You may not hold a meeting in this room. You must"
                " remove ";
        cout << peopleOver;
        cout << " people to meet fire law regulations.";
        return 0;
    }
   
}

