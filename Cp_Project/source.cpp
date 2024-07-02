//#include<iostream>
//#include<Windows.h>
//#include<conio.h>
//#include<fstream>
//#include<sstream>
//#include<vector>
//#include<string>
//#include<list>
//using namespace std;
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
//// function to set color
//void color(int color) {
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//void read(string filename, string dated);
//void tokenize(string s, string del);
//bool isInt(const string& str);
//void splitDate(const string& date, int& year, int& month, int& day);
//void splitDate(const string& date, int& year, int& month);
//
//// function to go to a location on the console
//void gotoxy(int x, int y) {
//	COORD c;
//	c.X = x;
//	c.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
//
//
//int main() {
//	int choice;
//	string date;
//	cout << "1. Generate monthly report: \n";
//	cout << "Select your choice to continue: ";
//	cin >> choice;
//	if (choice == 1) {
//		read("mahnoor.txt", "2024-05");
//	}
//	else {
//		cout << "Incorrect Option, closing the program!!";
//	}
//	return 0;
//}
//
//
//void read(string filename, string dated) {
//	int year1, month1;
//	splitDate(dated, year1, month1);
//	int monthno = stoi(dated.substr(6, 1));
//    ifstream file;
//	string categories[7];
//	int amount[7];
//	int limit =0;
//    file.open(filename);
//    // Make sure the file opened properly
//    string buffer;
//    char c;
//    while (getline(file, buffer)) {
//        bool found = false;
//		tokenize(buffer, " ");
//    }
//	for (auto it = user.begin(); it != user.end(); ++it) {
//		string et;
//		int year, month, day;
//		et = it->date;
//		splitDate(et, year, month, day);
//		if (year == year1 && month == month1) {
//			if (limit > 0) {
//				bool exists = false;
//				for (int k = 0; k < limit; k++) {
//					if (categories[k] == it->category) {
//						amount[k] = amount[k] + it->amount;
//						cout << "\n" << it->amount << endl << limit << endl << it->category << "match"<< endl;
//						exists = true;
//					}
//					
//				}
//				if(!exists){
//				categories[limit] = it->category;
//				amount[limit] = it->amount;
//				cout << "\n" << it->amount << endl << limit << endl << it->category << endl;
//				limit++;
//				}
//			}
//			else {
//			categories[limit] = it->category;
//			amount[limit] = it->amount;
//			limit++;
//			}
//		}
//	}
//	if (limit > 0) {
//		cout << "\tExpenses for the Month: " << months[monthno -1] << endl;
//		for (int j = 0; j < limit; j++) {
//			cout << "\t " << categories[j] << ": ";
//			string bar(amount[j] / 100, '#'); // Replace '' with '#'
//			cout << bar << " $" << amount[j] << endl;
//		}
//	}
//    file.close();
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
//			data.description = s.substr(start, end - start) ;
//			i++;
//			break;
//		case 2:
//			data.amount = stoi( s.substr(start, end - start));
//			i++;
//			break;
//		case 3: 
//			data.date =s.substr(start, end - start);
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
//void splitDate(const string& date, int& year, int& month, int& day) {
//	year = stoi(date.substr(0, 4));
//	month = stoi(date.substr(5, 2));
//	day = stoi(date.substr(8, 2));
//}
//void splitDate(const string& date, int& year, int& month) {
//	year = stoi(date.substr(0, 4));
//	month = stoi(date.substr(5, 2));
//}
//
//
////You can't use an initialization-list for a struct after it's been initialized.You've already default-initialized the two Customer structs when you declared the array customerRecords. Therefore you're going to have either use member - access syntax to set the value of the non - static data members, initialize the structs using a list of initialization lists when you declare the array itself, or you can create a constructor for your struct and use the default operator= member function to initialize the array members.
////
////So either of the following could work :
////
////Customer customerRecords[2];
////customerRecords[0].uid = 25;
////customerRecords[0].name = "Bob Jones";
////customerRecords[1].uid = 25;
////customerRecords[1].namem = "Jim Smith";
////Or if you defined a constructor for your struct like :
////
////	Customer::Customer(int id, string input_name) : uid(id), name(input_name) {}
////You could then do :
////
////	Customer customerRecords[2];
////customerRecords[0] = Customer(25, "Bob Jones");
////customerRecords[1] = Customer(26, "Jim Smith");