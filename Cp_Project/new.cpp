//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace std;
//
//bool isInt(const string& str) {
//	int n;
//	istringstream istreamObject(str); // Create istringstream from string
//	istreamObject >> noskipws >> n; // Get an int value from stream
//	// Check if stringstream has reached its end and not failed
//	return istreamObject.eof() && !istreamObject.fail();
//}
//
//struct Data {
//	int amount[12];
//	string categories[10];
//};
//
//Data user;
//void tokenize(string s, string del)
//{
//	int start, end = -1 * del.size();
//	int i = 0;
//	int j = 0;
//	do {
//		start = end + del.size();
//		end = s.find(del, start);
//		if (isInt(s.substr(start, end - start))) {
//			//cout << s.substr(start, end - start) << endl;
//			user.amount[i] = stoi(s.substr(start, end - start));
//			i++;
//		}
//		else {
//		//cout << s.substr(start, end - start) << endl;
//		user.categories[j] = s.substr(start, end - start);
//		j++;
//		}
//	} while (end != -1);
//	/*for (int k = 0; k < j; k++) {
//		cout << k + 1 << ". " << categories[k] << " " << amount[k] <<endl;
//	}*/
//}
//int main()
//{
//	// Takes C++ string with any separator
//	string a = "Health 500 Transport 20 Rent 30 Utilities 60 Food 50 Groceries 560";
//	tokenize(a, " ");
//	for (int k = 0; k < 6; k++) {
//		cout << k + 1 << ". "  << " " << user.amount[k] <<endl;
//	}
//	cout << endl;
//
//	return 0;
//}
