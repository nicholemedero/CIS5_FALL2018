/*
 * Write an astrology program. The user types in a birthday, and the program
 * responds with the sign and horoscope for that birthday. The month may be
 * entered as a number from 1 to 12. Then enhance your program so that if the
 * birthday is only 1 or 2 days away from an adjacent sign, the program
 * announces that the birthday is on a cusp and also outputs the horoscope for
 * the nearest adjacent sign. This program will have a long multiway branch.
 * Make up a horoscope for each sign. Your program should include a loop that
 * lets the user repeat this calculation until the user says they are done.
 */

/* 
 * File:   main.cpp
 * Author: Nichole Medero
 * Course: CIS-5 Programming Logic with C++
 * Created on September 22, 2018, 10:00 PM
 */

/*
 * PSEUDOCODE:
 * 1. Initialize months.
 * 2. Write a horoscope for each astrological sign.
 * 3. If birthday is within certain range, output sign and horoscope.
 * 4. If that birthday is on a cusp, display cusp horoscope also.
 * 5. Repeat for every astrolological sign.
 * 6. Loop program to repeat as long as user answers Y/y
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

    int birthMonth, birthDay;
    int jan(1), feb(2), mar(3), apr(4), may(5), jun(6), jul(7), aug(8),
            sep(9), oct(10), nov(11), dec(12);
    char choice;

    do {
        cout << "This program takes your birth month and birthday and calculates"
                << "your astrological sun sign.\n";
        cout << "Press return after entering each number.\n";
        cout << "Enter your birth month represented as an integer (e.g., jan = 1,"
                << " feb = 2, mar = 3, etc): ";
        cin >> birthMonth;
        cout << "Enter the date you were born (4, 15, 23): ";
        cin >> birthDay;



        string cap("Good things will happen!");
        string aqu("Watch your back!");
        string pis("Say 'yes' to new things!");
        string ari("Avoid the color blue!");
        string tau("Be open to new ideas");
        string gem("Go out with friends!");
        string can("Control your emotions!");
        string leo("Practice mindfulness!");
        string vir("Do not be afraid to let go!");
        string lib("Practice communicating with others!");
        string sco("Try relaxing!");
        string sag("Spend time outside!");

        if ((birthMonth == 1 && birthDay <= 19) || (birthMonth == 12 && birthDay >= 2)) {
            cout << "Your astrological sun sign is a Capricorn!\n";
            cout << "Here is your horoscope: " << cap << endl;
            if ((birthMonth == 1 && birthDay == 19) || (birthMonth == 1 && birthDay == 20)) {
                cout << "You were born on a cusp! Your cusp sign is an Aquarius!\n";
                cout << "Here is your cusp horoscope: " << aqu << endl;
            }
        }
        if ((birthMonth == 1 && birthDay >= 20) || (birthMonth == 2 && birthDay <= 18)) {
            cout << "Your astrological sun sign is an Aquarius!\n";
            cout << "Here is your horoscope: " << aqu << endl;
            if ((birthMonth == 2 && birthDay == 18) || (birthMonth == 2 && birthDay == 19)) {
                cout << "You were born on a cusp! Your cusp sign is a Pisces!\n";
                cout << "Here is your cusp horoscope: " << pis << endl;
            }
        }
        if ((birthMonth == 2 && birthDay >= 19) || (birthMonth == 3 && birthDay <= 20)) {
            cout << "Your astrological sun sign is a Pisces!\n";
            cout << "Here is your horoscope: " << pis << endl;
            if ((birthMonth == 3 && birthDay == 21) || (birthMonth == 3 && birthDay == 22)) {
                cout << "You were born on a cusp! Your cusp sign is a Aries!\n";
                cout << "Here is your cusp horoscope: " << ari << endl;
            }
        }

        if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 4 && birthDay <= 19)) {
            cout << "Your astrological sun sign is an Aries!\n";
            cout << "Here is your horoscope: " << ari << endl;
            if ((birthMonth == 4 && birthDay == 19) || (birthMonth == 4 && birthDay == 20)) {
                cout << "You were born on a cusp! Your cusp sign is an Taurus!\n";
                cout << "Here is your cusp horoscope: " << tau << endl;
            }
        }

        if ((birthMonth == 4 && birthDay >= 20) || (birthMonth == 5 && birthDay <= 20)) {
            cout << "Your astrological sun sign is a Taurus!\n";
            cout << "Here is your horoscope: " << tau << endl;
            if ((birthMonth == 5 && birthDay == 20) || (birthMonth == 5 && birthDay == 21)) {
                cout << "You were born on a cusp! Your cusp sign is an Gemini!\n";
                cout << "Here is your cusp horoscope: " << gem << endl;
            }
        }

        if ((birthMonth == 5 && birthDay >= 21) || (birthMonth == 6 && birthDay <= 21)) {
            cout << "Your astrological sun sign is a Gemini!\n";
            cout << "Here is your horoscope: " << gem << endl;
            {
                if ((birthMonth == 6 && birthDay == 20) || (birthMonth == 6 && birthDay == 21))
                    cout << "You were born on a cusp! Your cusp sign is an Cancer!\n";
                cout << "Here is your cusp horoscope: " << can << endl;
            }
        }

        if ((birthMonth == 6 && birthDay >= 22) || (birthMonth == 7 && birthDay <= 22)) {
            cout << "Your astrological sun sign is a Cancer!\n";
            cout << "Here is your horoscope: " << can << endl;
            {
                if ((birthMonth == 7 && birthDay == 22) || (birthMonth == 7 && birthDay == 23))
                    cout << "You were born on a cusp! Your cusp sign is an Leo!\n";
                cout << "Here is your cusp horoscope: " << leo << endl;
            }
        }

        if ((birthMonth == 7 && birthDay >= 23) || (birthMonth == 8 && birthDay <= 22)) {
            cout << "Your astrological sun sign is a Leo!\n";
            cout << "Here is your horoscope: " << leo << endl;
            {
                if ((birthMonth == 8 && birthDay == 22) || (birthMonth == 8 && birthDay == 23))
                    cout << "You were born on a cusp! Your cusp sign is an Virgo!\n";
                cout << "Here is your cusp horoscope: " << vir << endl;
            }
        }

        if ((birthMonth == 8 && birthDay >= 23) || (birthMonth == 9 && birthDay <= 22)) {
            cout << "Your astrological sun sign is a Virgo!\n";
            cout << "Here is your horoscope: " << vir << endl;
            {
                if ((birthMonth == 9 && birthDay == 22) || (birthMonth == 9 && birthDay == 23))
                    cout << "You were born on a cusp! Your cusp sign is a Libra!\n";
                cout << "Here is your cusp horoscope: " << lib << endl;
            }
        }

        if ((birthMonth == 9 && birthDay >= 23) || (birthMonth == 10 && birthDay <= 22)) {
            cout << "Your astrological sun sign is a Libra!\n";
            cout << "Here is your horoscope: " << lib << endl;
            {
                if ((birthMonth == 10 && birthDay == 22) || (birthMonth == 10 && birthDay == 23))
                    cout << "You were born on a cusp! Your cusp sign is a Scorpio!\n";
                cout << "Here is your cusp horoscope: " << sco << endl;
            }
        }

        if ((birthMonth == 10 && birthDay >= 23) || (birthMonth == 11 && birthDay <= 21)) {
            cout << "Your astrological sun sign is a Scorpio!\n";
            cout << "Here is your horoscope: " << sco << endl;
            {
                if ((birthMonth == 11 && birthDay == 21) || (birthMonth == 11 && birthDay == 22))
                    cout << "You were born on a cusp! Your cusp sign is a Sagittarius!\n";
                cout << "Here is your cusp horoscope: " << sag << endl;
            }
        }

        if ((birthMonth == 11 && birthDay >= 22) || (birthMonth == 12 && birthDay <= 21)) {
            cout << "Your astrological sun sign is a Sagittarius!\n";
            cout << "Here is your horoscope: " << sag << endl;
            {
                if (birthMonth == 12 && birthDay == 19 || birthMonth == 12 && birthDay == 20)
                    cout << "You were born on a cusp! Your cusp sign is a Capricorn!\n";
                cout << "Here is your cusp horoscope: " << cap << endl;
            }
        }
        cout << "Would you like to repeat the program (Y/N)?\n";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}

