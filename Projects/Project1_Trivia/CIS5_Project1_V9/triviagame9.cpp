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
 * 7. If user's sore is above X, initiate bonus questions round. (boolean function)
 * 8. Once user completes game, output solution from answers.txt input file
 * 9. Write user's name and score to scores.txt output file
 */

#include <iostream>
#include <string>
#include <fstream> //input/output files

using namespace std;

//Main Menu Prototypes
    void gameMenu(int &score, int &correct, int &incorrect, string name);
    void gameTutorial(int &score, int &correct, int &incorrect, string name);
    void aboutProg(int &score, int &correct, int &incorrect, string name);
    void triviaGame(int &score, int &correct, int &incorrect, string name);

//Trivia Questions Prototypes for 5 questions
    void question1(int &score, int &correct, int &incorrect, string name);
    void question2(int &score, int &correct, int &incorrect, string name);
    void question3(int &score, int &correct, int &incorrect, string name);
    void question4(int &score, int &correct, int &incorrect, string name);
    void question5(int &score, int &correct, int &incorrect, string name);
    
//Bonus Trivia Questions Prototypes 5 Questions
    bool initBonus(int score);
    void bonusQ1(int &score, int &correct, int &incorrect, string name);
    void bonusQ2(int &score, int &correct, int &incorrect, string name);
    void bonusQ3(int &score, int &correct, int &incorrect, string name);
    void bonusQ4(int &score, int &correct, int &incorrect, string name);
    void bonusQ5(int &score, int &correct, int &incorrect, string name);

//Solutions for regular questions and bonus game questions Prototypes
    void gameSolution(int &score, int &correct, int &incorrect, string name);
    void bonusgameSolution(int &score, int &correct, int &incorrect, string name);
    
 //Game Over Screen Prototype
    void gameOver(int &score, int &correct, int &incorrect, string name);

//Program Execution Begins Here
int main(int argc, char** argv) {

    int score = 0; //keeps track of user's score
    int correct = 0; //keeps track of user's correctly answered questions
    int incorrect = 0; //keeps track of user's incorrectly answered questions
    string name; //user's name
        
    cout<<"Hello! Welcome to the C++ Trivia Game!"<<endl;
    cout<<"What is your name, human?"<<endl;
    cin>>name;
    cout<<name<<", a lovely name? Welcome!"<<endl;
    
    gameMenu(score, correct, incorrect, name); //game menu function call
    
    return 0;
}


void gameMenu(int &score, int &correct, int &incorrect, string name) { 
//all future functions pass by reference for score, correct, incorrect variables
//as they are changed within each question function
//name is not passed by reference as there are no changes made to it
    
    int menuChoice;
    cout<<"\t **MAIN MENU**"<<endl;
    cout<<"Please select a number to navigate through the game's menu."<<endl;
    cout<<"1 \t Game Tutorial"<<endl;
    cout<<"2 \t About the Programmer"<<endl;
    cout<<"3 \t Start Trivia Game"<<endl;
    cin>>menuChoice;
    
    switch (menuChoice) {
        
        case 1: //tutorial case
            gameTutorial(score, correct, incorrect, name);break;
        case 2: //about the programmer case
            aboutProg(score, correct, incorrect, name);break;
        case 3: //initialize game case
            triviaGame(score, correct, incorrect, name);break;
        default:
            cout<<"That is not a valid menu choice."<<endl;
            //please read the instructions and follow valid input requirements
        
    }
    
}

void gameTutorial(int &score, int &correct, int &incorrect, string name) {
    
    cout<<"\t **GAME TUTORIAL**"<<endl; //description of point calculation
    cout<<"Each question, answered correctly, is worth 100 points."<<endl;
    cout<<"Each question, answered incorrectly, is a 50 point deduction."<<endl;
    cout<<"All questions are multiple choice. Be sure to input a single character."<<endl;
    cout<<"Try to get at least 4 questions correct to release a bonus round of questions!"<<endl;
    cout<<"**********************************************"<<endl;
    
    gameMenu(score, correct, incorrect, name); //return to game menu after this case
    
}

