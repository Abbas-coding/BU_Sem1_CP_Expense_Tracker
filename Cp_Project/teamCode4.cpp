//#include <iostream>
//#include <string>
//#include<Windows.h> // to have better control of the console window for eg to change color or move to a location on the console window
//#include<conio.h> // to take key input like arrow keys
//#include<sstream> // for string to number conversion
//#include <fstream>
//#include<vector>
//#include <iomanip>
//using namespace std;
//// Global variables
//string fileName;
//// structures
//struct Expense {
//	string user;
//	string category;
//	string description;
//	double amount;
//	string date;
//	string designation; // where you are spending it on!
//};
//struct FamilyMember {
//	string user;
//	string name;
//	Expense famExpenses[100];
//	vector<Expense> expenses; // A vector of Expense structures
//};
//struct users {
//	string username;
//	string password;
//	int familymembers;
//	double income;
//	string currency;
//	vector<Expense> expenses; // A vector of Expense structures
//	vector<FamilyMember> familyMembers; // A vector of FamilyMember structures
//}userInfo;
//string username, filename;
//string password;
////Savings & Debt
//double saving, debt;
//double salary;
//void usersaving();
//void userdebt();
//// Function Declarations 
//// Utility Functions
//void color(int color);
//void gotoxy(int x, int y);
//bool checkUsername(const string& username);
//bool startsWithLetters(const string& str);
//// function to add expenses
//void addExpense(string category, string fileName);
//// function to update,delete expenses
//void updateExpense(string category, string fileName);
//void deleteExpense(string category, string fileName);
////function to search 
//void searchExpense(string fileName);
//vector<Expense> readExpensesFromFile(string fileName);
//void viewCategoryExpense(string category, string fileName);
//void viewExpenses();
//// Welcome Screen
//int welcome(); // initial screen that user will see once the program starts
//// All menus
//bool menu1(int choose); // Login or Signup
//void menu2();			// display Categories and Add/view expenses
//void menu3(string action);
//bool registerUser(); // Sign UP 
//bool loginUser(); // Login 
//bool forgetUser();
//
//
//void main()
//{
//	int action;
//	int log = welcome(); // user selects an option i.e Login / signup
//	if (menu1(log)) {
//		int Set[9] = { 7,7,7,7,7,7,7,7,7 };
//		int counter = 1;
//		char key;
//
//		bool exit = false;
//		do
//		{
//			system("cls");
//			cout << "\t\tPersonal Expense Tracker\t\n\n";
//			for (int i = 0;;) {
//
//				gotoxy(10, 4);
//				color(Set[0]);
//				cout << "1. Add Expense";
//
//
//				gotoxy(28, 4);
//				color(Set[1]);
//				cout << "\t 2. View Expense \n\t";
//
//				gotoxy(10, 6);
//				color(Set[2]);
//				cout << "3. Update Expense ";
//
//				gotoxy(28, 6);
//				color(Set[3]);
//				cout << "\t 4. Delete Expense \n\t";
//
//				gotoxy(10, 8);
//				color(Set[4]);
//				cout << "5. Generate Report\n\t";
//
//				gotoxy(28, 8);
//				color(Set[5]);
//				cout << "\t 6. View Savings\n\t";
//
//				gotoxy(10, 10);
//				color(Set[6]);
//				cout << "7. View Debts\n\t";
//
//				gotoxy(28, 10);
//				color(Set[7]);
//				cout << "\t 8.Search Expense\n";
//
//				gotoxy(10, 12);
//				color(Set[8]);
//				cout << "9. Exit\n";
//
//				key = _getch();
//
//				if (key == 75 && (counter == 2 || counter == 4 || counter == 6 || counter == 8)) { // Left arrow key
//					counter--;
//				}
//				if (key == 77 && (counter == 1 || counter == 3 || counter == 5 || counter == 7)) { // Right arrow key
//					counter++;
//				}
//				if (key == 72 && (counter > 2)) { // Up arrow key
//					counter -= 2;
//				}
//				if (key == 80 && (counter < 8)) { // Down arrow key
//					counter += 2;
//				}
//				if (key == '\r') { // '\z' carriage return OR Enter key
//					action = counter;
//					color(7);
//					break;
//				}
//				// by default color white
//				for (int i = 0; i < 9; i++) {
//					Set[i] = 7;
//				}
//				// Set current selection to red
//				if (counter >= 1 && counter <= 9) {
//					Set[counter - 1] = 12; // Red color
//				}
//			}
//			switch (action)
//			{
//			case 1:
//			{
//				menu2();
//				break; // user gets choices to choose from to add expenses
//			}
//			case 2:
//			{
//				viewExpenses();
//				break;
//			}
//			case 3:
//			{
//				menu3("update");
//
//				break;
//			}
//			case 4:
//			{
//				menu3("delete");
//				break;
//			}
//			case 5:
//			{
//				break;
//			}
//			case 6:
//			{
//				usersaving();
//				break;
//			}
//			case 7:
//			{
//				userdebt();
//				break;
//			}
//			case 8:
//			{
//				searchExpense(fileName);
//				break;
//			}
//			case 9:
//			{
//				exit = true;
//				cout << "Have a good day!" << endl;
//				break;
//			}
//
//			}
//		} while (!exit);
//		system("pause");
//	}
//
//}
//
//// function to set color
//void color(int color) {
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//// function to go to a location on the console
//void gotoxy(int x, int y) {
//	COORD c;
//	c.X = x;
//	c.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
//
//// welcome screen
//int welcome() {
//	int Set[] = { 7,7,7,7 }; // color code for white
//	int counter = 1; // to keep track
//	char key; // for arrow key input
//
//	int log;
//	cout << "\t\tPersonal Expense Tracker\t\n\n\tSolution for all your finances and budgeting\n\n";
//	cout << "\tAlready have an account?\n\n\tLogin or register an account to continue.\n\n";
//	//cout << "\t  1. Login\t 2. Register an account\n\t";
//	for (int i = 0;;) {
//
//		gotoxy(10, 8);
//		color(Set[0]);
//		cout << "1. Login";
//
//
//		gotoxy(28, 8);
//		color(Set[1]);
//		cout << "\t 2. register an account\n\t";
//
//		gotoxy(10, 10);
//		color(Set[2]);
//		cout << "3. Forget Password";
//
//		gotoxy(28, 10);
//		color(Set[3]);
//		cout << "\t 4. Exit\n\t";
//
//		key = _getch();
//
//		if (key == 75 && (counter == 2 || counter == 4)) { //72 up Arr key, 75 left key
//			counter--;
//		}
//		if (key == 77 && (counter == 1 || counter == 3)) { //80 down Arr key, 77 right key
//			counter++;
//		}
//		if (key == 72 && (counter == 3 || counter == 4)) { //72 up Arr key, 75 left key
//			counter--;
//			counter--;
//		}
//		if (key == 80 && (counter == 1 || counter == 2)) { //80 down Arr key, 77 right key
//			counter++;
//			counter++;
//		}
//		if (key == '\r') { // '\z' carriage return OR Enter key
//			log = counter;
//			color(7);
//			return log;
//			break;
//		}
//		// by default color white
//		Set[0] = 7;
//		Set[1] = 7;
//		Set[2] = 7;
//		Set[3] = 7;
//
//		if (counter == 1) {
//			Set[0] = 12; // setting color to red
//		}
//		if (counter == 2) {
//			Set[1] = 12; // setting color to red
//		}
//		if (counter == 3) {
//			Set[2] = 12; // setting color to red
//		}
//		if (counter == 4) {
//			Set[3] = 12; // setting color to red
//		}
//	}
//}
//
//
//// Menu 1
//
//bool menu1(int choose) {
//
//	switch (choose) {
//	case 2:
//	{
//		if (registerUser()) {
//			if (loginUser()) {
//				return true;
//			}
//		}
//		return false;
//		break;
//	}
//	case 1:
//	{
//
//		if (loginUser())
//		{
//			return true;
//		}
//		else {
//			cout << "You cannot Log in" << endl;
//			return false;
//		}
//		break;
//	}
//	case 3:
//	{
//		if (forgetUser())
//		{
//			if (loginUser())
//				return true;
//		}
//		cout << "\tPlease Enter correct credentials next time." << endl;
//		return false;
//		break;
//	}
//	case 4:
//	{
//		cout << "\n\tThank you for using expense tracker\n";
//		return false;
//		break;
//	}
//	default:
//		cout << "\tInvalid Input" << endl;
//		return false;
//		break;
//	}
//
//
//
//}
//
//bool registerUser() {
//	bool check = false;
//	bool validUsername = false;
//	while (!validUsername) {
//		cout << "Enter username: ";
//		getline(cin, userInfo.username);
//		if (startsWithLetters(userInfo.username)) {
//			validUsername = true;
//			if ("users.txt" != NULL) { // calls the check username function only if the file is not empty
//				check = checkUsername(userInfo.username);
//			}
//			if (check) // if username already exists
//			{
//				cout << "\tUsername already exists! register again with a new username." << endl;
//				return false;
//			}
//			else // if username doesnt exist already
//			{
//				fileName = userInfo.username + ".txt";
//				cout << "\tEnter password: ";
//				getline(cin, userInfo.password);
//				bool flag1 = false, flag2 = false;
//				double integerValue;
//				int tempNo;
//				string temp;
//				cout << "\tEnter your income/salary: ";
//
//				while (!flag1) {
//					getline(cin, temp); // Read the entire line of input
//					// Use stringstream to convert the input to an integer
//					stringstream ss(temp);
//					if (ss >> integerValue) {
//						// Conversion successful, break out of the loop
//						if (integerValue > 0) {
//							userInfo.income = integerValue;
//							flag1 = true;
//							salary = userInfo.income;
//							break;
//						}
//					}
//					else {
//						cout << "\n\tError! Please enter a valid income." << endl;
//					}
//				}
//
//
//				cout << "\tEnter the number of your family members: ";
//				while (true) {
//					getline(cin, temp); // Read the entire line of input
//					// Use stringstream to convert the input to an integer
//					stringstream ss(temp);
//					if (ss >> tempNo) {
//						// Conversion successful, break out of the loop
//						if (tempNo > 0) {
//							userInfo.familymembers = tempNo;
//							break;
//						}
//					}
//					else {
//						cout << "\tError! Please enter a valid number." << endl;
//					}
//				}
//			}
//		}
//	}
//	fstream file("usernames.txt", ios::app); // this file is only storing the usernames not other info about users and is then used in check username function
//	if (file.is_open())
//	{
//		file << userInfo.username << endl;
//	}
//	else {
//		cout << "ERROR! Unable to open file (names)" << endl;
//
//	}
//	fstream outfile("users.txt", ios::app); // this file stores all the info about user
//	if (outfile.is_open())
//	{
//		outfile << userInfo.username << " " << userInfo.password << " " << userInfo.income << " " << userInfo.familymembers << "\n";
//		outfile.close();
//		string fileName = userInfo.username + ".txt";
//		cout << "Registration Successful" << endl;
//		return true;
//	}
//	else {
//		cout << "ERROR! Unable to open file" << endl;
//		return false;
//	}
//}
//
//bool checkUsername(const string& username) {
//	fstream file("usernames.txt", ios::in | ios::out | ios::app);
//	if (file.is_open()) {
//		string line;
//		while (getline(file, line)) {
//			if (line == username) {
//				file.close(); // Close the file before returning
//				return true;
//			}
//		}
//		file.close(); // Close the file before returning
//		return false;
//	}
//	else {
//		cout << "names File unable to open!" << endl;
//		return false; // Return false indicating failure to open the file
//	}
//}
//
//// function to login
//bool loginUser()
//{
//	string u, p, name, password;
//	bool flag = 0;
//	cout << "\n\tLogin Info:" << endl;
//	cout << "\tEnter your username: ";
//	getline(cin, name);
//	cout << "\tEnter your password: ";
//	cin >> password;
//	fstream inFile("users.txt", ios::in); // Open file for reading
//	if (inFile.is_open()) {
//		while (inFile >> u >> p) {
//
//			if (u == name && p == password) {
//				inFile.close();
//				flag = 1;
//				fileName = name + ".txt";
//				cout << "\tLogin Successful" << endl;
//				return true;
//			}
//		}inFile.close();
//		if (!flag) {
//			cout << "\tLogin Unsuccessful, please provide correct credentials next time!" << endl;
//			return false;
//		}
//	}
//	else {
//		cout << "\tError: Unable to open file for login." << endl;
//		inFile.close();
//		return false;
//	}
//}
//
//// function implemented when user forgets password
//bool forgetUser()
//{
//	string username2, password;
//	double income2;
//	int familymembers2;
//	bool validInput = false;
//	cout << "In order to retrieve your password, some details are required: " << endl;
//	// the following info is taken to cross check userInfo from the file to retrieve password
//	while (!validInput) {
//		cout << "\tEnter your username: ";
//		getline(cin, username2);
//		if (startsWithLetters(username2)) {
//			validInput = true;
//		}
//		else {
//			cout << "\tEnter valid username.\n";
//		}
//	}
//	double integerValue;
//	string temp;
//	cout << "\tEnter your income/salary: ";
//	while (true) {
//		getline(cin, temp); // Read the entire line of input
//
//		// Use stringstream to convert the input to an integer
//		stringstream ss(temp);
//		if (ss >> integerValue) {
//			// Conversion successful, break out of the loop
//			if (integerValue > 0) {
//				income2 = integerValue;
//				break;
//			}
//		}
//		else {
//			cout << "\tError! Please enter a valid income." << endl;
//		}
//	}
//	int tempNo;
//	cout << "\tEnter family members: ";
//	while (true) {
//		getline(cin, temp); // Read the entire line of input
//
//		// Use stringstream to convert the input to an integer
//		stringstream ss(temp);
//		if (ss >> tempNo) {
//			// Conversion successful, break out of the loop
//			if (tempNo > 0) {
//				familymembers2 = tempNo;
//				break;
//			}
//		}
//		else {
//			cout << "\tError! Please enter a valid income." << endl;
//		}
//	}
//	bool flag = false;
//	string u, p;
//	double i;
//	int f;
//	fstream inFile("users.txt", ios::in); // Open file for reading
//	if (inFile.is_open()) {
//		while (inFile >> u >> p >> i >> f) { // reads the file, stores the values in u (username string),p (password string),i (income double),f (family members int)
//			// compares the data from the file with the info entered by the user earlier to match
//			if (username2 == u && income2 == i && familymembers2 == f) {
//				cout << "\tPassword retrieved!" << endl;
//				cout << "\tYour password is: " << p;
//				flag = true;
//				inFile.close();
//				return true;
//				break;
//			}
//		}
//		if (!flag) {
//
//			cout << "\tPassword Retrieval Unsuccessful, please provide correct credentials next time!" << endl;
//			inFile.close();
//			return false;
//
//		}
//	}
//	else {
//		cout << "\tError: Unable to open file." << endl;
//		return false;
//	}
//}
//
//bool startsWithLetters(const string& str) {
//	if (str.empty()) {
//		cerr << "\tError: Empty string provided." << endl;
//		return false;
//	}
//
//	// Check if the first character is an alphabet letter
//	if (isalpha(str[0])) {
//		return true; // String starts with letters
//	}
//	else {
//		cerr << "\tError: String does not start with letters." << endl;
//		return false;
//	}
//}
//
//void menu2() {
//
//	int Set[] = { 7,7,7,7,7,7,7,7 };
//	int counter = 1;
//	char key;
//	int log;
//	int exit = false;
//	do
//	{
//		system("cls");
//		cout << "\t\tPersonal Expense Tracker\t\n\n";
//		cout << "\t  Add Expenses";
//		for (int i = 0;;) {
//
//			gotoxy(10, 4);
//			color(Set[0]);
//			cout << "1. Utilities";
//
//
//			gotoxy(28, 4);
//			color(Set[1]);
//			cout << "\t 2. Groceries\n\t";
//
//			gotoxy(10, 6);
//			color(Set[2]);
//			cout << "3. Health";
//
//			gotoxy(28, 6);
//			color(Set[3]);
//			cout << "\t 4. Entertainment\n\t";
//
//			gotoxy(10, 8);
//			color(Set[4]);
//			cout << "5. Education\n\t";
//
//			gotoxy(28, 8);
//			color(Set[5]);
//			cout << "\t 6. Family Expenses\n\t";
//
//			gotoxy(10, 10);
//			color(Set[6]);
//			cout << "7. Extra\n\t";
//
//			gotoxy(28, 10);
//			color(Set[7]);
//			cout << "\t 8. Exit\n\t";
//
//			key = _getch();
//
//			if (key == 75 && (counter == 2 || counter == 4 || counter == 6 || counter == 8)) { //72 up Arr key, 75 left key
//				counter--;
//			}
//			if (key == 77 && (counter == 1 || counter == 3 || counter == 5 || counter == 7)) { //80 down Arr key, 77 right key
//				counter++;
//			}
//			if (key == 72 && (counter == 3 || counter == 4 || counter == 5 || counter == 6 || counter == 7 || counter == 8)) { //72 up Arr key, 75 left key
//				counter--;
//				counter--;
//			}
//			if (key == 80 && (counter == 1 || counter == 2 || counter == 3 || counter == 4 || counter == 5 || counter == 6)) { //80 down Arr key, 77 right key
//				counter++;
//				counter++;
//			}
//			if (key == '\r') { // '\z' carriage return OR Enter key
//				log = counter;
//				color(7);
//				break;
//			}
//			// by default color white
//			Set[0] = 7;
//			Set[1] = 7;
//			Set[2] = 7;
//			Set[3] = 7;
//			Set[4] = 7;
//			Set[5] = 7;
//			Set[6] = 7;
//			Set[7] = 7;
//
//			if (counter == 1) {
//				Set[0] = 12; // setting color to red
//			}
//			if (counter == 2) {
//				Set[1] = 12; // setting color to red
//			}
//			if (counter == 3) {
//				Set[2] = 12; // setting color to red
//			}
//			if (counter == 4) {
//				Set[3] = 12; // setting color to red
//			}
//			if (counter == 5) {
//				Set[4] = 12; // setting color to red
//			}
//			if (counter == 6) {
//				Set[5] = 12; // setting color to red
//			}
//			if (counter == 7) {
//				Set[6] = 12; // setting color to red
//			}
//			if (counter == 8) {
//				Set[7] = 12; // setting color to red
//			}
//		}
//
//		switch (log)
//		{
//		case 1:
//		{
//			addExpense("utilities", fileName);
//			system("pause");
//		}
//		break;
//		case 2:
//		{
//			addExpense("grocery", fileName);
//
//			system("pause");
//		}
//		break;
//		case 3:
//
//		{
//			addExpense("health", fileName);
//
//			system("pause");
//		}
//		break;
//		case 4:
//		{
//			addExpense("entertainment", fileName);
//
//			system("pause");
//		}
//		break;
//		case 5: {
//
//			addExpense("education", fileName);
//
//			system("pause");
//		}
//			  break;
//		case 6:
//		{
//			addExpense("family", fileName);
//
//			system("pause");
//		}
//		break;
//		case 7:
//		{
//			addExpense("extra", fileName);
//			system("pause");
//		}
//		break;
//		case 8:
//		{
//			exit = true;
//
//			return;
//
//		}
//		}
//	} while (!exit);
//}
//
//void addExpense(string category, string fileName) {
//	Expense newExpense;
//	cout << "\n\tEnter " << category << " description: ";
//	cin.ignore();
//	getline(cin, newExpense.description);
//	cout << "\tEnter " << category << " amount: ";
//	cin >> newExpense.amount;
//	cout << "\tEnter date of purchase (YYYY-MM-DD): ";
//	cin >> newExpense.date;
//	cin.ignore();
//	if (category == "grocery") {
//		cout << "\tEnter store from where you purchased: ";
//		getline(cin, newExpense.designation);
//	}
//	else if (category == "utilities") {
//		cout << "\tEnter a store/organization: ";
//		getline(cin, newExpense.designation);
//	}
//	else if (category == "health") {
//		cout << "\tEnter the clinic/hospital: ";
//		getline(cin, newExpense.designation);
//	}
//	else if (category == "entertainment") {
//		cout << "\tEnter venue/location/event: ";
//		getline(cin, newExpense.designation);
//	}
//	else if (category == "extra") {
//		cout << "\tEnter venue/store/location: ";
//		getline(cin, newExpense.designation);
//	}
//	else if (category == "family") {
//		cout << "\tEnter venue/store/occasion: ";
//		getline(cin, newExpense.designation);
//	}
//	else if (category == "education") {
//		cout << "\tEnter bookstore/stationary/school: ";
//		getline(cin, newExpense.designation);
//	}
//	newExpense.category = category;
//	fstream outFile(fileName, ios::app); // Open file for appending
//	if (outFile.is_open()) {
//		outFile << newExpense.category << " " << newExpense.description << " " << newExpense.amount << " "
//			<< newExpense.date << " " << newExpense.designation << " " << endl;
//		outFile.close();
//
//		category[0] = toupper(category[0]);
//		cout << "\t" << category << " expense added successfully.\n";
//
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//
//	}
//}
//void menu3(string action) {
//	int Set[] = { 7,7,7,7,7,7,7,7 };
//	int counter = 1;
//	char key;
//	int log;
//	int exit = false;
//	do {
//		system("cls");
//		cout << "\t\tPersonal Expense Tracker\t\n\n";
//		if (action == "delete")
//			cout << "\t  Delete Expenses";
//		else if (action == "view")
//			cout << "\t  View Expenses";
//		else if (action == "update")
//			cout << "\t  Update Expenses";
//
//		for (int i = 0;;) {
//			gotoxy(10, 4);
//			color(Set[0]);
//			cout << "1. Utilities";
//
//			gotoxy(28, 4);
//			color(Set[1]);
//			cout << "\t 2. Groceries\n\t";
//
//			gotoxy(10, 6);
//			color(Set[2]);
//			cout << "3. Health";
//
//			gotoxy(28, 6);
//			color(Set[3]);
//			cout << "\t 4. Entertainment\n\t";
//
//			gotoxy(10, 8);
//			color(Set[4]);
//			cout << "5. Education\n\t";
//
//			gotoxy(28, 8);
//			color(Set[5]);
//			cout << "\t 6. Family Expenses\n\t";
//
//			gotoxy(10, 10);
//			color(Set[6]);
//			cout << "7. Extra\n\t";
//
//			gotoxy(30, 10);
//			color(Set[7]);
//			cout << "\t 8. Exit\n\t";
//
//			key = _getch();
//
//			if (key == 75 && (counter == 2 || counter == 4 || counter == 6 || counter == 8)) {
//				counter--;
//			}
//			if (key == 77 && (counter == 1 || counter == 3 || counter == 5 || counter == 7)) {
//				counter++;
//			}
//			if (key == 72 && (counter == 3 || counter == 4 || counter == 5 || counter == 6 || counter == 7 || counter == 8)) {
//				counter -= 2;
//			}
//			if (key == 80 && (counter == 1 || counter == 2 || counter == 3 || counter == 4 || counter == 5 || counter == 6)) {
//				counter += 2;
//			}
//			if (key == '\r') {
//				log = counter;
//				color(7);
//				break;
//			}
//
//			// By default, color is white
//			for (int j = 0; j < 8; j++) Set[j] = 7;
//
//			if (counter >= 1 && counter <= 8) Set[counter - 1] = 12; // Set selected color to red
//		}
//
//		switch (log) {
//		case 1:
//			if (action == "delete")
//				deleteExpense("utilities", fileName);
//			else if (action == "view")
//				viewCategoryExpense("utilities", fileName);
//			else if (action == "update")
//				updateExpense("utilities", fileName);
//			system("pause");
//			break;
//		case 2:
//			if (action == "delete")
//				deleteExpense("groceries", fileName);
//			else if (action == "view")
//				viewCategoryExpense("groceries", fileName);
//			else if (action == "update")
//				updateExpense("groceries", fileName);
//			system("pause");
//			break;
//		case 3:
//			if (action == "delete")
//				deleteExpense("health", fileName);
//			else if (action == "view")
//				viewCategoryExpense("health", fileName);
//			else if (action == "update")
//				updateExpense("health", fileName);
//			system("pause");
//			break;
//		case 4:
//			if (action == "delete")
//				deleteExpense("entertainment", fileName);
//			else if (action == "view")
//				viewCategoryExpense("entertainment", fileName);
//			else if (action == "update")
//				updateExpense("entertainment", fileName);
//			system("pause");
//			break;
//		case 5:
//			if (action == "delete")
//				deleteExpense("education", fileName);
//			else if (action == "view")
//				viewCategoryExpense("education", fileName);
//			else if (action == "update")
//				updateExpense("education", fileName);
//			system("pause");
//			break;
//		case 6:
//			if (action == "delete")
//				deleteExpense("familyExpenses", fileName);
//			else if (action == "view")
//				viewCategoryExpense("familyExpenses", fileName);
//			else if (action == "update")
//				updateExpense("familyExpenses", fileName);
//			system("pause");
//			break;
//		case 7:
//			if (action == "delete")
//				deleteExpense("extra", fileName);
//			else if (action == "view")
//				viewCategoryExpense("extra", fileName);
//			else if (action == "update")
//				updateExpense("extra", fileName);
//			system("pause");
//			break;
//		case 8:
//			exit = true;
//			break;
//		default:
//			break;
//		}
//	} while (!exit);
//}
//
//
//void deleteExpense(string category, string fileName) {
//	// Read expenses from the file
//	vector<Expense> expenses = readExpensesFromFile(fileName);
//
//	// Display expenses for the specified category
//	int index = 1;
//
//	for (const auto& expense : expenses) {
//		if (expense.category == category) {
//
//			index++;
//		}
//	}
//	cout << "\nExpenses in " << category << " category:\n";
//
//	// Print table headings
//	cout << "No.\tDescription\tAmount\t\tDate\t\tDesignation\n";
//	cout << "-------------------------------------------------------------\n";
//
//	for (size_t i = 0; i < expenses.size(); ++i) {
//		if (expenses[i].category == category) {
//			cout << i + 1 << ".\t" << expenses[i].description << "\t\t"
//				<< expenses[i].amount << "\t\t" << expenses[i].date << "\t"
//				<< expenses[i].designation << endl;
//		}
//	}
//
//	// Ask user for the index of the expense to delete
//	int expenseIndex;
//	cout << "Enter the index of the expense to delete: ";
//	cin >> expenseIndex;
//
//	// Check if the entered index is valid
//	if (expenseIndex < 1 || expenseIndex > index - 1) {
//		cout << "Invalid expense index." << endl;
//		return;
//	}
//
//	// Open the file for writing
//	ofstream outFile(fileName);
//	if (!outFile.is_open()) {
//		cout << "Error: Unable to open file for writing." << endl;
//		return;
//	}
//
//	// Rewrite the expenses to the file excluding the selected one
//	index = 1;
//	for (const auto& expense : expenses) {
//		if (!(expense.category == category && index == expenseIndex)) {
//			outFile << expense.category << " " << expense.description << " " << expense.amount << " "
//				<< expense.date << " " << expense.designation << endl;
//		}
//		index++;
//	}
//
//	cout << "Expense deleted successfully." << endl;
//}
//
//vector<Expense> readExpensesFromFile(string fileName) {
//	vector<Expense> expenses;
//	ifstream inFile(fileName);
//	if (!inFile.is_open()) {
//		cout << "Error: Unable to open file for reading." << endl;
//		return expenses;
//	}
//
//	string line;
//	while (getline(inFile, line)) {
//		istringstream iss(line);
//		Expense expense;
//		iss >> expense.category >> expense.description >> expense.amount >> expense.date >> expense.designation;
//		expenses.push_back(expense);
//	}
//
//	inFile.close();
//	return expenses;
//}
//
//void viewCategoryExpense(string category, string fileName) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//
//	vector<Expense> expenses; // Local vector to store expenses
//	Expense temp;
//	bool expenseFound = false; // Flag to track if any expenses are found
//
//	while (file >> temp.category >> temp.description >> temp.amount >> temp.date >> temp.designation) {
//		if (temp.category == category) {
//			expenseFound = true; // Set flag to true if any expenses are found
//			expenses.push_back(temp); // Store the expense in the local vector
//		}
//	}
//	file.close();
//
//	if (!expenseFound) { // Check if any expenses are found
//		cout << "No expenses added in this category yet.\n";
//		return;
//	}
//
//	cout << "\nExpenses in " << category << " category:\n";
//	userInfo.expenses.clear();
//	// Print table headings with fixed widths
//	cout << left << setw(5) << "No."
//		<< setw(20) << "Description"
//		<< setw(10) << "Amount"
//		<< setw(12) << "Date"
//		<< setw(20) << "Designation" << endl;
//	cout << "-------------------------------------------------------------\n";
//
//	for (size_t i = 0; i < expenses.size(); ++i) {
//		cout << left << setw(5) << i + 1
//			<< setw(20) << expenses[i].description
//			<< setw(10) << expenses[i].amount
//			<< setw(12) << expenses[i].date
//			<< setw(20) << expenses[i].designation << endl;
//	} userInfo.expenses.clear();
//}
//
//void viewExpenses() {
//	int Set[] = { 7,7,7,7,7,7,7,7 };
//	int counter = 1;
//	char key;
//	int log;
//	int exit = false;
//	do
//	{
//		system("cls");
//		cout << "\t\tPersonal Expense Tracker\t\n\n";
//		cout << "\t  View Expenses";
//		for (int i = 0;;) {
//
//			gotoxy(10, 4);
//			color(Set[0]);
//			cout << "1. Utilities";
//
//
//			gotoxy(28, 4);
//			color(Set[1]);
//			cout << "\t 2. Groceries\n\t";
//
//			gotoxy(10, 6);
//			color(Set[2]);
//			cout << "3. Health";
//
//			gotoxy(28, 6);
//			color(Set[3]);
//			cout << "\t 4. Entertainment\n\t";
//
//			gotoxy(10, 8);
//			color(Set[4]);
//			cout << "5. Education\n\t";
//
//			gotoxy(28, 8);
//			color(Set[5]);
//			cout << "\t 6. Family Expenses\n\t";
//
//			gotoxy(10, 10);
//			color(Set[6]);
//			cout << "7. Extra\n\t";
//
//			gotoxy(28, 10);
//			color(Set[7]);
//			cout << "\t 8. Exit\n\t";
//
//			key = _getch();
//
//			if (key == 75 && (counter == 2 || counter == 4 || counter == 6 || counter == 8)) { //72 up Arr key, 75 left key
//				counter--;
//			}
//			if (key == 77 && (counter == 1 || counter == 3 || counter == 5 || counter == 7)) { //80 down Arr key, 77 right key
//				counter++;
//			}
//			if (key == 72 && (counter == 3 || counter == 4 || counter == 5 || counter == 6 || counter == 7 || counter == 8)) { //72 up Arr key, 75 left key
//				counter--;
//				counter--;
//			}
//			if (key == 80 && (counter == 1 || counter == 2 || counter == 3 || counter == 4 || counter == 5 || counter == 6)) { //80 down Arr key, 77 right key
//				counter++;
//				counter++;
//			}
//			if (key == '\r') { // '\z' carriage return OR Enter key
//				log = counter;
//				color(7);
//				break;
//			}
//			// by default color white
//			Set[0] = 7;
//			Set[1] = 7;
//			Set[2] = 7;
//			Set[3] = 7;
//			Set[4] = 7;
//			Set[5] = 7;
//			Set[6] = 7;
//			Set[7] = 7;
//
//			if (counter == 1) {
//				Set[0] = 12; // setting color to red
//			}
//			if (counter == 2) {
//				Set[1] = 12; // setting color to red
//			}
//			if (counter == 3) {
//				Set[2] = 12; // setting color to red
//			}
//			if (counter == 4) {
//				Set[3] = 12; // setting color to red
//			}
//			if (counter == 5) {
//				Set[4] = 12; // setting color to red
//			}
//			if (counter == 6) {
//				Set[5] = 12; // setting color to red
//			}
//			if (counter == 7) {
//				Set[6] = 12; // setting color to red
//			}
//			if (counter == 8) {
//				Set[7] = 12; // setting color to red
//			}
//		}
//		switch (log)
//		{
//		case 1:
//		{
//			viewCategoryExpense("utilities", fileName);
//			system("pause");
//			break;
//		}
//		case 2:
//		{
//			viewCategoryExpense("grocery", fileName);
//			system("pause");
//			break;
//		}
//		case 3:
//		{
//			viewCategoryExpense("health", fileName);
//			system("pause");
//			break;
//		}
//		case 4:
//		{
//			viewCategoryExpense("entertainment", fileName);
//			system("pause");
//			break;
//		}
//		case 5:
//		{
//			viewCategoryExpense("education", fileName);
//			system("pause");
//
//			break;
//		}
//		case 6:
//		{
//			viewCategoryExpense("family", fileName);
//			system("pause");
//
//			break;
//		}
//		case 7: {
//			viewCategoryExpense("extra", fileName);
//			system("pause");
//			break;
//		}
//		case 8:
//		{
//			exit = true;
//			return;
//			break;
//		}
//		}
//	} while (!exit);
//}
//void usersaving() {
//	int numExpenses = 0;
//	Expense temp;
//	double temp_saving = salary;
//	ifstream file(fileName); // Open file for reading
//	if (!file.is_open()) {
//		perror("REASON");
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	else {
//		while (numExpenses < 20 && file >> temp.category >> temp.description >> temp.amount
//			>> temp.date >> temp.designation) {
//			temp_saving -= temp.amount;
//			numExpenses++;
//		}
//		file.close(); // Close the file after reading
//		if (temp_saving > 0 || temp_saving == 0) {
//			cout << "Total savings: " << temp_saving << endl;
//		}
//		else {
//			cout << "Sorry You have no savings" << endl;
//		}
//		system("pause");
//	}
//}
//void userdebt()
//{
//	int numExpenses = 0;
//	Expense temp;
//	double temp_debt = 0;
//	ifstream file(fileName); // Open file for reading
//	if (!file.is_open()) {
//		perror("REASON");
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	else {
//		while (numExpenses < 20 && file >> temp.category >> temp.description >> temp.amount
//			>> temp.date >> temp.designation) {
//			temp_debt += temp.amount;
//			numExpenses++;
//		}
//		temp_debt = salary - temp_debt;
//		file.close(); // Close the file after reading
//		if (temp_debt > 0) {
//			cout << "You are not in any debt." << endl;
//		}
//		else if (temp_debt < 0) {
//			cout << "Total Debt: " << temp_debt << endl;
//		}
//		system("pause");
//	}
//}
//void updateExpense(string category, string fileName) {
//	Expense updatedExpense;
//	vector<Expense> expenses;
//	Expense tempExpense;
//	bool found = false;
//
//	fstream inFile(fileName, ios::in);
//	if (!inFile.is_open()) {
//		cout << "Error: Unable to open file." << endl;
//		return;
//	}
//
//	// Read existing expenses from file
//	while (inFile >> tempExpense.category >> tempExpense.description >> tempExpense.amount
//		>> tempExpense.date >> tempExpense.designation) {
//		expenses.push_back(tempExpense);
//	}
//	inFile.close();
//
//	cout << "\nExpenses in " << category << " category:\n";
//
//	// Print table headings
//	cout << "No.\tDescription\tAmount\t\tDate\t\tDesignation\n";
//	cout << "-------------------------------------------------------------\n";
//
//	for (size_t i = 0; i < expenses.size(); ++i) {
//		if (expenses[i].category == category) {
//			cout << i + 1 << ".\t" << expenses[i].description << "\t\t"
//				<< expenses[i].amount << "\t\t" << expenses[i].date << "\t"
//				<< expenses[i].designation << endl;
//		}
//	}
//
//	int index;
//	cout << "\nEnter the number of the expense you want to update: ";
//	cin >> index;
//	cin.ignore(); // Ignore the newline character left in the input buffer
//
//	if (index < 1 || index > expenses.size()) {
//		cout << "Invalid index." << endl;
//		return;
//	}
//
//	updatedExpense = expenses[index - 1];
//	cout << "\nUpdating " << category << " expense: " << updatedExpense.description << "\n";
//
//	cout << "\nEnter new description (current: " << updatedExpense.description << "): ";
//	getline(cin, updatedExpense.description);
//
//	cout << "Enter new amount (current: " << updatedExpense.amount << "): ";
//	cin >> updatedExpense.amount;
//	cin.ignore();
//
//	cout << "Enter new date of purchase (YYYY-MM-DD, current: " << updatedExpense.date << "): ";
//	cin >> updatedExpense.date;
//	cin.ignore();
//
//	if (category == "grocery") {
//		cout << "Enter new store (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//	else if (category == "utilities") {
//		cout << "Enter new store/organization (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//	else if (category == "health") {
//		cout << "Enter new clinic/hospital (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//	else if (category == "entertainment") {
//		cout << "Enter new venue/location/event (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//	else if (category == "extra") {
//		cout << "Enter new venue/store/location (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//	else if (category == "family") {
//		cout << "Enter new venue/store/occasion (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//	else if (category == "education") {
//		cout << "Enter new bookstore/stationary/school (current: " << updatedExpense.designation << "): ";
//		getline(cin, updatedExpense.designation);
//	}
//
//	// Update the selected expense in the list
//	expenses[index - 1] = updatedExpense;
//
//	// Write the updated expenses back to the file
//	fstream outFile(fileName, ios::out | ios::trunc);
//	if (outFile.is_open()) {
//		for (const auto& expense : expenses) {
//			outFile << expense.category << " " << expense.description << " "
//				<< expense.amount << " " << expense.date << " " << expense.designation << endl;
//		}
//		outFile.close();
//		cout << category << " expense updated successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//void searchExpense(string fileName)
//{
//	vector<Expense> expenses;
//	Expense tempExpense;
//	int choice;
//	string date;
//	double amount;
//	cout << "Do you want to search the expense by:\n\t1-Date\n\t2-Amount\n";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//	{
//		cout << "Enter the date :";
//		cin >> date;
//		fstream inFile(fileName, ios::in);
//		if (!inFile.is_open()) {
//			cout << "Error: Unable to open file." << endl;
//			return;
//		}
//		bool flag = false;
//		// Read existing expenses from file
//		while (inFile >> tempExpense.category >> tempExpense.description >> tempExpense.amount
//			>> tempExpense.date >> tempExpense.designation) {
//			if (date == tempExpense.date)
//			{
//				flag = true;
//				cout << endl;
//				cout << "------------------------------------------------------------------------------------------------\n" <<
//					"Category: " << tempExpense.category << "\t" << "Description: " << tempExpense.description << "\t" << "Amount: "
//					<< tempExpense.amount << "\t" << "Date: " << tempExpense.date << "\t\t" << "Designation: "
//					<< tempExpense.designation << endl;
//				cout << endl;
//				cout << "***************************************************************************************************\n";
//			}
//
//		}inFile.close();
//		system("pause");
//		if (!flag)
//		{
//			cout << "No expense of this date was added.\n";
//			system("pause");
//		}
//		break;
//	}
//	case 2:
//	{
//		cout << "Enter the amount :";
//		cin >> amount;
//		fstream inFile(fileName, ios::in);
//		if (!inFile.is_open()) {
//			cout << "Error: Unable to open file." << endl;
//			return;
//		}
//		bool flag = false;
//		// Read existing expenses from file
//		while (inFile >> tempExpense.category >> tempExpense.description >> tempExpense.amount
//			>> tempExpense.date >> tempExpense.designation) {
//			if (amount == tempExpense.amount)
//			{
//				flag = true;
//				cout << "-----------------------------------------------------------------------------------------------\n" <<
//					"Category: " << tempExpense.category << "\t" << "Description: " << tempExpense.description << "\t" << "Amount: "
//					<< tempExpense.amount << "\t\t" << "Date: " << tempExpense.date << "\t\t" << "Designation: "
//					<< tempExpense.designation << endl;
//				cout << endl;
//				cout << "**************************************************************************************************\n";
//
//			}
//
//		}inFile.close();
//
//		if (!flag)
//		{
//			cout << "No expense of this amount was added.\n";
//			system("pause");
//		}
//		else {
//			system("pause");
//		}
//		break;
//	}
//	default:
//	{
//		cout << "Invalid input" << endl;
//	}
//	}
//	//expenses.push_back(tempExpense);
//}