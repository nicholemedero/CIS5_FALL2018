/*
 * Practice Program 1:
 * A metric ton is 35,273.92 ounces. Write a program that will read the weight 
 * of a package of breakfast cereal in ounces and output the weight in metric 
 * tons as well as they number of boxes needed to yield 1 metric ton of cereal.
 * Your program should allow the user to repeat this calculation as often as
 * the user wishes.
 */



#include <iostream>
using namespace std;


int main( ) {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(13);
    
    float metricTon1, metricTon2, cerealOz, cerealTons, numberOfBoxes;
    metricTon1 = 0.0000283495231;
    metricTon2 = 35273.93;
    char choice;
    
    do {
        cout << "Press return after entering a number.\n";
        cout << "Enter ounces of cereal:\n";
        cin >> cerealOz;
        cerealTons = cerealOz * metricTon1;  
        numberOfBoxes = metricTon2 / cerealOz;
        cout << "Your cereal weighs ";
        cout << cerealTons;
        cout << " in metric tons.\n";
        cout << "It would take ";
        cout << numberOfBoxes;
        cout << " boxes of cereal to weigh 1 metric ton, ";
        cout << "which is equivalent to 35,273.93 ounces.\n";
        
        cout << "Calculate another cereal (Y/N)? ";
        cin >> choice;
        
       
    } while (choice == 'Y');
        if (choice != 'N')
            cout << "Error. Invalid input.\n";
            cin >> choice;
            
            return 0;
    }
