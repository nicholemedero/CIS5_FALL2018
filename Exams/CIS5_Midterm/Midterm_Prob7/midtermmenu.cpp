/*
 * Utilize the following code to place your programs within the menu.
 */

/* 
 * File:   midtermmenu.cpp
 * Author: Nichole Medero
 * Created on October 27, 2018, 4:51 PM
 * Purpose: Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */



//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath> //power function in problem 6
using namespace std;


//Function Prototypes
//Functions for individual problems are declared immediately after problem function
void Menu();
int  getN();
void def(int);
void problem1();
    void xShape(unsigned short x, char shape);
    void backShape(unsigned short x, char shape);
    void forwardShape(unsigned short x, char shape);
void problem2();
void problem3();
    void output(int input);
    void thouDigit(int input);
    void hunDigit(int input);
    void teensDigit(int input);
    void tensDigit(int input);
    void onesDigit(int input);
void problem4();
    void caseA(int hours);
    void caseB(int hours);
    void caseC(int hours);
void problem5();
void problem6();

//Execution Begins Here
int main(int argc, char** argv) {
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    unsigned short x;
    char shape;       //f-> forward b->backward x->cross
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>x>>shape;
    //if statements statements & processes for char selected
    if (shape == 'x') { //x shape
        xShape(x, shape);
    } else if (shape == 'b') { //backslash shape
        backShape(x, shape);
    } else if (shape == 'f') { //forward slash shape
        forwardShape(x, shape); 
    } else if (shape != 'x' && shape != 'b' && shape != 'f') {  
        cout<<"That is not a valid input.";  
    }
}

void xShape(unsigned short x, char shape) {
    int shapeX = x; //to avoid conflict with the condition statement in for loops
    for (int rows = 1; rows <= x; rows++) {
        for (int cols = 1; cols <= x; cols++) {
            if (rows == cols  || cols == ((x+1)-rows)) { //display number where i 
                                                        //(rows) and j (columns) 
                                                        //are equal
                cout<<shapeX;
            } else {
                cout<<" "; //otherwise display a space
                
            }
        } 
        shapeX--; //decrements x at each row, should decrement at each column
                  //but could not find the proper placement
        cout<<endl;
    }	
}

void backShape(unsigned short x, char shape) {
    int shapeX = x; //to avoid conflict with the condition statement in for loops
    for (int rows = 1; rows <= x; rows++) {
        for (int cols = 1; cols <= x; cols++) {
            if (rows == cols) { 
                cout<<shapeX;  
            } else {
                cout<<" "; //otherwise display a space 
            }
        } 
        shapeX--; //decrements x at each row
        cout<<endl;
    }
}

void forwardShape(unsigned short x, char shape) {
    int shapeX = x; //to avoid conflict with the condition statement in for loops
    for (int rows = x; rows >= 1; rows--) { //flips the slash
        for (int cols = 1; cols <= x; cols++) {
            if (cols == rows) {
                cout<<shapeX; 
            } else {
                cout<<" "; //otherwise display a space 
            } 
        } 
        shapeX--; //decrements x at each row (should be column)
        cout<<endl;
    }
}

void problem2(){
    int ast;
    int code = 4;
    char digits[code];
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>digits; //digits will be read as individual characters
    //Output/Calculations
    for (int i = 3; i >= 0; i--) { //iterates through the input backwards
        cout<<digits[i]<<" ";
        if (digits[i] <= 47 || digits[i] >= 58) { //outputs ? if character input 
                                                //is a letter
            cout<<"?";
        } else {
            ast = digits[i] - 48; //0 begins at 48 on the ascii table
                                  //subtracting 48 results in the # of * to output
            for (int j = 0; j < ast ; j++) {
                cout<<"*"; //only output as many times as the value after
                           //ascii table conversion 
            }
        }
    cout<<endl;
    }
}

void problem3(){
    int input;
    //Input or initialize values Here
    cout << "Input an integer [1-3000] convert to an English Check value." << endl;
    cin>>input;
    //Calculate the 1000's, 100's, 10's and 1's
    if (input > 3000) { //3000 input maximum
        cout << "That is not a valid input." << endl;
    } else {
        output(input);
        cout << "and no/100's Dollars" << endl;
    }
}

void output(int input) {
    thouDigit(input);
    hunDigit(input);
    teensDigit(input);
    tensDigit(input);
    onesDigit(input);
}

void thouDigit(int input) { //no larger than 3000
    int a = input / 1000; //a holds the thousands place
    if (a == 1) {
        cout << "One Thousand ";
    } else if (a == 2) {
        cout << "Two Thousand ";
    } else if (a == 3) {
        cout << "Three Thousand";
    }
}

void hunDigit(int input) {
    int b = (input/100)%10; //b holds the hundreds place
    if (b == 9) {
        cout << "Nine Hundred ";
    } else if (b == 8) {
        cout << "Eight Hundred ";
    } else if (b == 7) {
        cout << "Seven Hundred ";
    } else if (b == 6) {
        cout << "Six Hundred ";
    } else if (b == 5) {
        cout << "Five Hundred ";
    } else if (b == 4) {
        cout << "Four Hundred ";
    } else if (b == 3) {
        cout << "Three Hundred ";
    } else if (b == 2) {
        cout << "Two Hundred ";
    } else if (b == 1) {
        cout << "One Hundred ";
    }
}

void tensDigit(int input) {
    int c = (input % 100) / 10; //c holds the tens place
    if (c == 9) {
        cout << "Ninety";
    } else if (c == 8) {
        cout << "Eighty";
    } else if (c == 7) {
        cout << "Seventy";
    } else if (c == 6) {
        cout << "Sixty";
    } else if (c == 5) {
        cout << "Fifty";
    } else if (c == 4) {
        cout << "Forty";
    } else if (c == 3) {
        cout << "Thirty";
    } else if (c == 2) {
        cout << "Twenty";
    }
    cout << " ";
}

