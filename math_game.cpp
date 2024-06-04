#include <iostream> // stand for input output stream 
#include <cstdlib> // used to generate random numbers
#include <ctime> // contains function related to time srand(time(NULL)
#include <string> // contains string related functions

using namespace std; // prevent using multiple ::std;

// this function generates 5 addtion and subtraction question using random numbers
// a well-structured code using for loop and if else statement.
void levelOne(int& score) {
	system("cls");
	cout<<"========== Level 1: Addition and Subtraction ========="<<endl;
	cout<<"You will be given two random numbers between 1 and 100"<<endl;
	
	for(int i = 0; i < 5; i++){
		int num1 = rand() % 100 + 1;
		int num2 = rand() % 100 + 0;
		int mp = rand() % 2;	
		int ans, userAns;
		
		if(mp == 0){
			ans = num1 + num2;
			cout<<num1<<"+"<<num2<<"= ";
		}
		else {
			ans = num1-num2;
			cout<<num1<<"-"<<num2<<"= ";
		}	
		cin>>userAns;
		
		if(cin.fail()) {
			cout << "Invalid input! Please try again." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			system("pause");
			system("cls");
			continue;
		}	
		if(userAns == ans){
			cout<<"Correct!"<<endl;
			score+=2;
		}	
		else {
			cout<<"Wrong! the correct answer is "<<ans<<endl;
		}
		cout<<endl;
		system("pause");
		system("cls");	
	}
}

// this function generates 5 multiplication and subtraction question using random numbers
// a well-structured code using for loop and if else statement.
void levelTwo(int& score){
	system("cls");
	cout<<"======== Level 2: Multiplication and Division ======="<<endl;
	cout<<"You will be given two random numbers between 1 and 20"<<endl;
	
	for(int i = 0; i < 5; i++){
		int num1 = rand() % 20 + 2;
		int num2 = rand() % 20 + 1;
		int mp = rand() % 2;
		int ans, userAns;
		
		if(mp == 0){
			ans = num1*num2;
			cout<<num1<<"*"<<num2<<"= ";
		}
		else {
			ans = num1/num2;
			cout<<num1<<"/"<<num2<<"= ";
		}
		cin>>userAns;
		
		if(cin.fail()) {
			cout << "Invalid input! Please try again." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			system("pause");
			system("cls");
			continue;
		}
		if(userAns == ans){
			cout<<"Correct!"<<endl;
			score+=2;
		}	
		else {
			cout<<"Wrong! the correct answer is "<<ans<<endl;
		}
		cout<<endl;
		system("pause");
		system("cls");	
	}
}

// this function recursively calculates the factorial of the input number
int recursion(int num){
	if(num == 0){
		return 1;
	}
	else {
		return num * recursion(num-1);
	}
}

// this function generates recursive question using random numbers
// a well-structured code using for loop and if else statement.
void levelThree(int& score){
	system("cls");
	cout<<"=============== Level 3: Recursion ==============="<<endl;
	cout<<"You will be given a random number between 1 and 10"<<endl;
	for(int i = 0; i < 3; i++){
		int num = rand() % 10 + 1;
		int ans, userAns;
		
		ans = recursion(num);
		cout<<"What is the value of "<<num<<"! (factorial of "<<num<<")? ";
		cin>>userAns;
		
		if(cin.fail()) {
			cout << "Invalid input! Please try again." << endl;
			cin.clear();
			cin.ignore(256, '\n');
			system("pause");
			system("cls");
			continue;
		}
		if(userAns == ans){
			cout<<"Correct!"<<endl;
			score+=5;
		}	
		else {
			cout<<"Wrong! the correct answer is "<<ans<<endl;
		}
		cout<<endl;	 
		system("\npause");
		system("cls");
	}
}