void aboutProg(int &score, int &correct, int &incorrect, string name) {
    
    cout<<"This project is for CIS-5 of Fall 2018."<<endl;
    cout<<"Written by Nichole Medero."<<endl; //HI, THAT'S ME :)
    cout<<"**********************************************"<<endl;
    
    gameMenu(score, correct, incorrect, name); //return to game menu after this case
        
    }

void triviaGame(int &score, int &correct, int &incorrect, string name) { //game initialized
    
    question1(score, correct, incorrect, name); //question 1 function call
                                                //arguments passed and initialized to 0
                                                //for the first question
    //Questions 2-10 called in the function preceeding it
    
}

void question1(int &score, int &correct, int &incorrect, string name) { //question 1 definition
    
    char userA; //user answer
    char ans = 'a'; //correct answer
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl; //question 1
    cout<<"a. \t this is answer 1"<<endl; //question 1 choices
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++; //number of questions answered correcting incremented
        
        question2(score, correct, incorrect, name); //question 2 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++; //number of questions answered incorrectly incremented
        
        question2(score, correct, incorrect, name); //question 2 function call
    }
            
}

void question2(int &score, int &correct, int &incorrect, string name) { //question 2 definition
    
    char userA; //user answer
    char ans = 'b'; //correct answer
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl; //question 2
    cout<<"a. \t this is answer 1"<<endl; //question 2 choices
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++; //correct questions increment
        
        question3(score, correct, incorrect, name); //question 3 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++; //incorrect questions increment
        
        question3(score, correct, incorrect, name); //question 3 function call
    }
}

void question3(int &score, int &correct, int &incorrect, string name) { //question 3 definition
    
    char userA; //user answer
    char ans = 'a'; //correct answer
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl; //question 3
    cout<<"a. \t this is answer 1"<<endl; //question 3 choices
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++; //correct questions increment
        
        question4(score, correct, incorrect, name); //question 4 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++; //incorrect questions decrement
        
        question4(score, correct, incorrect, name); //question 4 function call
    }
}

void question4(int &score, int &correct, int &incorrect, string name) { //question 4 definition
    
    char userA; //user answer
    char ans = 'c'; //correct answer
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++; //correct questions increment
        
        question5(score, correct, incorrect, name); //question 5 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++; //incorrect questions increment
        
        question5(score, correct, incorrect, name); //question 5 function call
    }
}

void question5(int &score, int &correct, int &incorrect, string name) {
    
    char userA;
    char ans = 'b';
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++;
        
            if (initBonus(score)) { //if bool initBonus returns true
                cout<<"**********************************************"<<endl;
                cout<<"\t BONUS ROUND INITIALIZED:"<<endl;
                bonusQ1(score, correct, incorrect, name); //bonus question 1 function call
            } else { //if bool initBonus returns false
             gameSolution(score, correct, incorrect, name);                     
            } 
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++;
        
    }
}

void bonusQ1(int &score, int &correct, int &incorrect, string name) {
    
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
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++;
        
        bonusQ2(score, correct, incorrect, name); //bonus question 2 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++;
        
        bonusQ2(score, correct, incorrect, name); //bonus question function call
    }
}

void bonusQ2(int &score, int &correct, int &incorrect, string name) {
    
    char userA;
    char ans = 'c';
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++;
        
        bonusQ3(score, correct, incorrect, name); //bonus question 3 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++;
        
        bonusQ3(score, correct, incorrect, name); //bonus question 3 function call
    }
}

void bonusQ3(int &score, int &correct, int &incorrect, string name) {
    
    char userA;
    char ans = 'c';
    cout<<"**********************************************"<<endl;
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
        
        bonusQ4(score, correct, incorrect, name); //bonus question 4 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++;
        
        bonusQ4(score, correct, incorrect, name); //bonus question 4 function call
    }
}

