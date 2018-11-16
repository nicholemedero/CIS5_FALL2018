/* 
 * File:   triviagame5.cpp
 * Author: Nichole Medero
 * Created on October 29, 2018, 12:59 PM
 * Purpose: CIS5 Project 1 Trivia Game // Version 6
 */

/*
 *PSEUDOCODE:
 * 1. Declare Variables
 * 2. Get Player name
 * 3. Switch Statements to navigate throughout the game 
 *      (e.g., main menu, tutorial, about programmer, etc(?))
 * 4. Function for output in each case of switch statement
 * 5. Trivia Game Function, display only one question while it is unanswered
 * 6. Separate function for each question (YES)
 * 7. Pass by reference the incorrect and correct question count
 * 8. Pass by reference the user's score
 * 9. If user's sore is above X, initiate bonus questions round.
 * 9. Once user completes game, output solution from answers.txt input file
 * 10. Write user's name and score to scores.txt output file
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Main Menu Prototypes
    void gameMenu();
    void gameTutorial();
    void aboutProg();
    void triviaGame();

//Trivia Questions Prototypes
    void question1();
    void question2();
    void question3();
    void question4();
    void question5();
    void gameSolution();
    
//Bonus Trivia Questions Prototypes
    bool score();
    void bonusQ1();
    void bonusQ2();
    void bonusQ3();
    void bonusQ4();
    void bonusQ5();
    void bonusgameSolution();
    
 //Game Over Screen Prototype
    void gameOver;

//Program Execution Begins Here

int main(int argc, char** argv) {

    int score = 0; //keeps track of user's score
    int correct = 0; //keeps track of user's correctly answered questions
    int incorrect = 0; //keeps track of user's incorrectly answered questions
    string name; //user's name
    
    
    cout<<"Hello! Welcome to the C++ Trivia Game!"<<endl;
    cout<<"What is your name, human?"<<endl;
    cin>>name;
    cout<<name<<"? Welcome!"<<endl;
    
    gameMenu(name);
    return 0;
}


void gameMenu(string name) {
    
    int menuChoice;
    
    cout<<"\t **MAIN MENU**"<<endl;
    cout<<"Please select a number to navigate through the game's menu."<<endl;
    cout<<"1 \t Game Tutorial"<<endl;
    cout<<"2 \t About the Programmer"<<endl;
    cout<<"3 \t Start Trivia Game"<<endl;
    cin>>menuChoice;
    
    switch (menuChoice) {
        
        case 1: //tutorial
            gameTutorial(name);break;
        case 2: //about the programmer
            aboutProg(name);break;
        case 3: //initialize game
            triviaGame(name);break;
        
    }
    
}

void gameTutorial(string name) {
    
    cout<<"\t **GAME TUTORIAL**"<<endl;
    cout<<"Each question, answered correctly, is worth 100 points."<<endl;
    cout<<"Each question, answered incorrectly, is a 50 point deduction."<<endl;
    cout<<"All questions are multiple choice. Be sure to input a single character."<<endl;
    cout<<"Try to get at least 15 questions correct to release a bonus round of questions!"<<endl;
    cout<<"**********************************************"<<endl;
    
    gameMenu(name); //return to game menu
    
}

void aboutProg(string name) {
    
    cout<<"This project is for CIS-5 of Fall 2018."<<endl;
    cout<<"Written by Nichole Medero."<<endl;
    cout<<"**********************************************"<<endl;
    
    gameMenu(name); //return to game menu
        
    }

void triviaGame(int score, int correct, int incorrect, string name) { //game initialized
    
    question1(score, correct, incorrect, name); //question 1 function call
                                          //arguments passed and initialized to 0
                                          //for the first question
    
    //Questions 2-10 called in the function preceeding it
    
}

void question1(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'a';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        correct++;
        
        question2(score, correct, incorrect, name); //question 2 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        incorrect++;
        
        question2(score, correct, incorrect); //question 2 function call
    }
               
}

void question2(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'b';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        question3(score, correct, incorrect, name); //question 3 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        question3(score, correct, incorrect, name); //question 3 function call
    }
}

void question3(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'a';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        question4(score, correct, incorrect, name); //question 4 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        question4(score, correct, incorrect, name); //question 4 function call
    }
}

void question4(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'c';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        question5(score, correct, incorrect, name); //question 5 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        question5(score, correct, incorrect, name); //question 5 function call
    }
}

void question5(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'b';
   
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        if (score(score)) {
            
            cout<<"***************************"<<endl;
            cout<<"\t BONUS ROUND INITIALIZED:"<<endl;
            bonusQ1(score, correct, incorrect, name); //bonus question 1 function call
            
        } else {
            
         //do something here               
                    
        }
        
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
    }
}

void bonusQ1(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'c';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        bonusQ2(score, correct, incorrect, name); //bonus question 2 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        bonusQ2(score, correct, incorrect, name); //bonus question function call
    }
}

void bonusQ2(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'c';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        bonusQ3(score, correct, incorrect, name); //bonus question 3 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        bonusQ3(score, correct, incorrect, name); //bonus question 3 function call
    }
}

void qbonusQ3(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'c';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        bonusQ4(score, correct, incorrect, name); //bonus question 4 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        bonusQ4(score, correct, incorrect, name); //bonus question 4 function call
    }
}

void bonusQ4(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'c';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        bonusQ5(score, correct, incorrect, name); //bonus question 5 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        bonusQ5(score, correct, incorrect, name); //bonus question 5 function call
    }
}

void bonusQ5(int score, int correct, int incorrect, string name) {
    
    char userA;
    char ans = 'c';
    
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now"<<score<<"!"<<endl;
        
        score(score); //game solution function call (input file)
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now"<<score<<"."<<endl;
        
        score(score); 
    }
}

bool score(int score) { //determines whether the bonus round is initialized
    
    bool initBonus;
    
    if (score >= 400) { 
        initBonus = true; 
    } else {
        initBonus = false;
    }
    
    return initBonus;
}

void gameSolution(int score, int correct, int incorrect, string name) {
    
   cout<<"***************************"<<endl;
            cout<<"\t GAME SOLUTION"<<endl;
            
            ifstream file; //Reading from file
            file.open("answers.txt"); //name of answers file
            char sol;
                file >> sol;  //answer to question 1
                    cout<<sol<<endl;
                file >> sol; //answer to question 2
                    cout<<sol<<endl;
                file >> sol; //answer to question 3
                    cout<<sol<<endl;
                file >> sol; //answer to question 4
                    cout<<sol<<endl;
                file >> sol; //answer to question 5
                    cout<<sol<<endl;
            file.close(); 
    gameOver(score, correct, incorrect, name);
}

void bonusgameSolution(int score, int correct, int incorrect, string name) {
    
    cout<<"***************************"<<endl;
            cout<<"\t GAME SOLUTION"<<endl;
            
            ifstream file; //Reading from file
            file.open("answers.txt"); //name of answers file
            char sol;
                file >> sol;  //answer to question 1
                    cout<<sol<<endl;
                file >> sol; //answer to question 2
                    cout<<sol<<endl;
                file >> sol; //answer to question 3
                    cout<<sol<<endl;
                file >> sol; //answer to question 4
                    cout<<sol<<endl;
                file >> sol; //answer to question 5
                    cout<<sol<<endl;
                cout<<"--------BONUS--------"<<endl;
                file >> sol; //answer to bonus question 1
                    cout<<sol<<endl;
                file >> sol; //answer to bonus question 2
                    cout<<sol<<endl;
                file >> sol; //answer to bonus question 3
                    cout<<sol<<endl;
                file >> sol; //answer to bonus question 4
                    cout<<sol<<endl;    
                file >> sol; //answer to bonus question 5
                    cout<<sol<<endl;         
            file.close();  
            
            gameOver(score, correct, incorrect, name);
    
}

void gameOver(int score, int correct, int incorrect, string name) {
    
    int total;
    float perc;
    
    cout<<"----------CONGRATULATIONS----------"<<endl;
    cout<<"───────────────────────────────────────
            ───▐▀▄───────▄▀▌───▄▄▄▄▄▄▄─────────────
            ───▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄──────────
            ──▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄────────
            ──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄──────
            ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────
            ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐───▄▄
            ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█
            ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀─
            ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀───
            ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌────
            ─▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐─────
            ─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────
            ──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐──────
            ──▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌──────
            ────▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀────────"<<endl;
    cout<<"You have completed the game," <<name<<endl;
    
    if (score(score)) {
        
        cout<<"You answered "<<correct<<" questions out of 10!"<<endl;
        total = correct + incorrect;
        perc = (correct/total) * 100;
        cout<<"Or "<<static_cast<int>(perc)<<"% of the questions!"<<endl;
    } else {
        
        cout<<"You answered "<<correct<<" questions out of 5!"<<endl;
        total = correct + incorrect;
        perc = (correct/total) * 100;
        cout<<"Or "<<static_cast<int>(perc)<<"% of the questions!"<<endl;
        
        
    }
    ofstream fileout;
    
    
    
}