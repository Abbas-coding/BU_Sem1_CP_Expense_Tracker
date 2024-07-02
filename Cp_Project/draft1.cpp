//#include<iostream>
//#include<Windows.h>
//#include <fstream>
//#include<conio.h>
//#include<string>
//using namespace std;
//
//void menu1(int choice);
//void registerUser();
//void loginUser();
//void displaySavings(int startMonth, int endMonth, int income, int expenses[]);
//void displayExpense(int startMonth, int endMonth, string category, int amount[]);
//void displayMonthlyCatExp(string month, string(&categories)[6], int(&expenses)[6]);
//int welcome();
//void color(int color);
//void gotoxy(int x, int y);
//string username, filename;
//string password;
//
//
//int main() {
//	// Sample data (monthly expenses)
//	int expenses[] = { 500, 750, 800, 600, 850, 650,  }; // Replace with your actual data
//	string categories[] = { "Health    ", "Transport ", "Rent      ", "Utilities ","Food      ", "Groceries " };
//
//	
//	// welcome screen
//	int log = welcome();
//	//cout << "\n\n\t" << log;
//	menu1(log);
//
//
//	// Wait for user input (e.g., press any key to exit)
//	system("pause");
//
//	//// bar chart functions
//	//displayExpense(2, 10, "Investment", expenses);
//	//displaySavings(2, 10, 1150, expenses);
//	//displayMonthlyCatExp("Jan", categories, expenses);
//	return 0;
//}
//
//void menu1(int choice) {
//
//	switch (choice) {
//	case 2:
//	{
//		registerUser();
//		break;
//	}
//	case 1:
//	{
//		loginUser();
//		break;
//	}
//	default:
//	{
//		cout << "Invalid choice. Exiting program.";
//		break;
//	}
//	}
//}
//void registerUser() {
//	string password, u, p;
//
//	cout << "\n\n\tEnter a username: ";
//	cin >> username;
//	ifstream inFile("users.txt");
//	while (inFile >> u >> p)
//	{
//		if (inFile.is_open())
//		{
//			if (username == u)
//			{
//				cout << "\n\tSorry! Username already taken, Choose a different one.";
//			}
//			inFile.close();
//		}
//	}
//	filename = username + ".txt";
//	cout << "\tEnter a password: ";
//	cin >> password;
//	ofstream outFile("users.txt", ios::app);
//	if (outFile.is_open()) {
//		outFile << username << " " << password << endl;
//		outFile.close();
//		cout << "\n\tRegistration successful!" << endl;
//		filename = username + ".txt";
//	}
//	else {
//		cout << "\n\tError: Unable to open file for registration." << endl;
//	}
//}
//void loginUser() {
//	string password, u, p;
//	bool found = false;
//
//	cout << "\n\tEnter your username: ";
//	cin >> username;
//
//	cout << "\tEnter your password: ";
//	cin >> password;
//
//
//	ifstream inFile("users.txt");
//	if (inFile.is_open()) {
//		while (inFile >> u >> p) {
//			if (u == username && p == password) {
//				found = true;
//				break;
//			}
//		}
//		inFile.close();
//
//		if (found) {
//			cout << "\n\tLogin successful!" << endl;
//		}
//		else {
//			cout << "\n\tInvalid username or password." << endl;
//		}
//	}
//	else {
//		cout << "Error: Unable to open file for login." << endl;
//	}
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
//	int Set[] = { 7,7 }; // color code for white
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
//		gotoxy(20, 8);
//		color(Set[1]);
//		cout << "\t 2. register an account\n\t";
//
//		key = _getch();
//
//		if (key == 75 && (counter == 2)) { //72 up Arr key, 75 left key
//			counter--;
//		}
//		if (key == 77 && (counter == 1)) { //80 down Arr key, 77 right key
//			counter++;
//		}
//		if (key == '\r') { // '\z' carriage return OR Enter key
//			if (counter == 1) {
//				log = counter;
//				return log;
//				break;
//			}
//			if (counter == 2) {
//				log = counter;
//				color(7);
//				return log;
//				break;
//			}
//		}
//		// by default color white
//		Set[0] = 7;
//		Set[1] = 7;
//
//		if (counter == 1) {
//			Set[0] = 12; // setting color to red
//		}
//		if (counter == 2) {
//			Set[1] = 12; // setting color to red
//		}
//	}
//}
//
//
//void displayExpense(int startMonth, int endMonth, string category, int amount[]) {
//	string months[12] = { "Jan ", "Feb ", "Mar ", "Apr ",
//						"May ", "June", "July", "Aug ",
//						"Sept", "Oct ", "Nov ", "Dec " };
//	cout << "\t" << category << " Expenses for the Months " << months[startMonth - 1] << " - " << months[endMonth - 1] << endl;
//	int j = 0;
//	for (int i = startMonth; i <= endMonth; ++i) {
//		cout << "\t  Month " << months[i - 1] << ": ";
//		string bar(amount[j] / 50, '#'); // Replace '█' with '#'
//		cout << bar << "   $" << amount[j] << endl;
//		j++;
//	}
//}
//
//void displaySavings(int startMonth, int endMonth, int income, int expenses[]) {
//	string months[12] = { "Jan ", "Feb ", "Mar ", "Apr ",
//						"May ", "June", "July", "Aug ",
//						"Sept", "Oct ", "Nov ", "Dec " };
//	cout << "\t" << " Savings for the Months " << months[startMonth - 1] << " - " << months[endMonth - 1] << endl;
//	int j = 0;
//	int savings;
//	for (int i = startMonth; i <= endMonth; ++i) {
//		savings = income - expenses[j];
//		cout << "\t  Month " << months[i - 1] << ": ";
//		string bar(savings / 20, '#'); // Replace '█' with '#'
//		cout << bar << "   $" << savings << endl;
//		j++;
//	}
//}
//
//void displayMonthlyCatExp(string month, string (&categories)[6], int(&expenses)[6]) {
//	cout << "\t Expenses for " << month << endl;
//	for (int i = 0; i < ( (sizeof(categories[0]) * 6) / sizeof(categories[0])); i++) {
//		cout << "\t  Month " << categories[i] << ": ";
//		string bar(expenses[i] / 50, '#'); // Replace '█' with '#'
//		cout << bar << "   $" << expenses[i] << endl;
//	}
//}