// this function first output to be printed and guide user how to play the game.
void mathGame(){
	char choice;

	cout<<"===================="<<endl;
	cout<<"WELCOME TO MATH GAME"<<endl;
	cout<<"===learn the game==="<<endl;
	cout<<"A. Jump to the Guide"<<endl;
	cout<<"B. Skip Guide"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	system("cls");
	
	if(choice == 'A' || choice == 'a'){
		cout<<"Welcome to Math Game!"<<endl;
		cout<<"In this game, you will be asked to solve math problems."<<endl;
		cout<<"There are three levels to choose from, each with increasing difficulty.\n"<<endl;
		
		system("pause");
		system("cls");
		
		cout<<"Level 1 and level 2 consist of five questions, one correct answer equivalent to 2 points"<<endl;
		cout<<"Level 3 consist of three questions to solve, one correct answer equivalent to 5 points"<<endl;
		cout<<"You will be given a total score base on the amount of correct answers\n"<<endl;
		
		system("pause");
		system("cls");
		
		cout<<"Let's start with the (Basic Operations)"<<endl;
		cout<<"You will be asked to perform simple addtion, subtraction, multiplication, and division\n"<<endl;
		
		system("pause");
		system("cls");
		
		cout<<"Level 1: Addition and Subtraction"<<endl;
		cout<<"You will be solving only the Addition and Subtraction\n"<<endl;
		
		system("pause");
		system("cls");
		
		cout<<"Level 2: Multiplication and Division"<<endl;
		cout<<"You will be solving Multiplication and Division\n"<<endl;
		
		system("pause");
		system("cls");
		
		cout<<"Level 3: Recursion"<<endl;
		cout<<"You will be solving recursion problems"<<endl;
		cout<<"Recursion step is F(n) = n + F(n-1)"<<endl;
		cout<<"\nExample:"<<endl;
		cout<<"What is the factorial of 2!: the answer is 2"<<endl;
		cout<<"2x0 - 0 if n = 0 return 1, 2x1 - 2. we used 2 factorial here"<<endl;
		cout<<"factorial(0)(1). this is the recursive logic to find the factorial 2\n"<<endl;
		
		system("pause");
		system("cls");
		
		cout<<"Note: each levels have random number while using the indicated operations."<<endl;
		cout<<"but the level 3 has a difficult level which you will be solving a recursion output"<<endl;
		
		cout<<"\nDisclaimer: solving recursion is a fundamental to programming. This means all programmer should know the basic recursion"<<endl;
		cout<<"If you're new to programming, you might think solving rucursion is hard, else if(!) solving recursion is easy for you :)\n"<<endl;
		
		cout<<"Good luck!\n"<<endl;
		
		system("pause");
		system("cls");	
	}
	else if(choice == 'B' || choice == 'b'){
		return;
	}
	else {
		cout<<"Invalid choice. Please try again."<<endl;
		return mathGame();
	}
}

int main(){
	
	srand(time(NULL)); // initializes the randum number with a seed value that is based on the current time.
	int userCount = 1;
	int score = 0;
	
	mathGame(); // calls the mathGame function
	
	char play = 'Y';
	// run the loop automatically until user enter's N' or 'n'.
	while(play == 'Y' || play == 'y'){ 
		char level;
		string name;
		
		
		cout<<"Welcome to Math Game"<<endl;
		cout<<"Enter your username: ";
		cin>>name;
		system("cls");
		cout<<"Welcome, "<<name<<"!"<<endl;
		cout<<"=== Select your level ==="<<endl;
		cout<<"A. Level 1"<<endl;
		cout<<"B. Level 2"<<endl;
		cout<<"C. Level 3"<<endl;
		cout<<"Enter level: ";
		cin>>level;
	
		switch (level){
			case 'A':
			case 'a':
			case '1':
				levelOne(score);
				break;
			case 'B':
			case 'b':
			case '2':
				levelTwo(score);
				break;
			case 'C':
			case 'c':
			case '3':
				levelThree(score);
				break;
			default:
				cout<<"Invalid input! Please try again."<<endl;
				system("pause");
				system("cls");
				continue;
		}
		cout<<"Congrats "<<name<<" your total score is "<<score<<endl;
		cout<<"Do you want to play again? (Y/N): ";
		cin>>play;
	}
	cout<<"Thank you for playing!"<<endl;
	return 0;
}