void teensDigit(int input) {
    int d = input % 100; //d holds teen digits
    if (d == 19) {
        cout << "Nineteen ";
    } else if (d == 18) {
        cout << "Eighteen ";
    } else if (d == 17) {
        cout << "Seventeen ";
    } else if (d == 16) {
        cout << "Sixteen ";
    } else if (d == 15) {
        cout << "Fifteen ";
    } else if (d == 14) {
        cout << "Fourteen ";
    } else if (d == 13) {
        cout << "Thirteen ";
    } else if (d == 12) {
        cout << "Twelve ";
    } else if (d == 11) {
        cout << "Eleven ";
    } else if (d == 10) {
        cout << "Ten ";
    }
}

void onesDigit(int input) {
    int e = input % 10; //e holds the ones place
    if (e == 9) {
        cout << "Nine ";
    } else if (e == 8) {
        cout << "Eight ";
    } else if (e == 7) {
        cout << "Seven ";
    } else if (e == 6) {
        cout << "Six ";
    } else if (e == 5) {
        cout << "Five ";
    } else if (e == 4) {
        cout << "Four ";
    } else if (e == 3) {
        cout << "Three ";
    } else if (e == 2) {
        cout << "Two ";
    } else if (e == 1) {
        cout << "One ";
    }
}

void problem4(){
    char pack;
    unsigned short hours;
    //Input or initialize values Here
    cout << "ISP charges for service delivered." << endl;
    cout << "Input package A,B,C then hours used for the month" << endl;
    cin >> pack >> hours;
    if (pack == 'a' || pack == 'A') {
        caseA(hours); //isp package a/A  
    } else if (pack == 'b' || pack == 'B') {
        caseB(hours); //isp package b/B
    } else if (pack == 'c' || pack == 'C') {
        caseC(hours); //isp package c/C
    } else if (pack != 'a' || pack != 'A' || pack != 'b' || pack != 'B' || 
            pack != 'c' || pack != 'C') { //invalid packages
        cout<<"That is not a valid package."<<endl;
    } 
}

void caseA(int hours) {
    const float rate = 16.99;
    float subtotal, total, savings;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (hours <= 10) { //less than or equal to 10 hours charge
        total = rate;
        savings = total - rate;
        cout<<"$"<<total<<" A $"<<savings<<endl;
        
    } else if (hours > 10 && hours <= 20) {
        subtotal = rate;
        hours -= 10; 
        total = subtotal + (hours * 0.95);
        savings = total - 26.99;
        cout<<"$"<<total<<" B $"<<savings<<endl;
    } else if (hours >= 21) {
        subtotal = rate;
        subtotal += (10 * 0.95); 
        hours -= 20;
        total = subtotal + (hours * 0.85); //hours after 20
        savings = total - 36.99;
        cout<<"$"<<total<<" C $"<<savings<<endl;
    }
}

void caseB(int hours) {
    const float rate = 26.99;
    float subtotal, total, savings;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    if (hours <= 20) { //if less than or equal to 20 hours
        total = rate;
        savings = total - rate;
        cout<<"$"<<total<<" B $"<<savings<<endl;
    } else if (hours >= 21 && hours <= 30) {  
        subtotal = rate;
        hours -= 20; //remainder after first 20 hours
        total = subtotal + (hours * 0.74);
        savings = total - 36.99;
        cout<<"$"<<total<<" C $"<<savings<<endl;
    } else if (hours >= 31) {
        subtotal = rate;
        subtotal += (10 * 0.74); //10 hours between 20 and 30
        hours -= 30; //remainder of hours after 30
        total = subtotal + (hours * 0.64); //any hours after 30 * rate
        savings = total - 36.99;
        cout<<"$"<<total<<" C $"<<savings<<endl;
    }
}

void caseC(int hours) {
    const float rate = 36.99;
    float  total, savings;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    total = rate;
    savings = total - rate;
    cout<<"$"<<total<<" C $"<<savings<<endl; 
}

void problem5(){
    float payRate, grossPay;
    unsigned short hours;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Input
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hours;
    //Calculate Paycheck and Output
    if (hours <= 20) { //if an employee works 20 or less hours
        grossPay = hours * payRate; //pay rate
        cout<<"$"<<grossPay;
    } else if (hours <= 21 && hours >= 40) { //if an employee works over 20/below 40
        grossPay = hours * payRate; //first 20 hours
        hours -= 20; //remaining hours calculated
        grossPay += (hours * (payRate * 1.5)); //pay rate multiplied by 1.5
        cout<<"$"<<grossPay;
    } else if (hours > 40) { //if an employee works over 40 hours
        grossPay = 20 * payRate; //first 20 hours
        grossPay += (20 * (payRate * 1.5)); //hours after 20 and before 40
        hours -= 40; //remaining hours calculated
        grossPay += + (hours * (payRate * 2.0)); //pay rate doubled for hours after 40
        cout<<"$"<<grossPay;
    }
}

void problem6(){
    int x, n;
    float total;
        //x = factorial
        //n = number of terms
        //total = sum of all products
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6); //show 6 places after the decimal
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>n; 
    //Calculation
    for (int i = 1; i <= n; i++) { //loop only as many terms (n) input
                                   //i is initialized to 1 because 0 would cause an error
        total += (n)/(pow(x, i)); //input x raised to the power of i (incremented)
    }
    cout<<total;
}