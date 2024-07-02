//#include <iostream>
//#include <string>
//#include<Windows.h> // to have better control of the console window for eg to change color or move to a location on the console window
//#include<conio.h> // to take key input like arrow keys
//#include<sstream> // for string to number conversion
//#include <fstream>
//#include <iomanip>
//#include<vector>
//using namespace std;
//
//// Global variables
//string fileName;
//
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
//
//struct Data {
//	double amount;
//	string category;
//	string description;
//	string date;
//	string designation;
//};
//
//vector<Data>user;
//string months[12] = { "Jan", "Feb", "Mar", "Apr",
//					"May", "June", "July", "Aug",
//					"Sept", "Oct", "Nov", "Dec" };
//
//string username, filename;
//string password;
//
//// Function Declarations 
//
//// Utility Functions
//void color(int color);
//void gotoxy(int x, int y);
//bool checkUsername(const string& username);
//bool startsWithLetters(const string& str);
//void read(string filename, string dated);
//void tokenize(string s, string del);
//bool isInt(const string& str);
//void splitDate(const string& date, int& year, int& month, int& day);
//void splitDate(const string& date, int& year, int& month);
//void readWeek(string filename, string dated);
//int getWeekOfMonth(int day);
//
//// function to add expenses
//void addExpense(string category, string fileName);
//
//// function to display expenses
//void viewCategoryExpense(string category, string fileName);
//void displaySavings(int startMonth, int endMonth, int income, int expenses[]);
//void displayExpense(int startMonth, int endMonth, string category, int amount[]);
//
//// Welcome Screen
//int welcome(); // initial screen that user will see once the program starts
//
//// All menus
//
//bool menu1(int choose); // Login or Signup
//void menu2(string action);			// display Categories and Add/view expenses
//bool registerUser(); // Sign UP 
//bool loginUser(); // Login 
//bool forgetUser();
//
//void main()
//{
//	int log = welcome(); // user selects an option i.e Login / signup
//	if (menu1(log)) { 
//		menu2("add");    // user gets choices to choose from to add expenses
//		menu2("view");   // user gets choices to choose from to view expenses
//	}
//
//	//int expenses[] = { 500, 750, 800, 600, 850, 650, 900,800,700 }; // Replace with your actual data
//	//displayExpense(2, 10, "Investment", expenses);
//	//displaySavings(2, 10, 1150, expenses);
//
//
//	system("pause");
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
//	//cout << "\t  1. Login\t 2. register an account\n\t";
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
//bool menu1(int choose){
//	
//	switch (choose){
//	case 2:
//	{
//		if (registerUser()) {
//			if (loginUser()) {
//				return true;
//			}
//		}
//
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
//	break;
//	}
//	case 3:
//	{
//		if (forgetUser())
//		{
//			if(loginUser())
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
//
//bool registerUser() {
//	bool check = false;
//	bool validUsername = false;
//	while (!validUsername) {
//	cout << "Enter username: ";
//	getline(cin, userInfo.username);
//	if (startsWithLetters(userInfo.username)) {
//		validUsername = true;
//		if ("users.txt" != NULL) { // calls the check username function only if the file is not empty
//			check = checkUsername(userInfo.username);
//		}
//		if (check) // if username already exists
//		{
//			cout << "\tUsername already exists! register again with a new username." << endl;
//			return false;
//		}
//		else // if username doesnt exist already
//		{
//			fileName = userInfo.username + ".txt";
//			cout << "\tEnter password: ";
//			getline(cin, userInfo.password);
//			bool flag1 = false, flag2 = false;
//			double integerValue;
//			int tempNo;
//			string temp;
//			cout << "\tEnter your income/salary: ";
//
//			while (!flag1) {
//				getline(cin, temp); // Read the entire line of input
//				// Use stringstream to convert the input to an integer
//				stringstream ss(temp);
//				if (ss >> integerValue) {
//					// Conversion successful, break out of the loop
//					if (integerValue > 0) {
//						userInfo.income = integerValue;
//						flag1 = true;
//						break;
//					}
//				}
//				else {
//					cout << "\n\tError! Please enter a valid income." << endl;
//				}
//			}
//
//
//			cout << "\tEnter the number of your family members: ";
//			while (true) {
//				getline(cin, temp); // Read the entire line of input
//				// Use stringstream to convert the input to an integer
//				stringstream ss(temp);
//				if (ss >> tempNo) {
//					// Conversion successful, break out of the loop
//					if (tempNo > 0) {
//						userInfo.familymembers = tempNo;
//						break;
//					}
//				}
//				else {
//					cout << "\tError! Please enter a valid number." << endl;
//				}
//			}
//		}
//	}
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
//	cout << "\tEnter your username: ";
//	getline(cin, username2);
//	if (startsWithLetters(username2)) {
//		validInput = true;
//	}
//	else {
//		cout << "\tEnter valid username.\n";
//	}
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
//void menu2(string action) {
//	
//	int Set[] = { 7,7,7,7,7,7,7,7,7};
//	int counter = 1;
//	char key;
//	int log;
//	int exit = false;
//	do
//	{
//	system("cls");
//	cout << "\t\tPersonal Expense Tracker\t\n\n";
//	if (action == "add")
//		cout << "\t  Add Expenses";
//	else if (action == "view")
//		cout << "\t  View Expenses";
//	for (int i = 0;;) {
//
//		gotoxy(10, 4);
//		color(Set[0]);
//		cout << "1. Utilities";
//
//
//		gotoxy(28, 4);
//		color(Set[1]);
//		cout << "\t 2. Groceries\n\t";
//
//		gotoxy(10, 6);
//		color(Set[2]);
//		cout << "3. Health";
//
//		gotoxy(28, 6);
//		color(Set[3]);
//		cout << "\t 4. Entertainment\n\t";
//
//		gotoxy(10, 8);
//		color(Set[4]);
//		cout << "5. Education\n\t";
//
//		gotoxy(28, 8);
//		color(Set[5]);
//		cout << "\t 6. Family Expenses\n\t";
//
//		gotoxy(10, 10);
//		color(Set[6]);
//		cout << "7. Extra\n\t";
//
//		gotoxy(28, 10);
//		color(Set[7]);
//		cout << "\t 8. Exit\n\t";
//
//		gotoxy(10, 12);
//		color(Set[8]);
//		cout << "9. See monthly report\n\t";
//
//		key = _getch();
//
//		if (key == 75 && (counter == 2 || counter == 4 || counter == 6 || counter == 8)) { //72 up Arr key, 75 left key
//			counter--;
//		}
//		if (key == 77 && (counter == 1 || counter == 3 || counter == 5 || counter == 7)) { //80 down Arr key, 77 right key
//			counter++;
//		}
//		if (key == 72 && (counter == 3 || counter == 4 || counter == 5 || counter == 6 || counter == 7 || counter == 8 || counter == 9)) { //72 up Arr key, 75 left key
//			counter--;
//			counter--;
//		}
//		if (key == 80 && (counter == 1 || counter == 2 || counter == 3 || counter == 4 || counter == 5 || counter == 6 || counter == 7)) { //80 down Arr key, 77 right key
//			counter++;
//			counter++;
//		}
//		if (key == '\r') { // '\z' carriage return OR Enter key
//			log = counter;
//			color(7);
//			break;
//		}
//		// by default color white
//		Set[0] = 7;
//		Set[1] = 7;
//		Set[2] = 7;
//		Set[3] = 7;
//		Set[4] = 7;
//		Set[5] = 7;
//		Set[6] = 7;
//		Set[7] = 7;
//		Set[8] = 7;
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
//		if (counter == 5) {
//			Set[4] = 12; // setting color to red
//		}
//		if (counter == 6) {
//			Set[5] = 12; // setting color to red
//		}
//		if (counter == 7) {
//			Set[6] = 12; // setting color to red
//		}
//		if (counter == 8) {
//			Set[7] = 12; // setting color to red
//		}
//		if (counter == 9) {
//			Set[8] = 12; // setting color to red
//		}
//	}
//	
//	switch (log)
//	{
//	case 1:
//		if (action == "add")
//			addExpense("utilities", fileName);
//		else if (action == "view"){
//			viewCategoryExpense("utilities", fileName);
//			system("pause");
//		}
//		break;
//	case 2:
//		if (action == "add")
//			addExpense("grocery", fileName);
//		else if (action == "view") {
//			viewCategoryExpense("grocery", fileName);
//			system("pause");
//		}
//		break;
//	case 3:
//		if (action == "add")
//			addExpense("health", fileName);
//		else if (action == "view") {
//			viewCategoryExpense("health", fileName);
//			system("pause");
//		}
//		break;
//	case 4:
//		if (action == "add")
//			addExpense("entertainment", fileName);
//		else if (action == "view") {
//			viewCategoryExpense("entertainment", fileName);
//			system("pause");
//		}
//		break;
//	case 5:
//		if (action == "add")
//			addExpense("education", fileName);
//		else if (action == "view") {
//			viewCategoryExpense("education", fileName);
//			system("pause");
//		}
//		break;
//	case 6:
//		if (action == "add")
//			addExpense("family", fileName);
//		else if (action == "view") {
//			viewCategoryExpense("family", fileName);
//			system("pause");
//		}
//		break;
//	case 7:
//		if (action == "add")
//			addExpense("extra", fileName);
//		else if (action == "view") {
//			viewCategoryExpense("extra", fileName);
//			system("pause");
//		}
//		break;
//	case 8:
//		exit = true;
//		break;
//	case 9:
//		if (action == "view") {
//			string date;
//			cout << "Enter month to view: (YYYY-MM)";
//			cin >> date;
//		read(fileName, date);// fileName , and enter date in YYYY-MM format to display monthly expenses
//		system("pause");
//		}
//		else {
//			cout << "\n\tGo to view expenses to see report\n";
//			system("pause");
//		}
//		break;
//	}
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
//		cout <<"\t" << category << " expense added successfully.\n";
//		
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	
//	}
//}
//
//void viewCategoryExpense(string category, string fileName) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	} //userInfo.expenses[numExpenses]
//	int numExpenses = 0; 
// 
//	int temp1 = 0;
//	bool expenseFound = false; // Flag to track if education expenses are found
//	Expense temp; // use temp to get data, then save that temp in vector expense of the user
//	while (numExpenses < 20 && file >> temp.category >> temp.description >> temp.amount
//		>> temp.date
//		>> temp.designation) {
//		numExpenses++;
//		if (temp.category == category) {
//			expenseFound = true; // Set flag to true if any family expenses are found
//			userInfo.expenses.push_back(temp);
//			temp1++;
//		}
//	}
//	file.close();
//	if (!expenseFound) { // Check if grocery expenses are found
//		cout << "No grocery expenses added yet.\n";
//		return;
//	}
//	
//	cout << "\t" << category<< " Expenses:\n";
//	for (int i = 0; i < temp1; ++i) {
//		if (userInfo.expenses[i].category == category) {
//			cout << "\n\tDescription: " << userInfo.expenses[i].description << ", Amount: $" << userInfo.expenses[i].amount
//				<< ", \n\tDate: " << userInfo.expenses[i].date << ", Designation: " << userInfo.expenses[i].designation
//				<< endl;
//		}
//	}
//	userInfo.expenses.clear();
//}
//
//
////void read(string filename, string dated) {
////	int year1, month1;
////	splitDate(dated, year1, month1);
////	int monthno = stoi(dated.substr(6, 1));
////	ifstream file;
////	string categories[7];
////	int amount[7];
////	int limit = 0;
////	file.open(filename);
////	// Make sure the file opened properly
////	string buffer;
////	char c;
////	bool empty = true;
////	while (getline(file, buffer)) {
////		bool found = false;
////		tokenize(buffer, " ");
////	}
////	for (auto it = user.begin(); it != user.end(); ++it) {
////		string et;
////		int year, month, day;
////		et = it->date;
////		splitDate(et, year, month, day);
////		if (year == year1 && month == month1) {
////			empty = false;
////			if (limit > 0) {
////				bool exists = false;
////				for (int k = 0; k < limit; k++) {
////					if (categories[k] == it->category) {
////						amount[k] = amount[k] + it->amount;
////						exists = true;
////					}
////
////				}
////				if (!exists) {
////					categories[limit] = it->category;
////					amount[limit] = it->amount;
////					limit++;
////				}
////			}
////			else {
////				categories[limit] = it->category;
////				amount[limit] = it->amount;
////				limit++;
////			}
////		}
////	}
////	if (limit > 0) {
////		cout << "\tExpenses for the Month: " << months[monthno - 1] << endl;
////		for (int j = 0; j < limit; j++) {
////			cout << "\t " << categories[j] << ": ";
////			string bar(amount[j] / 100, '#'); // Replace '' with '#'
////			cout << bar << " $" << amount[j] << endl;
////		}
////	}
////	else if (empty) {
////		cout << "No expenses for the month.\n";
////	}
////	user.clear();
////	file.close();
////}
////
////void readWeek(string filename, string dated) {
////	int year1, month1, day1;
////	splitDate(dated, year1, month1, day1);
////	int monthno = stoi(dated.substr(6, 1));
////	ifstream file;
////	string categories[7];
////	int amount[7];
////	int limit = 0;
////	file.open(filename);
////	// Make sure the file opened properly
////	string buffer;
////	char c;
////	bool empty = true;
////	while (getline(file, buffer)) {
////		bool found = false;
////		tokenize(buffer, " ");
////	}
////	for (auto it = user.begin(); it != user.end(); ++it) {
////		string et;
////		int year, month, day;
////		et = it->date;
////		splitDate(et, year, month, day);
////		if (year == year1 && month == month1) {
////			empty = false;
////			if (limit > 0) {
////				bool exists = false;
////				for (int k = 0; k < limit; k++) {
////					if (categories[k] == it->category) {
////						amount[k] = amount[k] + it->amount;
////						exists = true;
////					}
////
////				}
////				if (!exists) {
////					categories[limit] = it->category;
////					amount[limit] = it->amount;
////					limit++;
////				}
////			}
////			else {
////				categories[limit] = it->category;
////				amount[limit] = it->amount;
////				limit++;
////			}
////		}
////	}
////	if (limit > 0) {
////		cout << "\tExpenses for the Month: " << months[monthno - 1] << endl;
////		for (int j = 0; j < limit; j++) {
////			cout << "\t " << categories[j] << ": ";
////			string bar(amount[j] / 100, '#'); // Replace '' with '#'
////			cout << bar << " $" << amount[j] << endl;
////		}
////	}
////	else if (empty) {
////		cout << "No expenses for the month.\n";
////	}
////	user.clear();
////	file.close();
////}
//
//void readWeek(string filename, string dated) {
//	int year1, month1;
//	splitDate(dated, year1, month1);
//	int monthno = stoi(dated.substr(5, 2));
//
//	ifstream file;
//	file.open(filename);
//	if (!file.is_open()) {
//		cout << "Error opening file." << endl;
//		return;
//	}
//
//	// Initialize expenses for each week
//	vector<double> weeklyExpenses(5, 0.0); // Assuming each month has 5 weeks
//
//	string buffer;
//	while (getline(file, buffer)) {
//		tokenize(buffer, " ");
//	}
//
//	for (auto it = user.begin(); it != user.end(); ++it) {
//		string et;
//		int year, month, day;
//		et = it->date;
//		splitDate(et, year, month, day);
//
//		if (year == year1 && month == month1) {
//			int week = getWeekOfMonth(day);
//			weeklyExpenses[week - 1] += it->amount;
//		}
//	}
//
//	cout << "\tExpenses for the Month: " << months[monthno - 1] << endl;
//	for (int i = 0; i < 5; ++i) { // Assuming each month has 5 weeks
//		cout << "\t Week " << i + 1 << ": ";
//		string bar(static_cast<int>(weeklyExpenses[i] / 100), '#');
//		cout << bar << " $" << fixed << setprecision(2) << weeklyExpenses[i] << endl;
//	}
//
//	user.clear();
//	file.close();
//}
//
//bool isInt(const string& str) {
//	int n;
//	istringstream istreamObject(str); // Create istringstream from string
//	istreamObject >> noskipws >> n; // Get an int value from stream
//	// Check if stringstream has reached its end and not failed
//	return istreamObject.eof() && !istreamObject.fail();
//}
//
//void tokenize(string s, string del)
//{
//	Data data;
//	int start, end = -1 * del.size();
//	int i = 0;
//	do {
//		start = end + del.size();
//		end = s.find(del, start);
//		switch (i)
//		{
//
//		case 0:
//			data.category = s.substr(start, end - start);
//			i++;
//			break;
//		case 1:
//			data.description = s.substr(start, end - start);
//			i++;
//			break;
//		case 2:
//			data.amount = stoi(s.substr(start, end - start));
//			i++;
//			break;
//		case 3:
//			data.date = s.substr(start, end - start);
//			i++;
//			break;
//		case 4:
//			data.designation = s.substr(start, end - start);
//			i++;
//			break;
//		default:
//			break;
//		}
//
//
//	} while (end != -1);
//	user.push_back(data);
//	/*for (int k = 0; k < j; k++) {
//		cout << k + 1 << ". " << categories[k] << " " << amount[k] <<endl;
//	}*/
//}
//
//int getWeekOfMonth(int day) {
//	// Your implementation to determine the week of the month goes here
//	// Return the week number
//	if (day == 1 || day < 8)
//		return 1;
//	else if (day > 7 && day < 15)
//		return 2;
//	else if (day > 14 && day < 22)
//		return 3;
//	else if (day > 21 && day < 29)
//		return 4;
//	else if (day > 28 && day < 31)
//		return 5;
//	else {
//		return day;
//	}
//}
//
//void splitDate(const string& date, int& year, int& month, int& day) {
//	year = stoi(date.substr(0, 4));
//	month = stoi(date.substr(5, 2));
//	day = stoi(date.substr(8, 2));
//}
//void splitDate(const string& date, int& year, int& month) {
//	year = stoi(date.substr(0, 4));
//	month = stoi(date.substr(5, 2));
//}
