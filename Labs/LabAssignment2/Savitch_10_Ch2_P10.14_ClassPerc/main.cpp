/*
 * Write a program that calculates the total grade for N classroom exercises
 * as a percentage. The user should input value for N followed by each of the N
 * scores and totals. Calculate the overall percentage (sum of the total points 
 * earned divided by the total points possible) and output it as a percentage.
 */

#include <iostream>

using namespace std;

int main( ) {

    float ex1_score, ex1_poss, ex2_score, ex2_poss, ex3_score, ex3_poss, totalScore,
            totalPoints, scorePerc;
    
    cout << "Score received for exercise 1:\n";
    cin >> ex1_score;
    cout << "Total points possible for exercise 1:\n";
    cin >> ex1_poss;
    cout << "Score received for exercise 2:\n";
    cin >> ex2_score;
    cout << "Total points possible for exercise 2:\n";
    cin >> ex2_poss;
    cout << "Score received for exercise 3:\n";
    cin >> ex3_score;
    cout << "Total points possible for exercise 3:\n";
    cin >> ex3_poss;
    
    totalScore = ex1_score + ex2_score + ex3_score;
    totalPoints = ex1_poss + ex2_poss + ex3_poss;
    scorePerc = (totalScore / totalPoints) * 100;
    
    cout << "You total is ";
    cout << totalScore;
    cout << " out of ";
    cout << totalPoints;
    cout << " possible points, or ";
    cout << scorePerc;
    cout << "%.";
   
    return 0;
}

