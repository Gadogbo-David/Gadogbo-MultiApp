// A Personal Project That Contains Most Things I Have Learnt In C++

// A Header FIle That Allows The Usage Of Input And Out-Put Operations 
#include <iostream>

//A Header File That Allows The Usage Of String Class
#include <string>

// A Header File That Allows The Usage Of Already Made Functions
#include <algorithm>

//Allows You To Be Able To Use Srand And Rand
#include <cstdlib>

//Allows You To Be Able To Use Calendar Time Null
#include <ctime>  

//Allows You To Be Able To Format Output
#include <iomanip>

// Allows You To Type Output And Input Operations Without Their Actual Form
using namespace std;

// Declaring The Functions Each Game Would Use To Run
void Calculator();
void quizApp();
void passwordGenerator();
void BankingProgramme();


int main(){
	// Contains Many Projects That Allows The User To Choose What They Want To Do 
	
	//Declaring Variables
	int option;
	float firistDigit,secondDigit;
    bool running = true;	
	
	// Using Do while Loops To Make The Code Run Untill The User Decides To Stop
	 
			do{
			
	// Game Output
	
	cout << endl;
    cout << "********************************************* \n";	
	cout << "****                                   ****** \n";
	cout << "****     CHOOSE THE GAME YOU WANT      ****** \n";
	cout << "****                                   ****** \n";
	cout << "********************************************* \n";
	cout << endl;
	
	// Asking The User To Select A Choice
	cout << "1. Calculator App \n";
	cout << "2. Quiz App \n";
	cout << "3. Random Password Generator \n";
	cout << "4. Banking Programme \n";
	cout << "5. Exit Programme \n";
	cin >> option;
	
	// Using Switch Case To Perform Some Functions Untill The User Decides To Stop
	switch(option){
		case 1:
			Calculator();
			break;
			
		case 2:
		    quizApp();
			break;	
			
		case 3:
		    passwordGenerator();
		    break;
		    
		case 4:
		    BankingProgramme();
		    break;    
	
		case 5:
		    cout << "Thank You For Playing This Game \n";
			cout << "Game By: David Gadogbo \n";
			running = false;
			break;
		
		default:
		    cout << " Please Enter A valid Option \n"; 		
		
	}
	
    

	  
}while(!running == false);
	
	return 0;
}

// Making The Function Define it Purpose

void Calculator(){
    // Declaring Variables
	double firstDigit,secondDigit;
	int option;
   	
	// Output Of The calculator programme
    cout << "********************************************* \n";	
	cout << "****                                   ****** \n";
	cout << "****         THE CALCULATOR APP        ****** \n";
	cout << "****                                   ****** \n";
	cout << "********************************************* \n";	
	cout << endl;
	
	cout << "Enter First Digit: \n";
	cin >> firstDigit;
			
	cout << "Enter Second Digit: \n";
	cin >> secondDigit;
	
	cout << endl;
	cout << "Select An Operation You Would Like To Perform \n";
	cout << " 1. Addition [+] \n";
	cout << " 2. Subtraction [-] \n";
	cout << " 3. Multiplication [*] \n";
	cout << " 4. Division [/] \n";
	cout << " 5. Exit \n";

	// Accepting User Input
	cin >> option;
	
	//Using Switch Case To Decide What To do 
	switch(option){
		case 1:
			cout << " The Addition Of " << firstDigit << " and " << secondDigit << " is = " << firstDigit + secondDigit;
			cout << endl;
            break;
			
		case 2:
		    cout << "The Subtraction Of " << firstDigit << " and " << secondDigit << " is = " << firstDigit - secondDigit;
		    cout << endl;
			break;	
			
		case 3:
		    cout << "The Multiplication Of " << firstDigit << " and " << secondDigit << " is = " << firstDigit * secondDigit;
		    cout << endl;
			break;
			
		case 4:
		    cout << "The Division Of " << firstDigit << " and " << secondDigit << " is = " << firstDigit / secondDigit;
		    cout << endl;
			break;
		
		default:
		    cout << "Please Enter A Valid Digit !!!!! " << endl; 						
						
	}
	
}

