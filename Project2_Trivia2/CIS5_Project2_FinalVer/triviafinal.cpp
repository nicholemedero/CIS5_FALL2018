/* 
 * File:   triviagame8.cpp
 * Author: Nichole Medero
 * Created on December 10, 2018, 02:08 PM
 * Purpose: CIS5 Project 2 Trivia Game - Version 8
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

#include <iostream> //*library for cin cout
#include <string>  //*library for string intake
#include <fstream> //*library for input/output files
#include <iomanip> //*library for setw(#)
#include <vector> //*library for vector

using namespace std;

//*Main Menu Prototypes
    void gameMenu(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void gameTutorial(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void aboutProg(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void triviaGame(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
//*Trivia Question Prototypes for 5 questions
    void question1(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void question2(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void question3(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void question4(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void question5(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);   
//*Bonus Trivia Question Prototypes for 5 Questions
    bool initBonus(int score);
    void bonusQ1(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void bonusQ2(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void bonusQ3(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void bonusQ4(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void bonusQ5(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
//* Check Answer Prototype
    bool checkAns(char userA, char ans, int &score, int &correct, int &incorrect);
//*Solutions for regular questions and bonus game questions Prototypes
    void gameSolution(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
    void bonusgameSolution(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);
 //*Game Over Screen Prototype
    void gameOver(string quest[], string questB[], int &score, int &correct, int &incorrect, string name);

//*Program Execution Begins Here
int main(int argc, char** argv) {
    int score = 0; //*keeps track of user's score
    int correct = 0; //*keeps track of user's correctly answered questions
    int incorrect = 0; //*keeps track of user's incorrectly answered questions
    string name; //*hold user's name
        
    cout<<"Hello! Welcome to the CIS-5 NASA Trivia Game!"<<endl; //*notify user of game type
    cout<<"What is your name, human?"<<endl; //*prompt user for name
    cin>>name; //*input user's name
    
    for (int i = 0; i < 3; i ++) { //*for loop to welcome user
        cout<<name<<"? What a lovely name? Welcome!"<<endl;  
    }
    cout<<"Let's get started!"<<endl;
    
    string quest[5] = { "Who made the first U.S. spacewalk?", //Q1
        "What is the name of the largest volcano in the solar system?", //Q2
        "Who was the first American woman in space?", //Q3
        "What is the smallest planet in our solar system?", //Q4
        "What is the longest time a human has been sent to space?" }; //Q5
    
    string questB[5] = { "How many moons are in our solar system?", //BQ1
        "What is the largest planet in our solar system?", //BQ2
        "How many people have walked on the moon?", //BQ3
        "What was America's first space station called?", //BQ4
        "How long does it take for the space shuttle to orbit Earth?" }; //BQ5
    
    gameMenu(quest, questB, score, correct, incorrect, name); //*game menu function call
    //*all other function calls are held within the preceeding functions
    
    //*exit game
    return 0; 
}


void gameMenu(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { 
//*all future functions pass by reference for score, correct, incorrect variables
//*as they are changed within each question # function
//*name is not passed by reference as there are no changes made to it
    int menuChoice; //*initialize variable to hold menu choice
    cout<<"\t **MAIN MENU**"<<endl;
    cout<<"Please select a number to navigate through the game's menu."<<endl;
    cout<<"1 \t Game Tutorial"<<endl;
    cout<<"2 \t About the Programmer"<<endl;
    cout<<"3 \t Start Trivia Game"<<endl;
    cin>>menuChoice; //*hold's user's menu choice
    
    switch (menuChoice) { //*switch statement for game menu
        case 1: //*tutorial case 1
            gameTutorial(quest, questB, score, correct, incorrect, name);break;
        case 2: //*about the programmer case 2 
            aboutProg(quest, questB, score, correct, incorrect, name);break;
        case 3: //*initialize game case 3
            triviaGame(quest, questB, score, correct, incorrect, name);break;
        default:
            cout<<"That is not a valid menu choice."<<endl;
            //*please read the instructions and follow valid input requirements  
    } 
}

void gameTutorial(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { 
//*gameTutorial function definition 
    cout<<"\t **GAME TUTORIAL**"<<endl; //*description of point calculation and requirements
    cout<<"Each question, answered correctly, is worth 100 points."<<endl;
    cout<<"Each question, answered incorrectly, is a 50 point deduction."<<endl;
    cout<<"All questions are multiple choice. Be sure to input a single character."<<endl;
    cout<<"Try to get at least 4 questions correct to release a bonus round of questions!"<<endl;
    cout<<"**********************************************"<<endl;
    gameMenu(quest, questB, score, correct, incorrect, name); 
    //*return to game menu after this case/function is called   
}

void aboutProg(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) {
//*aboutProg function definition  
    cout<<"This project is for CIS-5 of Fall 2018."<<endl; //*project assignment date
    cout<<"Written by Nichole Medero."<<endl; //*HI, THAT'S ME :)
    cout<<"**********************************************"<<endl; 
    gameMenu(quest, questB, score, correct, incorrect, name); 
    //*return to game menu after this case/ function call  
}

void triviaGame(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { 
//*triviaGame function definition
//*initializes the trivia game  
    question1(quest, questB, score, correct, incorrect, name); //*question 1 function call
                                                //*arguments passed and initialized to 0
                                                //*for the first question
    //*Questions 2-10 called in the function preceeding it  
}

bool checkAns(char userA, char ans, int &score, int &correct, int &incorrect) {
    bool check = true; //variable to hold boolean value
    if(userA == ans) {
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*number of questions answered correcting incremented 
    } else {
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement user's score
        cout<<"Your score is now "<<score<<"."<<endl;  //*output current score
        incorrect++; //*number of questions answered incorrectly incremented
        check = false;
    }
    return check; //return variable
}

void question1(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*question 1 definition
    char userA; //*user answer
    char ans = 'a'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<quest[0]<<endl; //*question 1
    cout<<"a. Ed White \t b. Nichole Medero \t c. You \t d. None of the above"; //*question 1 choices
    cout<<endl; 
    cin>>userA; //*take in user's answer
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        question2(quest, questB, score, correct, incorrect, name); //*question 2 function call     
    } else { //*if the user's answer is incorrect   
        question2(quest, questB, score, correct, incorrect, name); //*question 2 function call
    }         
}

void question2(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*question 2 definition
    char userA; //*user answer
    char ans = 'b'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<quest[1]<<endl; //*question 2
    cout<<"a. Mount St. Helens \t b. Olympus Mons \t c. Krakatoa \t d. Kotopaxi"<<endl; //*question 2 choices
    cin>>userA; //*take in user's answer
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        question3(quest, questB, score, correct, incorrect, name); //*question 3 function call   
    } else { //*if the user's answer is incorrect
        question3(quest, questB, score, correct, incorrect, name); //*question 3 function call
    }
}

void question3(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*question 3 definition
    char userA; //*user answer
    char ans = 'a'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<quest[2]<<endl; //*question 3
    cout<<"a. Sally Ride \t b. Nichole Medero \t c. nichole medero \t d. NiChOlE mEdErO"<<endl;    //*question 3 choices
    cin>>userA; //*take in the user's answer
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        question4(quest, questB, score, correct, incorrect, name); //*question 4 function call
    } else { //*if the user's answer is incorrect
        question4(quest, questB, score, correct, incorrect, name); //*question 4 function call
    }
}

void question4(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*question 4 definition
    char userA; //*user answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<quest[3]<<endl; //*question 4
    cout<<"a. Earth \t b. Mars \t c. Mercury \t d. Neptune"<<endl;//*question 4 choices
    cin>>userA; //*take in user's choice
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        question5(quest, questB, score, correct, incorrect, name); //*question 5 function call 
    } else { //*if the user's answer is incorrect
        question5(quest, questB, score, correct, incorrect, name); //*question 5 function call
    }
}

void question5(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*question 5 definition
    char userA; //*user answer
    char ans = 'b'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<quest[4]<<endl; //*question 5
    cout<<"a. 3 weeks \t b. 437 days \t c. 9 months \t d. 3 years"<<endl;//*question 5 choices
    cin>>userA; //*take in user answer
    
    checkAns(userA,ans,score,correct,incorrect);
    
    initBonus(score); //*initBonus bool function call
    
    if (initBonus(score)) { //*if bool initBonus returns true
                cout<<"**********************************************"<<endl;
                cout<<"\t BONUS ROUND INITIALIZED:"<<endl;
                bonusQ1(quest, questB, score, correct, incorrect, name); //*bonus question 1 function call   
    } else { //*if bool initBonus returns false   
             gameSolution(quest, questB, score, correct, incorrect, name);   
             //*if bonus round is not initialized, immediately display game solution
    }
}

void bonusQ1(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { 
//*bonus 1 definition
//*only initialized if the initBonus function returns true
    char userA; //*user answer
    char ans = 'c'; //*correct answer
    cout<<questB[0]<<endl; //*bonus question 1
    cout<<"a. 1 \t b. 10 \t c. 181 \t d. 300"<<endl;//*bonus question 1 choices
    cin>>userA; //*take in user answer
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        bonusQ2(quest, questB, score, correct, incorrect, name); //*bonus question 2 function call
    } else { //*if the user's answer is incorrect
        bonusQ2(quest, questB, score, correct, incorrect, name); //*bonus question function call
    }
}

void bonusQ2(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*bonus 2 definition
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<questB[1]<<endl; //*bonus question 2
    cout<<"a. Mercury \t b. Uranus \t c. Jupiter \t d. Venus"<<endl; //*bonus question 2 choices
    cin>>userA; //*take in user answer
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        bonusQ3(quest, questB, score, correct, incorrect, name); //*bonus question 3 function call
    } else { //*if the user's answer is incorrect
        bonusQ3(quest, questB, score, correct, incorrect, name); //*bonus question 3 function call
    }
}

void bonusQ3(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*bonus 3 definition
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<questB[2]<<endl; //*bonus question 3
    cout<<"a. 2 \t b. 1 \t c. 12 \t d. 6"<<endl;//*bonus question 3 choices
    cin>>userA; //*take in user answer
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        bonusQ4(quest, questB, score, correct, incorrect, name); //*bonus question 4 function call
    } else { //*if the user's answer is incorrect
        bonusQ4(quest, questB, score, correct, incorrect, name); //*bonus question 4 function call
    }
}

void bonusQ4(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*bonus 4 definition
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<questB[3]<<endl; //*bonus question 4
    cout<<"a. Spacelab \t b. NASA \t c. Skylab \t d. None of the above"<<endl;//*bonus question 4choices
    cin>>userA; //*take in user input
    
    if(checkAns(userA,ans,score,correct,incorrect) == true) { //*if the user's answer is correct
        bonusQ5(quest, questB, score, correct, incorrect, name); //*bonus question 5 function call
    } else { //*if the user's answers is in
        bonusQ5(quest, questB, score, correct, incorrect, name); //*bonus question 5 function call
    }
}

void bonusQ5(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { //*bonus 5 definition
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<questB[4]<<endl; //*bonus 5 question
    cout<<"a. 1 day \t b. 12 hours \t c. 60 minutes \t d. 5 hours"<<endl;//*bonus 5 question choices
    cin>>userA; //*take in user's choice
    
    checkAns(userA,ans,score,correct,incorrect);
    
    if (initBonus(score)) { //*if the initBonus function returns true
        bonusgameSolution(quest, questB, score, correct, incorrect, name); 
        //*call the function that shows both regular and 
        //*bonus answers 1-10
    } else { //*if the initBonus function returns false
        gameSolution(quest, questB, score, correct, incorrect, name); 
        //*call the function that shows the regular trivia 
        //*game answers 1-5   
    }
}

bool initBonus(int score) { //*initBonus function definition
    bool initBonus; //*initialize variable to hold boolean value  
    if (score >= 400) { //*if score is >= 400 i.e., 4 questions are answered correctly
        initBonus = true;  //*initBonus returns true and bonus round is initialized
    } else { 
        initBonus = false; //*otherwise initBonus returns false 
                           //*and bonus round is not initialized
    }
    return initBonus; //*returns the value calculated
}

void gameSolution(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) {
//*gameSolution function definition
//*outputs the  solution to the regular questions
   cout<<"**********************************************"<<endl;
            cout<<"\t GAME SOLUTION"<<endl;
            ifstream file; //*Reading from file
            file.open("answers.txt"); //*open the answers.txt file
            char sol; //*initialize variable to hold data in answers.txt file
                file >> sol;  //*read answer to question 1
                    cout<<sol<<endl; //*output
                file >> sol; //*read answer to question 2
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 3
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 4
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 5
                    cout<<sol<<endl; //*output
            file.close(); //*close answers.txt
    gameOver(quest, questB, score, correct, incorrect, name); //*gameOver function call
}

void bonusgameSolution(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) {
//*bonusgameSolution function definition
//*outputs the solution to the regular questions and bonus questions
    cout<<"**********************************************"<<endl;
            cout<<"\t GAME SOLUTION"<<endl;
            ifstream file; //*Reading from file
            file.open("answersbonus.txt"); //*open answersbonus.txt file
            char sol; //*initialize character to hold data in answersbonus.txt file
                file >> sol;  //*answer to question 1
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 2
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 3
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 4
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to question 5
                    cout<<sol<<endl; //*output
                cout<<"--------BONUS--------"<<endl; //*bonus solution
                file >> sol; //*answer to bonus question 1
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to bonus question 2
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to bonus question 3
                    cout<<sol<<endl; //*output
                file >> sol; //*answer to bonus question 4
                    cout<<sol<<endl; //*output    
                file >> sol; //*answer to bonus question 5
                    cout<<sol<<endl; //*output     
            file.close(); //*close answersbonus.txt
            gameOver(quest, questB, score, correct, incorrect, name); //*gameOver function call  
}

void gameOver(string quest[], string questB[], int &score, int &correct, int &incorrect, string name) { 
//*gameOver function definition
    cout<<"----------CONGRATULATIONS----------"<<endl;
    for(int i = 0; i < 2; i++) { //*for loops for cat output bc why not!
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
        //*very important cat, if you delete the game will break!!!      
    }
    cout<<"Woo! Pusheen the Cat is happy that you have completed the game, " <<name<<"!"<<endl;
    
    if (initBonus(score)) { //*includes scores and questions from the bonus round
                            //*if applicable
        cout<<"Your final score: "<<score<<endl; //*display user's final score
        cout<<"You answered "<<correct<<" questions out of 10!"<<endl; 
        //*display total increment of correctly answered questions
        int total; //*total questions
        float perc; //*percentage of correct questions
        total = correct + incorrect; //*total calculation
        perc = (correct/static_cast<float>(total)) * 100; //*percentage calculation
        cout<<"Or " << perc << "% of the questions."<<endl; //display percentage
    } else { //*if bonus round was not initiated
        cout<<"Your final score: "<<score<<endl; //*display user's final score
        cout<<"You answered "<<correct<<" questions out of 5!"<<endl;
        //*display total increment of correctly answered questions
        int total; //*total questions
        float perc; //*percentage of correct questions
        total = correct + incorrect; //*total calculation
        perc = (correct/static_cast<float>(total)) * 100; //*percentage calculation
        cout<<"Or " << perc << "% of the questions."<<endl; //display percentage 
    }
    ofstream fileout; //*fileout initialized of type oftsream
    fileout.open("scores.txt"); //*output to scores.txt
    fileout <<name<<":"<< score<<endl; //*output score of the user
    fileout<<"**********************************************"<<endl;
    fileout<<"Your reward: A fun trick!"<<endl;
    fileout<<"Here is an array of numbers."<<endl;
    int array[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++) {
        fileout<<array[i];
    }
    int swap;
    
    for(int i = 0; i < 5; i++) { //first integer
        for(int j = i + 1; j < 5; j++) { //comparing integer (after)
            if(array[i] > array[j]) {
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;
            }
        }
    }
    fileout<<endl;
    fileout<<"Here is that same array reversed!"<<endl;
    for(int i = 0;i < 5; i++) {
        fileout<<array[i];
    }
    
}