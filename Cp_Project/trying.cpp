//#include<iostream>
//#include<string>
//#include<vector>
//#include<cctype>
//#include<algorithm>
//using namespace std;
//
//struct Expense {
//    string user; // Username of the associated user
//    string category;
//    string description;
//    double amount;
//    string date;
//    string designation; // Where you are spending it on!
//};
//
//struct FamilyMember {
//    string user; // Username of the associated user
//    string name;
//    vector<Expense> expenses; // A vector of Expense structures
//};
//struct User {
//    string username;
//    string password;
//    int familymembers;
//    double income;
//    string currency;
//    // Add data members for expenses and family members
//    vector<Expense> expenses; // A vector of Expense structures
//    vector<FamilyMember> familyMembers; // A vector of FamilyMember structures
//};
//
//
//int main() {
//    // Create a user
//    User user1;
//    user1.username = "john_doe";
//    user1.password = "secret";
//    user1.familymembers = 3;
//    user1.income = 5000.0;
//    user1.currency = "USD";
//    string str;
//    //transform(user1.currency.begin(), user1.currency.end(), user1.currency.begin(), ::tolower);
//    str = tolower('A');
//
//    // Add expenses for the user
//    Expense expense1;
//    expense1.user = user1.username;
//    expense1.category = "Groceries";
//    expense1.description = "Weekly grocery shopping";
//    expense1.amount = 150.0;
//    expense1.date = "2024-05-05";
//    expense1.designation = "Supermarket";
//    user1.expenses.push_back(expense1);
//
//    // Add family members for the user
//    FamilyMember familyMember1;
//    familyMember1.user = user1.username;
//    familyMember1.name = "Alice";
//    user1.familyMembers.push_back(familyMember1);
//
//    // Display user information
//    cout << "User: " << user1.username << endl;
//    cout << "Income: " << user1.income << " " << user1.currency << endl;
//    cout << "Expenses: " << user1.expenses.size() << endl;
//    cout << "Family Members: " << user1.familyMembers.size() << endl;
//    cout << str;
//
//    return 0;
//}