void quizApp(){
	// The Quiz App Output.....
	
	cout << "********************************************* \n";	
	cout << "****                                   ****** \n";
	cout << "****            THE QUIZ APP           ****** \n";
	cout << "****                                   ****** \n";
	cout << "********************************************* \n";
	cout << endl;
	
	// Quiz Questions
	
	string question[] = {"1.Which country won the first ever FIFA World Cup in 1930?",
	                     "2.Who is the all-time top scorer in the UEFA Champions League?",
						 "3.Which Player is known as the Egyptian King?",
						 "4.In football,what is the maximun number of players a team can have on the pitch at one time(including a goalkeeper)?",
						 "5.Which club has won the most English Premier League Titles since its Inception in 1992?"};
	
	// Quiz Options
	
	string options[][5] = {{"A.Argentina","B.Portugal","C.France","D.Uruguay"},
	                      {"A.Robert Lewandoski","B.Kylian Mbappe","C.Cristiano Ronaldo","D.Lionel Messi"},
	                      {"A.Mohammed Salah","B.Mohammed Kudus","C.Omar Mamoush","D.Frank Lampard"},
	                      {"A.12","B.11","C,15","D.16"},
	                      {"A.Manchester United","B.Liverpool","C.Manchester City","D.Chelsea"}
						  };
	
	//Quiz Answers
		  
	char answers[] = {'D','C','A','B','A'};

       // Using A For loop To Display All The Elements Of The Arrays
       char guess;
       int attempts = 0;
       int correct = 0;
       
      for( int i = 0; i < sizeof(question)/sizeof(question[0]); i++){
      	cout << question[i] << endl;
      	
      	for( int j = 0; j < sizeof(options)/sizeof(options[0]); j++){
      		cout << options[i][j] << endl;
      		
			  }
			  
		// Accepting user input to know what the choose
		cout << "Please Enter Only Capital Letters Options [A - D] \n"; 
	  	cin >> guess;
	  	
	  	 // Using If Statements To Check If The Answer IS correct Or Not
	  if( guess == answers[i] ){
	  	correct++;
	  	cout << "CORRECT \n";
	  	cout << endl;
	  	
	 
	  }
	  else{
	  	attempts++;
	  	cout << "WRONG \n" << "CORRECT ANSWER: " <<answers[i] << endl;
	  	cout << endl;
	  	
	  }
			
	
}			

  // Displaying The User Results And Score
	  
	cout << "************************************************ \n";
	cout << "**** CORRECT : " <<  correct << endl;
	cout << "**** Attempts: " << attempts << endl;
	cout << "**** TOTAL QUESTIONS: " << attempts + correct << endl;	
	cout << "************************************************ \n";
         	 
						 
}

void passwordGenerator(){
	// Declaring Variables
	int option;
	string includeNumbers = "0123456789";
	string includeSymbols = "~`!@#$%^&*()_+=-/*-+][\';/.,{}:?><";
	string includeCaps = "QWERTYUIOPLKJHGFDSAZXCVBNM";
	string includeLows = "qwertyuioplkjhgfdsazxcvbnm";
	string word = includeNumbers + includeSymbols + includeCaps + includeLows;

	string password = "";
	
	// Password Generator  Output.....
	cout << "\n********************************************* \n";	
	cout << "****                                   ****** \n";
	cout << "****     Random Password Generator     ****** \n";
	cout << "****                                   ****** \n";
	cout << "********************************************* \n";
	cout << endl;
	
	// Taking Length Of Password From User
	cout << "Please Enter The Length Of Your Password \n";
	cin >> option;
	
	// Checking To Validate The User Input
	if(option < 0){ 
	cout << "Enter A Valid Password Length";
		
	}
	else{
	// Allows You To Be Able To Use The Current Calendar Time 
	srand(time(0));
	
	//Using For Loop To DIsplay All The Elements And Generate A Random Password
	for(int i = 0; i < option; i++){
		
	int randomNumber = rand() % word.length();
	password += word[randomNumber];
		
		
	}
       }
       
       //Displaying The Generated OutPut
       cout << "\n Your Generated Password Is: " + password + "\n";



	
	
}
	
	
	void BankingProgramme(){
		
		int option;
		double balance = 0.0;
		double amount;
		double depamount;
		bool running = true;
		
		
		while(running){
		
			// Output Of The Banking programme
    cout << "********************************************* \n";	
	cout << "****                                   ****** \n";
	cout << "****         CODE BANK LIMITED         ****** \n";
	cout << "****                                   ****** \n";
	cout << "********************************************* \n";	
	cout << endl;
	
	//Out the banking options
	cout << "1. Check Balance\n";
	cout << "2. Withdraw  \n";
	cout << "3. Deposit \n";
	cout << "4. Exit Banking Programme \n";
	cin >> option;
	
	
	
	switch(option){
		case 1:
			cout << "Your Balance Is GHC " << balance;
			cout << endl;
			break;
			
		case 2:{	
		cout << "Enter Amount To Withdraw: ";
		cin >> amount;
		
		if(amount < 0){
			cout << "Please Enter Valid Amount To Withdraw \n";
			
		}
		else if (amount > balance ){
			cout << "Insufficient Balance";
		}
		else{
			balance -= amount;
			cout << "Amount Of GHC " << amount << "\nWithdral Done \n";
			cout << "Your Balance Is " << balance;
		}
		cout << endl;
		break;
	}
	
	    case 3:{
	    	cout << "Enter Amount To Deposit: ";
	    	cin >> depamount;
	    	
	    	if(depamount < 0){
	    		cout << "Enter Valid Amount To Deposit \n";
			}
			else{
				balance += depamount; 
				cout << "Amount Of GHC " << depamount << " \nDeposited Done \n";
				cout << "Your Balance Is " << balance;
			}
			cout << endl;	
			break;
		}
		
		case 4:{
			cout << "Thank You For Visiting Code Bank Limited \n";
			cout << "Come Back Next Time \n";
			running = false;
			cout << endl;
			break;
		}
		
		default: cout << "Please Enter A Valid Input \n";
			
		
		
	}	
	
}	}
	
	

