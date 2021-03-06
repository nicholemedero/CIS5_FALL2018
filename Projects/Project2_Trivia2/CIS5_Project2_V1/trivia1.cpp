//This is the final version of project 1 and the starting point for project 2

/* 
 * File:   triviagame10.cpp
 * Author: Nichole Medero
 * Created on December 10, 2018, 02:08 PM
 * Purpose: CIS5 Project 2 Trivia Game //* Version 1
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

using namespace std;

//*Main Menu Prototypes
    void gameMenu(int &score, int &correct, int &incorrect, string name);
    void gameTutorial(int &score, int &correct, int &incorrect, string name);
    void aboutProg(int &score, int &correct, int &incorrect, string name);
    void triviaGame(int &score, int &correct, int &incorrect, string name);

//*Trivia Question Prototypes for 5 questions
    void question1(int &score, int &correct, int &incorrect, string name);
    void question2(int &score, int &correct, int &incorrect, string name);
    void question3(int &score, int &correct, int &incorrect, string name);
    void question4(int &score, int &correct, int &incorrect, string name);
    void question5(int &score, int &correct, int &incorrect, string name);
    
//*Bonus Trivia Question Prototypes for 5 Questions
    bool initBonus(int score);
    void bonusQ1(int &score, int &correct, int &incorrect, string name);
    void bonusQ2(int &score, int &correct, int &incorrect, string name);
    void bonusQ3(int &score, int &correct, int &incorrect, string name);
    void bonusQ4(int &score, int &correct, int &incorrect, string name);
    void bonusQ5(int &score, int &correct, int &incorrect, string name);

//*Solutions for regular questions and bonus game questions Prototypes
    void gameSolution(int &score, int &correct, int &incorrect, string name);
    void bonusgameSolution(int &score, int &correct, int &incorrect, string name);
    
 //*Game Over Screen Prototype
    void gameOver(int &score, int &correct, int &incorrect, string name);

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
    
    gameMenu(score, correct, incorrect, name); //*game menu function call
    //*all other function calls are held within the preceeding functions
    
    //*exit game
    return 0; 
}


void gameMenu(int &score, int &correct, int &incorrect, string name) { 
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
            gameTutorial(score, correct, incorrect, name);break;
        case 2: //*about the programmer case 2 
            aboutProg(score, correct, incorrect, name);break;
        case 3: //*initialize game case 3
            triviaGame(score, correct, incorrect, name);break;
        default:
            cout<<"That is not a valid menu choice."<<endl;
            //*please read the instructions and follow valid input requirements
        
    }
    
}

void gameTutorial(int &score, int &correct, int &incorrect, string name) { 
//*gameTutorial function definition
    
    cout<<"\t **GAME TUTORIAL**"<<endl; //*description of point calculation and requirements
    cout<<"Each question, answered correctly, is worth 100 points."<<endl;
    cout<<"Each question, answered incorrectly, is a 50 point deduction."<<endl;
    cout<<"All questions are multiple choice. Be sure to input a single character."<<endl;
    cout<<"Try to get at least 4 questions correct to release a bonus round of questions!"<<endl;
    cout<<"**********************************************"<<endl;
    
    gameMenu(score, correct, incorrect, name); 
    //*return to game menu after this case/function is called
    
}

void aboutProg(int &score, int &correct, int &incorrect, string name) {
//*aboutProg function definition
    
    cout<<"This project is for CIS-5 of Fall 2018."<<endl; //*project assignment date
    cout<<"Written by Nichole Medero."<<endl; //*HI, THAT'S ME :)
    cout<<"**********************************************"<<endl;
    
    gameMenu(score, correct, incorrect, name); 
    //*return to game menu after this case/ function call
        
    }

void triviaGame(int &score, int &correct, int &incorrect, string name) { 
//*triviaGame function definition
//*initializes the trivia game
    
    question1(score, correct, incorrect, name); //*question 1 function call
                                                //*arguments passed and initialized to 0
                                                //*for the first question
    //*Questions 2-10 called in the function preceeding it
    
}

void question1(int &score, int &correct, int &incorrect, string name) { //*question 1 definition
    
    char userA; //*user answer
    char ans = 'a'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"Who made the first U.S. spacewalk?"<<endl; //*question 1
    cout<<"a. \t Ed White"<<endl; //*question 1 choices
    cout<<"b. \t Nichole Medero"<<endl;
    cout<<"c. \t You"<<endl;
    cout<<"d. \t None of the above"<<endl;
    cin>>userA; //*take in user's answer
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*number of questions answered correcting incremented
        
        question2(score, correct, incorrect, name); //*question 2 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement user's score
        cout<<"Your score is now "<<score<<"."<<endl;  //*output current score
        incorrect++; //*number of questions answered incorrectly incremented
        
        question2(score, correct, incorrect, name); //*question 2 function call
    }
            
}

void question2(int &score, int &correct, int &incorrect, string name) { //*question 2 definition
    
    char userA; //*user answer
    char ans = 'b'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"What is the name of the largest volcano in the solar system?"<<endl; //*question 2
    cout<<"a. \t Mount St. Helens"<<endl; //*question 2 choices
    cout<<"b. \t Olympus Mons"<<endl;
    cout<<"c. \t Krakatoa"<<endl;
    cout<<"d. \t Kotopaxi"<<endl;
    cin>>userA; //*take in user's answer
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's answer
        cout<<"Your score is now "<<score<<"!"<<endl;  //*output current score
        correct++; //*correct questions incremented
        
        question3(score, correct, incorrect, name); //*question 3 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement user's score
        cout<<"Your score is now "<<score<<"."<<endl;  //*output current score
        incorrect++; //*incorrect questions increment
        
        question3(score, correct, incorrect, name); //*question 3 function call
    }
}

void question3(int &score, int &correct, int &incorrect, string name) { //*question 3 definition
    
    char userA; //*user answer
    char ans = 'a'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"Who was the first American woman in space?"<<endl; //*question 3
    cout<<"a. \t Sally Ride"<<endl; //*question 3 choices
    cout<<"b. \t Nichole Medero"<<endl;
    cout<<"c. \t nichole medero"<<endl;
    cout<<"d. \t NiChOlE mEdErO"<<endl;
    cin>>userA; //*take in the user's answer
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl;  //*output current score
        correct++; //*correct questions increment
        
        question4(score, correct, incorrect, name); //*question 4 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl;  //*output current score
        incorrect++; //*incorrect questions decrement
        
        question4(score, correct, incorrect, name); //*question 4 function call
    }
}

void question4(int &score, int &correct, int &incorrect, string name) { //*question 4 definition
    
    char userA; //*user answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"What is the smallest planet in our solar system?"<<endl; //*question 4
    cout<<"a. \t Earth"<<endl; //*question 4 choices
    cout<<"b. \t Mars"<<endl;
    cout<<"c. \t Mercury"<<endl;
    cout<<"d. \t Neptune"<<endl;
    cin>>userA; //*take in user's choice
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl;  //*output current score
        correct++; //*correct questions increment
        
        question5(score, correct, incorrect, name); //*question 5 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl;  //*output current score
        incorrect++; //*incorrect questions increment
        
        question5(score, correct, incorrect, name); //*question 5 function call
    }
}

void question5(int &score, int &correct, int &incorrect, string name) { //*question 5 definition
    
    char userA; //*user answer
    char ans = 'b'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"What is the longest time a human has been sent to space?"<<endl; //*question 5
    cout<<"a. \t 3 weeks"<<endl; //*question 5 choices
    cout<<"b. \t 437 days"<<endl;
    cout<<"c. \t 9 months"<<endl;
    cout<<"d. \t 3 years"<<endl;
    cin>>userA; //*take in user answer
    
    if(userA == ans) { //*if the user's answer is correct
        
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*increment correctly answered questions
         
        
    } else { //*if the user's answer is incorrect
        
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl; //*output current score
        incorrect++; //*increment incorrectly answered questions
        
    }
    
    initBonus(score); //*initBonus bool function call
    
    if (initBonus(score)) { //*if bool initBonus returns true
                
                cout<<"**********************************************"<<endl;
                cout<<"\t BONUS ROUND INITIALIZED:"<<endl;
                bonusQ1(score, correct, incorrect, name); //*bonus question 1 function call
                
    } else { //*if bool initBonus returns false
                
             gameSolution(score, correct, incorrect, name);   
             //*if bonus round is not initialized, immediately display game solution
    }
}

void bonusQ1(int &score, int &correct, int &incorrect, string name) { 
//*bonus 1 definition
//*only initialized if the initBonus function returns true
    
    char userA; //*user answer
    char ans = 'c'; //*correct answer
    cout<<"How many moons are in our solar system?"<<endl; //*bonus question 1
    cout<<"a. \t 1"<<endl; //*bonus question 1 choices
    cout<<"b. \t 10"<<endl;
    cout<<"c. \t 181"<<endl;
    cout<<"d. \t 300"<<endl;
    cin>>userA; //*take in user answer
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*continue to increment correctly answered questions
        
        bonusQ2(score, correct, incorrect, name); //*bonus question 2 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl; //*output current score
        incorrect++; //*continue to increment the incorrectly answered questions
        
        bonusQ2(score, correct, incorrect, name); //*bonus question function call
    }
}

void bonusQ2(int &score, int &correct, int &incorrect, string name) { //*bonus 2 definition
    
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"What is the largest planet in our solar system?"<<endl; //*bonus question 2
    cout<<"a. \t Mercury"<<endl; //*bonus question 2 choices
    cout<<"b. \t Uranus"<<endl;
    cout<<"c. \t Jupiter"<<endl;
    cout<<"d. \t Venus"<<endl;
    cin>>userA; //*take in user answer
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*increment the number of correctly answered questions
        
        bonusQ3(score, correct, incorrect, name); //*bonus question 3 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl; //*output current score
        incorrect++; //*increment the number of incorrectly answered questions
        
        bonusQ3(score, correct, incorrect, name); //*bonus question 3 function call
    }
}

void bonusQ3(int &score, int &correct, int &incorrect, string name) { //*bonus 3 definition
    
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"How many people have walked on the moon?"<<endl; //*bonus question 3
    cout<<"a. \t 2"<<endl; //*bonus question 3 choices
    cout<<"b. \t 1"<<endl;
    cout<<"c. \t 12"<<endl;
    cout<<"d. \t 6"<<endl;
    cin>>userA; //*take in user answer
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*increment the number of correctly answered questions
        
        bonusQ4(score, correct, incorrect, name); //*bonus question 4 function call
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl; //*output current score
        incorrect++; //*increment the number of incorrectly answered questions
        
        bonusQ4(score, correct, incorrect, name); //*bonus question 4 function call
    }
}

void bonusQ4(int &score, int &correct, int &incorrect, string name) { //*bonus 4 definition
    
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"What was America's first space station called?"<<endl; //*bonus question 4
    cout<<"a. \t Spacelab"<<endl; //*bonus question 4choices
    cout<<"b. \t NASA"<<endl;
    cout<<"c. \t Skylab"<<endl;
    cout<<"d. \t None of the above"<<endl;
    cin>>userA; //*take in user input
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*increment the number of correctly answered questions
        
        bonusQ5(score, correct, incorrect, name); //*bonus question 5 function call
        
    } else { //*if the user's answers is in
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl; //*output current score
        incorrect++; //*increment the number
        
        bonusQ5(score, correct, incorrect, name); //*bonus question 5 function call
    }
}

void bonusQ5(int &score, int &correct, int &incorrect, string name) { //*bonus 5 definition
    
    char userA; //*user's answer
    char ans = 'c'; //*correct answer
    cout<<"**********************************************"<<endl;
    cout<<"How long does it take for the space shuttle to orbit Earth?"<<endl; //*bonus 5 question
    cout<<"a. \t 1 day"<<endl; //*bonus 5 question choices
    cout<<"b. \t 12 hours"<<endl;
    cout<<"c. \t 60 minutes"<<endl;
    cout<<"d. \t 5 hours"<<endl;
    cin>>userA; //*take in user's choice
    
    if(userA == ans) { //*if the user's answer is correct
        cout<<"Correct answer!"<<endl;
        score += 100; //*increment the user's score
        cout<<"Your score is now "<<score<<"!"<<endl; //*output current score
        correct++; //*increment the number of correctly answered questions
        
    } else { //*if the user's answer is incorrect
        cout<<"Incorrect answer!"<<endl;
        score -= 50; //*decrement the user's score
        cout<<"Your score is now "<<score<<"."<<endl; //*output current score 
        incorrect++; //*increment the number of incorrectly answered questions
        
    }
    
    if (initBonus(score)) { //*if the initBonus function returns true

        bonusgameSolution(score, correct, incorrect, name); 
        //*call the function that shows both regular and 
        //*bonus answers 1-10
        
    } else { //*if the initBonus function returns false
        
        gameSolution(score, correct, incorrect, name); 
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

void gameSolution(int &score, int &correct, int &incorrect, string name) {
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
            
    gameOver(score, correct, incorrect, name); //*gameOver function call
}

void bonusgameSolution(int &score, int &correct, int &incorrect, string name) {
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
            
            gameOver(score, correct, incorrect, name); //*gameOver function call
    
}

void gameOver(int &score, int &correct, int &incorrect, string name) { 
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
    fileout << name << ":" << endl; //*output name of the user
    fileout << score; //*output score of the user
    
}