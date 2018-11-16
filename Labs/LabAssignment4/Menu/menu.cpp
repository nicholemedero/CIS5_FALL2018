
/* 
 * File:   menu.cpp
 * Author: Nichole Medero
 * Purpose: Menu Template
 * Created on October 4, 2018, 9:42 AM
 */

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    
    
    char choice; //option 0 - 9, input as characters and not a numeric value
    
    cout<<"This program illustrates a menu."<<endl;
    cout<<"Choose the problem you wish to solve."<<endl;
    cout<<"0 --> Gaddis 9thEd Chapter4 Problem 1 Min/Max"<<endl;
    cout<<"1 Gaddis 9thEd Chapter4 Problem2 Roman Numeral Conversion"<<endl;
    cout<<"2 Gaddis 9thEd Chapter4 Problem4 Area of a Rectangle"<<endl;
    cout<<"3 Gaddis 9thEd Chapter4_Problem8 Color Mixer"<<endl;
    cout<<"4 Savitch 10thEd Chapter3 Problem1 Long Distance Call Calculation"<<endl;
    cout<<"5 Savitch 10thEd Chapter3 Problem2 Paper Rock Scissors"<<endl;
    cout<<"6 Savitch 10thEd Chapter3 Problem 3 Interest Calculation"<<endl;
    cout<<"7 Savitch 10thEd Chapter3 Problem 4a Astrology"<<endl;
    cout<<"8 Savitch 10thEd Chapter3 Problem 4b Astrology"<<endl;
    cout<<"9 Savitch 10thEd Chapter3 Problem 7 Temperature Conversion"<<endl;
    cin>>choice;
    
    switch(choice) {
        case '0':
            int first; //first number put in by user
            int second; //second number put in by user

            cout << "This program asks you to select two numbers. It will output which"
                    "number is greater and which number is larger." << endl;
            cout << "Please enter the first integer of your choice: ";
            cin>>first; //user's first choice
            cout << "Please enter the second integer of your choice: ";
            cin>>second; //user's second choice
            cout << "You have selected " << first << " and " << second << "." << endl;

            if (first > second) {
                cout << first << " is greater than " << second << "." << endl;
            }
            if (first < second) {
                cout << second << " is greater than " << first << "." << endl;
            }
            if (first == second) {
                cout << "You have selected 2 equal integers." << endl;
            }
            break;
            
        case '1':
            //Declare all Variables Here
            char num; //user's number selection

            //Input instructions here <<
            cout<<"This program converts numbers into Roman numerals."<<endl;
            cout<<"Select an single integer within the range of 1 to 10:";
            cin>>num;

            //Process/Calculation here l.
            switch(num) {
                case'1':
                    cout<<"You have selected 1, its Roman numeral equivalent is I."<<endl;
                    break;

                case'2':
                    cout<<"You have selected 2, its Roman numeral equivalent is II."<<endl;
                    break;

                case'3':
                    cout<<"You have selected 3, its Roman numeral equivalent is III."<<endl;
                    break;

                case'4':
                    cout<<"You have selected 4, its Roman numeral equivalent is IV."<<endl;
                    break;

                case'5':
                    cout<<"You have selected 5, its Roman numeral equivalent is V."<<endl;
                    break;

                case'6':
                    cout<<"You have selected 6, its Roman numeral equivalent is VI."<<endl;
                    break;

                case'7':
                    cout<<"You have selected 7, its Roman numeral equivalent is VII."<<endl;
                    break;

                case'8':
                    cout<<"You have selected 8, its Roman numeral equivalent is VIII."<<endl;
                    break;

                case'9':
                    cout<<"You have selected 9, its Roman numeral equivalent is IX."<<endl;
                    break;

                case'10':
                    cout<<"You have selected 10, its Roman numeral equivalent is X."<<endl;
                    break;

                default:
                    cout<<"Having trouble following instructions?"<<endl;
                    break;
            }
            break;
            
        case '2':
            //Declare all Variables Here
            int length1, length2, width1, width2, area1, area2;

            //Input Instructions here
            cout<<"This program calculates the area of 2 rectangles and displays"
                <<"which rectangle is larger."<<endl;
            cout<<"Enter the length of the first rectangle: ";
            cin>>length1;
            cout<<"Enter the width of the first rectangle: ";
            cin>>width1;
            cout<<"Enter the length of the second rectangle: ";
            cin>>length2;
            cout<<"Enter the width of the second rectangle: ";
            cin>>width2;

            //Reading back user input
            cout<<"You have entered the first rectangle's length as " <<length1<<
                    " and width as " <<width1<< "." <<endl;
            cout<<"You have entered the second rectangle's length as " <<length2<<
                    " and width as " <<width2<< "." <<endl;

            //Process/Calculations here
            area1 = length1 * width1;
            area2 = length2 * width2;

            //Output
            cout<<"The first rectangle's area is: " <<area1<<endl;
            cout<<"The second rectangle's area is: " <<area2<<endl;

            if (area1 > area2) { //IF REC1 IS BIGGER
                cout<<area1 << " is larger than " << area2 << "." << endl;
                cout<<"Rectangle 1 is bigger than rectangle 2."<<endl;
            }
            if (area1 < area2) { //IF REC2 IS BIGGER
                cout<<area2 << " is larger than " << area1 << "." << endl;
                cout<<"Rectangle 2 is bigger than rectangle 1."<<endl;
            }
            if (area1 == area2) { //IF BOTH REC AREAS ARE ==
                cout<<"Both rectangle's areas are the same size." << endl;
            }
            break;
            
        case '3':
            //Declare all Variables Here

            string color1, color2;

            //Input Instructions
            cout << "This program adds two primary colors and outputs the proper "
                    "secondary color." << endl;
            cout << "Enter 1 of the 3 primary colors ('red', 'blue' or 'yellow'): ";
            cin>>color1;
            cout << "Enter another primary color ('red', 'blue' or 'yellow'): ";
            cin>>color2;

            //Read back user input
            cout << "You have entered " << color1 << " and " << color2 << "." << endl;

            //Process/Calculation & Output
            if ((strcmp(color1.c_str(), "red") == 0 && strcmp(color2.c_str(), "blue") == 0)
                    || (strcmp(color1.c_str(), "blue") == 0 && strcmp(color2.c_str(), "red") == 0)) {
                cout << "Red and blue make purple." << endl;
            }

            if ((strcmp(color1.c_str(), "red") == 0 && strcmp(color2.c_str(), "yellow") == 0)
                    || (strcmp(color1.c_str(), "yellow") == 0 && strcmp(color2.c_str(), "red") == 0)) {
                cout << "Red and yellow make orange." << endl;
            }

            if ((strcmp(color1.c_str(), "blue") == 0 && strcmp(color2.c_str(), "yellow") == 0)
                    || (strcmp(color1.c_str(), "yellow") == 0 && strcmp(color2.c_str(), "blue") == 0)) {
                cout << "Blue and yellow make green." << endl;
            }

            if ((strcmp(color1.c_str(), "red") != 0 || strcmp(color1.c_str(), "yellow") != 0) || strcmp(color1.c_str(), "blue") != 0) {
                cout << "One or more of your inputs is invalid. Reread the instructions." << endl;
            }

            if ((strcmp(color2.c_str(), 'red') != 0 || strcmp(color2.c_str(), "yellow") != 0) || strcmp(color2.c_str(), "blue") != 0) {
                    cout << "One or more of your inputs is invalid. Reread the instructions." << endl;
                }
            break;
            
        case '4':
            const char *day[] = {"Mo" "Tu", "We", "Th", "Fr", "Sa", "Su"};
            float time, totalCost; 
            float rateA = 0.40;
            float rateB = 0.25;
            float rateC = 0.15;
            int min;
            char choice;

            do
            {
                cout << "This program calculates the cost of long distance calls.\n";
                cout << "Press return after inputting all the data.\n";
                cout << "Enter the first two letters of the day the call was made:\n";
                cin >> day;
                cout << "Enter the time in 24 hour notation (1:00PM = 1300):\n";
                cin >> time;
                cout << "Enter the length of the call rounded to the neared minute:\n";
                cin >> min;

                if ((day == "Mo" && time >= 800) || (day == "Mo" && time <= 1800)) { 
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "MO" && time >= 800) || (day == "MO" && time <= 1800)) { 
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "mo" && time >= 800) || (day == "mo" && time <= 1800)) { 
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Tu" && time >= 800) || (day == "Tu" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                 if ((day == "TU" && time >= 800) || (day == "TU" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                 if ((day == "tu" && time >= 800) || (day == "tu" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                 }

                if ((day == "We" && time >= 800) || (day == "We" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "WE" && time >= 800) || (day == "WE" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "we" && time >= 800) || (day == "we" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Th" && time >= 800) || (day == "Th" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "TH" && time >= 800) || (day == "TH" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "th" && time >= 800) || (day == "th" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Fr" && time >= 800) || (day == "Fr" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "FR" && time >= 800) || (day == "FR" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "fr" && time >= 800) || (day == "fr" && time <= 1800)) {
                    totalCost = min * rateA;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Mo" && time < 800) || (day == "Mo" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "MO" && time < 800) || (day == "MO" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "mo" && time < 800) || (day == "mo" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Tu" && time < 800) || (day == "Tu" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "TU" && time < 800) || (day == "TU" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "tu" && time < 800) || (day == "tu" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "We" && time < 800) || (day == "We" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "WE" && time < 800) || (day == "WE" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "we" && time < 800) || (day == "we" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Th" && time < 800) || (day == "Th" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                 if ((day == "TH" && time < 800) || (day == "TH" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                 if ((day == "th" && time < 800) || (day == "th" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "Fr" && time < 800) || (day == "Fr" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "FR" && time < 800) || (day == "FR" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if ((day == "fr" && time < 800) || (day == "fr" && time > 1800)) {
                    totalCost = min * rateB;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if (day == "SA" || day == "SU" ) {
                    totalCost = min * rateC;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if (day == "sa" || day == "su" ) {
                    totalCost = min * rateC;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                if (day == "Sa" || day == "Su" ) {
                    totalCost = min * rateC;
                    cout << "The total cost of your bill is $ " << totalCost << endl;
                }

                cout << "Day: " << day << endl;
                cout << "Time: " << time << endl;
                cout << "Call length: " << min << endl;
                cout << "Would you like to repeat the program (Y/N)?\n";
                cin >> choice;

            } while (choice == 'Y' || choice == 'y');
            break;
            
        case '5':
            char choice;
            char firstChoice, secondChoice;

            do { 

                cout << "This is a game of Paper-Rock-Scissors for two players." << endl;
                cout << "Enter an P for paper, R for rock, and S for scissors:" << endl;
                cin >> firstChoice;
                cout << "The next player may now enter their choice." << endl;
                cin >> secondChoice;

                if ((firstChoice == 'P' || firstChoice == 'p') && (secondChoice == 'P' || secondChoice == 'p')) {
                    cout << "Both players chose paper. No one wins!" << endl;
                }

                if ((firstChoice == 'P' || firstChoice == 'p') && (secondChoice == 'R' || secondChoice == 'r')) {
                    cout << "Paper covers rock! Player 1 wins.\n";
                }

                if ((firstChoice == 'P' || firstChoice == 'p') && (secondChoice == 'S' || secondChoice == 's')) {
                    cout << "Scissors cuts paper! Player 2 wins.\n";
                }

                if ((firstChoice == 'R' || firstChoice == 'r') && (secondChoice == 'R' || secondChoice == 'r')) {
                    cout << "Both players chose rock. No one wins!\n";
                }

                if ((firstChoice == 'R' || firstChoice == 'r') && (secondChoice == 'P' || secondChoice == 'p')) {
                    cout << "Paper covers rock! Player 2 wins.\n";
                }

                if ((firstChoice == 'R' || firstChoice == 'r') && (secondChoice == 'S' || secondChoice == 's')) {
                    cout << "Rock breaks scissors! Player 1 wins.\n";
                }

                if ((firstChoice == 'S' || firstChoice == 's') && (secondChoice == 'S' || secondChoice == 's')) {
                    cout << "Both players chose scissors. No one wins!\n";
                }

                if ((firstChoice == 'S' || firstChoice == 's') && (secondChoice == 'R' || secondChoice == 'r')) {
                    cout << "Rock breaks scissors! Player 2 wins.\n";
                }

                if ((firstChoice == 'S' || firstChoice == 's') && (secondChoice == 'P' || secondChoice == 'p')) {
                    cout << "Scissors cut paper! Player 1 wins.\n";
                }


                cout << "Would you like to repeat the program (Y/N)?\n";
                cin >> choice;

            } while (choice == 'Y' || choice == 'y');
            break;
            
        case '6':
            float interest, interestAfter, balance, totalDue, minPay;
            char choice;
            interest = 0.015;
            interestAfter = 0.010;

            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);

            do {
                cout << "This program calculates your amount due and your minimum"
                 << " payment." << endl;
                cout << "Enter your current account balance:" << endl;
                cin >> balance;

            if (balance <= 1000) {
                totalDue = balance * interest;
                if (totalDue <= 10) {
                    minPay = totalDue;
                }
                    else if (balance > 1000) {
                        totalDue = balance * interestAfter;
                        minPay = totalDue * 0.10;
                    }
            }

            cout << "Your amount due totals to $" << totalDue << " and your minimum"
                 << " payment is $" << minPay << "." << endl;
            cout << "Would you like to calculate another amount?" 
                 << " Y for yes, N for no." << endl;
            cin >> choice;

            } while (choice == 'Y' || choice == 'y');
            break;
            
        case '7':
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
            break;
            
        case '8':
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

                if ((birthMonth == 1 && birthDay <= 19) || (birthMonth == 12 && birthDay >= 2)) 
                {
                    cout << "Your astrological sun sign is a Capricorn!\n";
                    cout << "Here is your horoscope: " << cap << endl;
                    cout << "Your most compatible signs are Cancer and Pisces!\n";

                    if ((birthMonth == 1 && birthDay == 19) || (birthMonth == 1 && birthDay == 20)) 
                    {
                        cout << "You were born on a cusp! Your cusp sign is an Aquarius!\n";
                        cout << "Here is your cusp horoscope: " << aqu << endl;
                    }
                }

                if ((birthMonth == 1 && birthDay >= 20) || (birthMonth == 2 && birthDay <= 18)) 
                {
                    cout << "Your astrological sun sign is an Aquarius!\n";
                    cout << "Here is your horoscope: " << aqu << endl;
                    cout << "Your most compatible signs are Gemini and Libra!\n";

                    if ((birthMonth == 2 && birthDay == 18) || (birthMonth == 2 && birthDay == 19)) 
                    {
                        cout << "You were born on a cusp! Your cusp sign is a Pisces!\n";
                        cout << "Here is your cusp horoscope: " << pis << endl;
                    }
                }

                if ((birthMonth == 2 && birthDay >= 19) || (birthMonth == 3 && birthDay <= 20)) 
                {
                    cout << "Your astrological sun sign is a Pisces!\n";
                    cout << "Here is your horoscope: " << pis << endl;
                    cout << "Your most compatible signs are Cancer and Scorpio!\n";

                    if ((birthMonth == 3 && birthDay == 21) || (birthMonth == 3 && birthDay == 22)) 
                    {
                        cout << "You were born on a cusp! Your cusp sign is a Aries!\n";
                        cout << "Here is your cusp horoscope: " << ari << endl;
                    }
                }

                if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 4 && birthDay <= 19)) 
                {
                    cout << "Your astrological sun sign is an Aries!\n";
                    cout << "Here is your horoscope: " << ari << endl;
                    cout << "Your most compatible signs are Leo and Sagittarius!\n";

                    if ((birthMonth == 4 && birthDay == 19) || (birthMonth == 4 && birthDay == 20)) 
                    {
                        cout << "You were born on a cusp! Your cusp sign is an Taurus!\n";
                        cout << "Here is your cusp horoscope: " << tau << endl;
                    }
                }

                if ((birthMonth == 4 && birthDay >= 20) || (birthMonth == 5 && birthDay <= 20)) 
                {
                    cout << "Your astrological sun sign is a Taurus!\n";
                    cout << "Here is your horoscope: " << tau << endl;
                    cout << "Your most compatible signs are Virgo and Capricorn!\n";

                    if ((birthMonth == 5 && birthDay == 20) || (birthMonth == 5 && birthDay == 21)) 
                    {
                        cout << "You were born on a cusp! Your cusp sign is an Gemini!\n";
                        cout << "Here is your cusp horoscope: " << gem << endl;
                    }
                }

                if ((birthMonth == 5 && birthDay >= 21) || (birthMonth == 6 && birthDay <= 21)) 
                {
                    cout << "Your astrological sun sign is a Gemini!\n";
                    cout << "Here is your horoscope: " << gem << endl;
                    cout << "Your most compatible signs are Libra and Aquarius!\n";

                    if ((birthMonth == 6 && birthDay == 20) || (birthMonth == 6 && birthDay == 21))
                    {
                        cout << "You were born on a cusp! Your cusp sign is an Cancer!\n";
                        cout << "Here is your cusp horoscope: " << can << endl;
                    }
                }

                if ((birthMonth == 6 && birthDay >= 22) || (birthMonth == 7 && birthDay <= 22)) 
                {
                    cout << "Your astrological sun sign is a Cancer!\n";
                    cout << "Here is your horoscope: " << can << endl;
                    cout << "Your most compatible signs are Scorpio and Pisces!\n";

                    if ((birthMonth == 7 && birthDay == 22) || (birthMonth == 7 && birthDay == 23))
                    {
                            cout << "You were born on a cusp! Your cusp sign is an Leo!\n";
                            cout << "Here is your cusp horoscope: " << leo << endl;
                    }
                }

                if ((birthMonth == 7 && birthDay >= 23) || (birthMonth == 8 && birthDay <= 22)) 
                {
                    cout << "Your astrological sun sign is a Leo!\n";
                    cout << "Here is your horoscope: " << leo << endl;
                    cout << "Your most compatible signs are Aries and Sagittarius!\n";

                    if ((birthMonth == 8 && birthDay == 22) || (birthMonth == 8 && birthDay == 23))
                    {
                        cout << "You were born on a cusp! Your cusp sign is an Virgo!\n";
                        cout << "Here is your cusp horoscope: " << vir << endl;
                    }
                }

                if ((birthMonth == 8 && birthDay >= 23) || (birthMonth == 9 && birthDay <= 22)) 
                {
                    cout << "Your astrological sun sign is a Virgo!\n";
                    cout << "Here is your horoscope: " << vir << endl;
                    cout << "Your most compatible signs are Taurus and Capricorn\n";

                    if ((birthMonth == 9 && birthDay == 22) || (birthMonth == 9 && birthDay == 23))
                    {
                        cout << "You were born on a cusp! Your cusp sign is a Libra!\n";
                        cout << "Here is your cusp horoscope: " << lib << endl;
                    }
                }

                if ((birthMonth == 9 && birthDay >= 23) || (birthMonth == 10 && birthDay <= 22)) 
                {
                    cout << "Your astrological sun sign is a Libra!\n";
                    cout << "Here is your horoscope: " << lib << endl;
                    cout << "Your most compatible signs are Gemini and Aquarius\n";

                    if ((birthMonth == 10 && birthDay == 22) || (birthMonth == 10 && birthDay == 23))
                    {
                        cout << "You were born on a cusp! Your cusp sign is a Scorpio!\n";
                        cout << "Here is your cusp horoscope: " << sco << endl;
                    }
                }

                if ((birthMonth == 10 && birthDay >= 23) || (birthMonth == 11 && birthDay <= 21)) 
                {
                    cout << "Your astrological sun sign is a Scorpio!\n";
                    cout << "Here is your horoscope: " << sco << endl;
                    cout << "Your most compatible signs are Cancer and Pisces\n";

                    if ((birthMonth == 11 && birthDay == 21) || (birthMonth == 11 && birthDay == 22))
                    {
                        cout << "You were born on a cusp! Your cusp sign is a Sagittarius!\n";
                        cout << "Here is your cusp horoscope: " << sag << endl;
                    }
                }

                if ((birthMonth == 11 && birthDay >= 22) || (birthMonth == 12 && birthDay <= 21)) 
                {
                    cout << "Your astrological sun sign is a Sagittarius!\n";
                    cout << "Here is your horoscope: " << sag << endl;
                    cout << "Your most compatible signs are Aries and Leo!\n";

                    if (birthMonth == 12 && birthDay == 19 || birthMonth == 12 && birthDay == 20)
                    {
                        cout << "You were born on a cusp! Your cusp sign is a Capricorn!\n";
                        cout << "Here is your cusp horoscope: " << cap << endl;
                    }
                }
                cout << "Would you like to repeat the program (Y/N)?\n";
                cin >> choice;

            } while (choice == 'Y' || choice == 'y');
            break;
            
        case '9':
            int cel = 100;
            int fahr = 0;

            while (true) {
                fahr = (1.8 * cel) + 32; //(9/5 = 1.8)
                if (cel == fahr) {
                    break;
                }
                cel--;
            }

            cout << cel << "C and " << fahr << "F are the same in both Celsius and Fahrenheit." << endl;   
            break;
            
        default:
            cout<<"Having trouble following instructions?"<<endl;
            break;
            
    }
  
    //Exit the program
    return 0;
}