void bonusQ4(int &score, int &correct, int &incorrect, string name) {
    
    char userA;
    char ans = 'c';
    cout<<"**********************************************"<<endl;
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
        
        bonusQ5(score, correct, incorrect, name); //bonus question 5 function call
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;
        incorrect++;
        
        bonusQ5(score, correct, incorrect, name); //bonus question 5 function call
    }
}

void bonusQ5(int &score, int &correct, int &incorrect, string name) {
    
    char userA;
    char ans = 'c';
    cout<<"**********************************************"<<endl;
    cout<<"This is a question?"<<endl;
    cout<<"a. \t this is answer 1"<<endl;
    cout<<"b. \t this is answer 2"<<endl;
    cout<<"c. \t this is answer 3"<<endl;
    cout<<"d. \t this is answer 4"<<endl;
    cin>>userA;
    
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //100 points per correct answer
        cout<<"Your score is now "<<score<<"!"<<endl;
        correct++;
        
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50;
        cout<<"Your score is now "<<score<<"."<<endl;  
        incorrect++;
        
    }
    
    initBonus(score); //calculate whether the bonus round should be initiated
                      //based upon the user's current score
    
    if (initBonus(score)) { //if the user's score passes

        bonusgameSolution(score, correct, incorrect, name); //bonus trivia game answers 1-5
        
    } else {
        
        gameSolution(score, correct, incorrect, name); //both regular and bonus answers 1-10
        
    }
}

bool initBonus(int score) { //determines whether the bonus round is initialized
    
    bool initBonus;
    
    if (score >= 400) { 
        initBonus = true; 
    } else {
        initBonus = false;
    }
    
    return initBonus;
}

void gameSolution(int &score, int &correct, int &incorrect, string name) {
    
   cout<<"**********************************************"<<endl;
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

void bonusgameSolution(int &score, int &correct, int &incorrect, string name) {
    
    cout<<"**********************************************"<<endl;
            cout<<"\t GAME SOLUTION"<<endl;
            
            ifstream file; //Reading from file
            file.open("answersbonus.txt"); //name of answers file
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

void gameOver(int &score, int &correct, int &incorrect, string name) {
    
    
    cout<<"----------CONGRATULATIONS----------"<<endl;
    
    for(int i = 0; i <= 2; i++) { //for loops for cat output bc why not!
        
        cout<<"───────────────────────────────────────"<<endl;
        cout<<"───▐▀▄───────▄▀▌───▄▄▄▄▄▄▄─────────────"<<endl;
        cout<<"───▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄──────────"<<endl;
        cout<<"──▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄────────"<<endl;
        cout<<"──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄──────"<<endl;
        cout<<"▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────"<<endl;
        cout<<"▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐───▄▄"<<endl;
        cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█"<<endl;
        cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀─"<<endl;
        cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀───"<<endl;
        cout<<"▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌────"<<endl;
        cout<<"─▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐─────"<<endl;
        cout<<"─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌─────"<<endl;
        cout<<"──▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐──────"<<endl;
        cout<<"──▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌──────"<<endl;
        cout<<"────▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀────────"<<endl;
            
    }
    
    cout<<"Woo! You have completed the game, " <<name<<"!"<<endl;
    
    if (initBonus(score)) {
        
        int totalQ = 10;
        float perc;
       
        cout<<"Your final score: "<<score<<endl;
        cout<<"You answered "<<correct<<" questions out of 10!"<<endl;
        perc = (correct/totalQ) * 100;
        cout<<"Or "<<perc<<"% of the questions!"<<endl;
       
    } else {
        
        int totalQ = 5;
        float perc;
        
        cout<<"Your final score: "<<score<<endl;
        cout<<"You answered "<<correct<<" questions out of 5!"<<endl;
        perc = (correct/totalQ) * 100;
        cout<<"Or "<<perc<<"% of the questions!"<<endl;
        
    }
    
    ofstream fileout;
    fileout.open("scores.txt");
    fileout << name << ":" << endl;
    fileout << score;   
    
}