//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//void menu2();
//int numexpenses = 0;
//const int maxsize = 100;
//string fileName;
//struct users {
//	string username;
//	string password;
//	int familymembers;
//	double income;
//}userInfo;
//struct addExpense {
//	string category;
//	string description;
//	double amount;
//	string date;
//	string store;
//};
//
//// declarations of functions
//void menu2();
//// functions to add expenses
//void utilitiesExpense(string& fileName);
//void educationExpense(string& fileName);
//void entertainmentExpense(string& fileName);
//void groceryExpense(string& fileName);
//void healthExpense(string& fileName);
//void extraExpense(string& fileName);
//void familyExpense(string& fileName);
//// functions to display expenses
//void displayGrocery(const string& fileName, addExpense groceryExpenses[], int& numExpenses);
//void displayExtraExpense(const string& fileName, addExpense extraexpenses[], int& numExpenses);
//void displayHealth(const string& fileName, addExpense healthxpenses[], int& numExpenses);
//void displayFamilyExpense(const string& fileName, addExpense familyexpenses[], int& numExpenses);
//void displayEducation(const string& fileName, addExpense educationexpenses[], int& numExpenses);
//void displayUtilities(const string& fileName, addExpense utilitiesexpenses[], int& numExpenses);
//void displayEntertainment(const string& fileName, addExpense entertainmentxpenses[], int& numExpenses);
//bool isFileEmpty(const string& fileName);
//// the purpose of this function is to check whether a username entered by a user already exists
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
//// function to register user
//bool registerUser() {
//	bool check = false;
//	cout << "Enter username: ";
//	cin >> userInfo.username;
//
//	if ("users.txt" != NULL) { // calls the check username function only if the file is not empty
//		check = checkUsername(userInfo.username);
//	}
//	if (check) // if username already exists
//	{
//		cout << "Username already exists! register again with a new username." << endl;
//		return false;
//	}
//	else // if username doesnt exist already
//	{
//		fileName = userInfo.username + ".txt";
//		cout << "Enter password: ";
//		cin >> userInfo.password;
//		bool flag1 = false, flag2 = false;
//
//		cout << "Enter your income/salary: ";
//		while (!flag1) {
//			cin >> userInfo.income;
//			if (userInfo.income > 0)
//			{
//				flag1 = true;
//				break;
//			}
//			else {
//				cout << "Invalid Input! Enter you Income Again." << endl;
//			}
//		}
//		cout << "Enter the number of your family members: ";
//		while (!flag2) {
//			cin >> userInfo.familymembers;
//			if (userInfo.familymembers > 0)
//			{
//				flag2 = true;
//			}
//			else {
//				cout << "Invalid Input! Enter number of your family members Again." << endl;
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
//// function to login
//bool loginUser()
//{
//	string u, p, name, password;
//	bool flag = 0;
//	cout << "Login Info:" << endl;
//	cout << "Enter your username: " << endl;
//	cin >> name;
//	cout << "Enter your password: " << endl;
//	cin >> password;
//	fstream inFile("users.txt", ios::in); // Open file for reading
//	if (inFile.is_open()) {
//		while (inFile >> u >> p) {
//
//			if (u == name && p == password) {
//				inFile.close();
//				flag = 1;
//				fileName = name + ".txt";
//				cout << "Login Successful" << endl;
//				return true;
//			}
//		}inFile.close();
//		if (!flag) {
//			cout << "Login Unsuccessful, please provide correct credentials next time!" << endl;
//			return false;
//		}
//	}
//	else {
//		cout << "Error: Unable to open file for login." << endl;
//		inFile.close();
//		return false;
//	}
//}
//// function implemented when user forgets password
//bool forgetUser()
//
//{
//	string username2, password;
//	double income2;
//	int familymembers2;
//	cout << "In order to retrieve your password, some details are required: " << endl;
//	// the following info is taken to cross check userInfo from the file to retrieve password
//	cout << "Enter your username: " << endl;
//	cin >> username2;
//	cout << "Enter your income: ";
//	cin >> income2;
//	cout << "Enter family members: ";
//	cin >> familymembers2;
//	bool flag = 0;
//	string u, p;
//	double i;
//	int f;
//	fstream inFile("users.txt", ios::in); // Open file for reading
//	if (inFile.is_open()) {
//		while (inFile >> u >> p >> i >> f) { // reads the file, stores the values in u (username string),p (password string),i (income double),f (family members int)
//			// compares the data from the file with the info entered by the user earlier to match
//			if (username2 == u && income2 == i && familymembers2 == f) {
//
//				cout << "Password retrieved!" << endl;
//				cout << "Your password is: " << p;
//				flag = 1;
//				return true;
//			}
//		}
//		if (!flag) {
//			cout << "Password Retrieval Unsuccessful, please provide correct credentials next time!" << endl;
//			return false;
//
//		}
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//		return false;
//	}
//}
//bool menu1()
//{
//	int choose;
//	cout << "Type\n1-register\n2-login\n3-forget password\n0-Exit\n" << endl;
//	cin >> choose;
//	while (choose != 0)
//	{
//		switch (choose)
//		{
//		case 1:
//		{
//			if (registerUser()) {
//				if (loginUser()) {
//					return true;
//				}
//			}
//
//			return false;
//			break;
//		}
//		case 2:
//		{
//
//			if (loginUser())
//			{
//				return true;
//			}
//			else {
//				cout << "You cannot Log in" << endl;
//				return false;
//			}
//		}
//		break;
//		case 3:
//		{
//			if (forgetUser())
//			{
//				loginUser();
//				return true;
//			}
//			cout << "Please Enter correct credentials next time." << endl;
//			return false;
//		}
//		default:
//			cout << "Invalid Input" << endl;
//			return false;
//			break;
//		}
//		cin >> choose;
//
//	}
//}
//
//int numsize = 0;
//// menu to add expenses in different categories
//void menu2()
//{
//	cout << "Add Expenses: " << endl;
//	cout << "Type\n1-Utilities\n2-Grocery\n3-Health\n4-Entertainment\5-Education\n6-Family Expenses\n7-extra\n0-Exit" << endl;
//	int choose;
//
//	do {
//		cin >> choose;
//		switch (choose)
//		{
//		case 1:
//		{
//			utilitiesExpense(fileName);
//			break;
//		}
//		case 2:
//		{
//
//			groceryExpense(fileName);
//
//			break;
//		}
//		case 3:
//		{
//			healthExpense(fileName);
//
//			break;
//		}
//		case 4:
//		{
//			entertainmentExpense(fileName);
//			break;
//		}
//		case 5:
//		{
//			educationExpense(fileName);
//
//			break;
//		}
//		case 6:
//		{
//			familyExpense(fileName);
//
//			break;
//		}
//		case 7:
//		{
//			extraExpense(fileName);
//
//			break;
//		}
//		case 0:
//		{
//			cout << "Thank You!" << endl;
//			break;
//		}
//		}
//	} while (choose != 0);
//	return;
//}
//// add grocery expense
//void groceryExpense(string& fileName) {
//	addExpense newgroceryexpense;
//
//	cout << "Enter grocery description: ";
//	cin >> newgroceryexpense.description;
//	cout << "Enter grocery amount: ";
//	cin >> newgroceryexpense.amount;
//	cout << "Enter date of purchase (YYYY-MM-DD): ";
//	cin >> newgroceryexpense.date;
//	cout << "Enter store where purchased: ";
//	cin >> newgroceryexpense.store;
//	newgroceryexpense.category = "grocery";
//	fstream outFile(fileName, ios::app); // Open file for appending
//	if (outFile.is_open()) {
//		outFile << newgroceryexpense.category << " " << newgroceryexpense.description << " " << newgroceryexpense.amount << " "
//			<< newgroceryexpense.date << " " << newgroceryexpense.store << " "
//			<< endl;
//		outFile.close();
//		cout << "Grocery expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file for adding grocery expense." << endl;
//	}
//}
//// add utility expense
//void utilitiesExpense(string& fileName) {
//	addExpense newutilitiesexpense;
//
//	cout << "Enter utility description: ";
//	cin >> newutilitiesexpense.description;
//	cout << "Enter utility amount: ";
//	cin >> newutilitiesexpense.amount;
//	cout << "Enter date of purchase (YYYY-MM-DD): ";
//	cin >> newutilitiesexpense.date;
//	newutilitiesexpense.category = "utilities";
//	cout << "Add a store (You can type 'none')";
//	cin >> newutilitiesexpense.store;
//	fstream outFile(fileName, ios::app); // Open file for appending
//	if (outFile.is_open()) {
//		outFile << newutilitiesexpense.category << " " << newutilitiesexpense.description << " " << newutilitiesexpense.amount << " "
//			<< newutilitiesexpense.date << " " << newutilitiesexpense.store
//			<< endl;
//		outFile.close();
//		cout << "Utility expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//// display utility expense
//void displayUtilities(const string& fileName, addExpense utilitiesExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool utilitiesFound = false; // Flag to track if utilities expenses are found
//	while (numExpenses < maxsize && file >> utilitiesExpenses[numExpenses].category >> utilitiesExpenses[numExpenses].description
//		>> utilitiesExpenses[numExpenses].amount
//		>> utilitiesExpenses[numExpenses].date
//		>> utilitiesExpenses[numExpenses].store) {
//		numExpenses++;
//		if (utilitiesExpenses[numExpenses - 1].category == "utilities") {
//			utilitiesFound = true; // Set flag to true if any utilities expenses are found
//		}
//	}
//	file.close();
//	if (!utilitiesFound) { // Check if utilities expenses are found
//		cout << "No utilities expenses added yet.\n";
//		return;
//	}
//	cout << "Utilities Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (utilitiesExpenses[i].category == "utilities") {
//			cout << "Description: " << utilitiesExpenses[i].description << ", Amount: $" << utilitiesExpenses[i].amount
//				<< ", Date: " << utilitiesExpenses[i].date << ", Store: " << utilitiesExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// add health expense
//void healthExpense(string& fileName) {
//	addExpense newhealthexpense;
//
//	cout << "Enter health expense description: ";
//	cin >> newhealthexpense.description;
//	cout << "Enter health expense amount: ";
//	cin >> newhealthexpense.amount;
//	cout << "Enter date  (YYYY-MM-DD): ";
//	cin >> newhealthexpense.date;
//	cout << "Enter hospital name: ";
//	cin >> newhealthexpense.store;
//	newhealthexpense.category = "health";
//	fstream outFile(fileName, ios::app); // Open file for appending
//	cout << "\n " << fileName << " \n\n";
//	if (outFile.is_open()) {
//		outFile << newhealthexpense.category << " " << newhealthexpense.description << " " << newhealthexpense.amount << " "
//			<< newhealthexpense.date << " " << newhealthexpense.store << " " << endl;
//		outFile.close();
//		cout << "Utility expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//// display health expense
//
//void displayHealth(const string& fileName, addExpense healthExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool healthFound = false; // Flag to track if health expenses are found
//	while (numExpenses < maxsize && file >> healthExpenses[numExpenses].category >> healthExpenses[numExpenses].description
//		>> healthExpenses[numExpenses].amount
//		>> healthExpenses[numExpenses].date
//		>> healthExpenses[numExpenses].store) {
//		numExpenses++;
//		if (healthExpenses[numExpenses - 1].category == "health") {
//			healthFound = true; // Set flag to true if any health expenses are found
//		}
//	}
//	file.close();
//	if (!healthFound) { // Check if health expenses are found
//		cout << "No health expenses added yet.\n";
//		return;
//	}
//	cout << "Health Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (healthExpenses[i].category == "health") {
//			cout << "Description: " << healthExpenses[i].description << ", Amount: $" << healthExpenses[i].amount
//				<< ", Date: " << healthExpenses[i].date << ", Store: " << healthExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// add entertainment expense
//void entertainmentExpense(string& fileName) {
//	addExpense newentertainmentexpense;
//
//	cout << "Enter entertainment description: ";
//	cin >> newentertainmentexpense.description;
//	cout << "Enter entertainment amount: ";
//	cin >> newentertainmentexpense.amount;
//	cout << "Enter date (YYYY-MM-DD): ";
//	cin >> newentertainmentexpense.date;
//	cout << "Enter venue: ";
//	cin >> newentertainmentexpense.store;
//	newentertainmentexpense.category = "entertainment";
//	fstream outFile(fileName, ios::app); // Open file for appending
//	if (outFile.is_open()) {
//		outFile << newentertainmentexpense.category << " " << newentertainmentexpense.description << " " << newentertainmentexpense.amount << " "
//			<< newentertainmentexpense.date << " " << newentertainmentexpense.store << " " << endl;
//		outFile.close();
//		cout << "Entertainment expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//// display entertainment expense
//void displayEntertainment(const string& fileName, addExpense entertainmentExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool entertainmentFound = false; // Flag to track if entertainment expenses are found
//	while (numExpenses < maxsize && file >> entertainmentExpenses[numExpenses].category >> entertainmentExpenses[numExpenses].description
//		>> entertainmentExpenses[numExpenses].amount
//		>> entertainmentExpenses[numExpenses].date
//		>> entertainmentExpenses[numExpenses].store) {
//		numExpenses++;
//		if (entertainmentExpenses[numExpenses - 1].category == "entertainment") {
//			entertainmentFound = true; // Set flag to true if any entertainment expenses are found
//		}
//	}
//	file.close();
//	if (!entertainmentFound) { // Check if entertainment expenses are found
//		cout << "No entertainment expenses added yet.\n";
//		return;
//	}
//	cout << "Entertainment Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (entertainmentExpenses[i].category == "entertainment") {
//			cout << "Description: " << entertainmentExpenses[i].description << ", Amount: $" << entertainmentExpenses[i].amount
//				<< ", Date: " << entertainmentExpenses[i].date << ", Venue: " << entertainmentExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// add any extra expense
//void extraExpense(string& fileName) {
//	addExpense newextraexpense;
//
//	cout << "Enter extra expense description: ";
//	cin >> newextraexpense.description;
//	cout << "Enter extra expense amount: ";
//	cin >> newextraexpense.amount;
//	cout << "Enter date (YYYY-MM-DD): ";
//	cin >> newextraexpense.date;
//	cout << "Enter store/venue: ";
//	cin >> newextraexpense.store;
//	newextraexpense.category = "extra";
//	fstream outFile(fileName, ios::app); // Open file for appending
//	if (outFile.is_open()) {
//		outFile << newextraexpense.category << " " << newextraexpense.description << " " << newextraexpense.amount << " "
//			<< newextraexpense.date << " " << newextraexpense.store << " " << endl;
//		outFile.close();
//		cout << "Extra expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//// display extra expense
//
//void displayExtraExpense(const string& fileName, addExpense extraExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool extraFound = false; // Flag to track if extra expenses are found
//	while (numExpenses < maxsize && file >> extraExpenses[numExpenses].category >> extraExpenses[numExpenses].description
//		>> extraExpenses[numExpenses].amount
//		>> extraExpenses[numExpenses].date
//		>> extraExpenses[numExpenses].store) {
//		numExpenses++;
//		if (extraExpenses[numExpenses - 1].category == "extra") {
//			extraFound = true; // Set flag to true if any extra expenses are found
//		}
//	}
//	file.close();
//	if (!extraFound) { // Check if extra expenses are found
//		cout << "No extra expenses added yet.\n";
//		return;
//	}
//	cout << "Extra Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (extraExpenses[i].category == "extra") {
//			cout << "Description: " << extraExpenses[i].description << ", Amount: $" << extraExpenses[i].amount
//				<< ", Date: " << extraExpenses[i].date << ", Store/Venue: " << extraExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// add family expense
//void familyExpense(string& fileName) {
//	addExpense newfamilyexpense;
//
//	cout << "Enter family expense description: ";
//	cin >> newfamilyexpense.description;
//	cout << "Enter family expense amount: ";
//	cin >> newfamilyexpense.amount;
//	cout << "Enter date (YYYY-MM-DD): ";
//	cin >> newfamilyexpense.date;
//	cout << "Enter store/venue: ";
//	cin >> newfamilyexpense.store;
//	newfamilyexpense.category = "family";
//	fstream outFile(fileName, ios::app); // Open file for appending
//	if (outFile.is_open()) {
//		outFile << newfamilyexpense.category << " " << newfamilyexpense.description << " " << newfamilyexpense.amount << " "
//			<< newfamilyexpense.date << " " << newfamilyexpense.store << " " << endl;
//		outFile.close();
//		cout << "family expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//// display family expense
//void displayFamilyExpense(const string& fileName, addExpense familyExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool familyFound = false; // Flag to track if family expenses are found
//	while (numExpenses < maxsize && file >> familyExpenses[numExpenses].category >> familyExpenses[numExpenses].description
//		>> familyExpenses[numExpenses].amount
//		>> familyExpenses[numExpenses].date
//		>> familyExpenses[numExpenses].store) {
//		numExpenses++;
//		if (familyExpenses[numExpenses - 1].category == "family") {
//			familyFound = true; // Set flag to true if any family expenses are found
//		}
//	}
//	file.close();
//	if (!familyFound) { // Check if family expenses are found
//		cout << "No family expenses added yet.\n";
//		return;
//	}
//	cout << "Family Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (familyExpenses[i].category == "family") {
//			cout << "Description: " << familyExpenses[i].description << ", Amount: $" << familyExpenses[i].amount
//				<< ", Date: " << familyExpenses[i].date << ", Store: " << familyExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// add education expense
//void educationExpense(string& fileName) {
//	addExpense neweducationexpense;
//
//	cout << "Enter education expense description: ";
//	cin >> neweducationexpense.description;
//	cout << "Enter education expense amount: ";
//	cin >> neweducationexpense.amount;
//	cout << "Enter date (YYYY-MM-DD): ";
//	cin >> neweducationexpense.date;
//	cout << "Enter bookstore/stationery name: ";
//	cin >> neweducationexpense.store;
//	neweducationexpense.category = "education";
//	fstream outFile(fileName, ios::app); // Open file for appending
//	cout << "\n " << fileName << " \n\n";
//	if (outFile.is_open()) {
//		outFile << neweducationexpense.category << " " << neweducationexpense.description << " " << neweducationexpense.amount << " "
//			<< neweducationexpense.date << " " << neweducationexpense.store << " " << endl;
//		outFile.close();
//		cout << "Education expense added successfully.\n";
//	}
//	else {
//		cout << "Error: Unable to open file." << endl;
//	}
//}
//// display education expense
//void displayEducation(const string& fileName, addExpense educationExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool educationFound = false; // Flag to track if education expenses are found
//	while (numExpenses < maxsize && file >> educationExpenses[numExpenses].category >> educationExpenses[numExpenses].description
//		>> educationExpenses[numExpenses].amount
//		>> educationExpenses[numExpenses].date
//		>> educationExpenses[numExpenses].store) {
//		numExpenses++;
//		if (educationExpenses[numExpenses - 1].category == "education") {
//			educationFound = true; // Set flag to true if any education expenses are found
//		}
//	}
//	file.close();
//	if (!educationFound) { // Check if education expenses are found
//		cout << "No education expenses added yet.\n";
//		return;
//	}
//	cout << "Education Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (educationExpenses[i].category == "education") {
//			cout << "Description: " << educationExpenses[i].description << ", Amount: $" << educationExpenses[i].amount
//				<< ", Date: " << educationExpenses[i].date << ", Bookstore/Stationery: " << educationExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// display grocery expense
//void displayGrocery(const string& fileName, addExpense groceryExpenses[], int& numExpenses) {
//	fstream file(fileName, ios::in); // Open file for reading
//	if (!file.is_open()) {
//		cerr << "Error: Unable to open file " << fileName << endl;
//		return;
//	}
//	numExpenses = 0;
//	bool groceryFound = false; // Flag to track if grocery expenses are found
//	while (numExpenses < maxsize && file >> groceryExpenses[numExpenses].category >> groceryExpenses[numExpenses].description
//		>> groceryExpenses[numExpenses].amount
//		>> groceryExpenses[numExpenses].date
//		>> groceryExpenses[numExpenses].store) {
//		numExpenses++;
//		if (groceryExpenses[numExpenses - 1].category == "grocery") {
//			groceryFound = true; // Set flag to true if any grocery expenses are found
//		}
//	}
//	file.close();
//	if (!groceryFound) { // Check if grocery expenses are found
//		cout << "No grocery expenses added yet.\n";
//		return;
//	}
//	cout << "Grocery Expenses:\n";
//	for (int i = 0; i < numExpenses; ++i) {
//		if (groceryExpenses[i].category == "grocery") {
//			cout << "Description: " << groceryExpenses[i].description << ", Amount: $" << groceryExpenses[i].amount
//				<< ", Date: " << groceryExpenses[i].date << ", Store: " << groceryExpenses[i].store
//				<< endl;
//		}
//	}
//}
//// menu to view expense from different categories
//void menu3() {
//	cout << "Which Category Do You Want To Display? Type 0 to Exit" << endl;
//	cout << "Type:\n1-View Utility Expenses\n2-View Grocery Expenses\n3-View Health Expenses\n4-View Entertainment Expenses\n5-View Education Expenses\n6-View Family Expenses\n7-View Extra Expenses\n";
//
//	int choose_3;
//	do {
//		cin >> choose_3;
//
//		if (choose_3 == 0) {
//			cout << "Thank You!" << endl;
//			return;
//		}
//
//		if (isFileEmpty(fileName)) {
//			cout << "No expenses found. Please add expenses first.\n";
//			return;
//		}
//
//		switch (choose_3) {
//		case 1: {
//			addExpense utilitiesexpense[maxsize];
//			displayUtilities(fileName, utilitiesexpense, numsize);
//			break;
//		}
//		case 2: {
//			addExpense groceryexpenses[maxsize];
//			displayGrocery(fileName, groceryexpenses, numsize);
//			break;
//		}
//		case 3: {
//			addExpense healthexpenses[maxsize];
//			displayHealth(fileName, healthexpenses, numsize);
//			break;
//		}
//		case 4: {
//			addExpense entertainmentexpenses[maxsize];
//			displayEntertainment(fileName, entertainmentexpenses, numsize);
//			break;
//		}
//		case 5: {
//			addExpense educationexpenses[maxsize];
//			displayEducation(fileName, educationexpenses, numsize);
//			break;
//		}
//		case 6: {
//			addExpense familyexpenses[maxsize];
//			displayFamilyExpense(fileName, familyexpenses, numsize);
//			break;
//		}
//		case 7: {
//			addExpense extraexpenses[maxsize];
//			displayExtraExpense(fileName, extraexpenses, numsize);
//			break;
//		}
//		default: {
//			cout << "Invalid choice. Please select a valid option.\n";
//			break;
//		}
//		}
//
//		cout << "Which Category Do You Want To Display? Type 0 to Exit" << endl;
//		cout << "Type:\n1-View Utility Expenses\n2-View Grocery Expenses\n3-View Health Expenses\n4-View Entertainment Expenses\n5-View Education Expenses\n6-View Family Expenses\n7-View Extra Expenses\n";
//	} while (choose_3 != 0);
//}
////this function is called in view category function i.e. menu3, it checks if the file is empty or not. Incase its empty, i.e. there aren't any previous expenses added a message will be printed in menu3 and will not proceed to view any expense because its empty.
//bool isFileEmpty(const string& fileName) {
//	ifstream file(fileName);
//	return file.peek() == ifstream::traits_type::eof(); // checks if the file is empty
//}
//void main()
//{
//	if (menu1()) { // if login is successful only then the rest will be diplayed
//		menu2(); //add a category
//		menu3(); //display a category
//	}
//	// a general menu is to be created when the entire code is integrated
//
//	system("pause");
//}
