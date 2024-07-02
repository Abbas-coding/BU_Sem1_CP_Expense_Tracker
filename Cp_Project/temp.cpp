//#include <iostream>
//#include <string>
//#include<Windows.h>
//#include <fstream>
//#include<list>
//#include<conio.h>
//#include <iterator>
//#include <algorithm> 
//using namespace std;
//
//int overview(string username);
//void read(string filename);
//
//int main() {
//    // Sample data (monthly expenses)
//    int expenses[] = { 500, 750, 800, 600, 850, 650, 900,800,700 }; // Replace with your actual data
//
//    //overview("Abbas");
//    
//    read("Abbas.txt");
//
//    system("pause");
//
//    return 0;
//}
//
//int overview(string username) {
//    string filename = username + ".txt";
//    cout << filename << endl;
//    ifstream inFile(filename);
//    if (inFile.is_open()) {
//        cout << "File opened" << endl;
//    }
//    else {
//        cout << "No file exists" << endl;
//    }
//    return 0;
//}
//
//
//
////Read lines from the end of the file
//
//void read(string filename) {
//    ifstream file;
//    file.open(filename);
//    // Make sure the file opened properly
//
//    list<string> list;
//    string buffer;
//    char c;
//    while (getline(file, buffer)) {
//        bool found = false;
//        for (int i = 0; i < buffer.length(); i++) {
//            if (buffer[i] == '@') {
//                cout << "@ sign found \n";
//                buffer.erase(0,1);
//                list.clear();
//                found = true;
//                break;
//            }
//            else {
//                found = false;
//            }
//        }
//        if(found){
//        list.push_back(buffer);
//        }
//        else
//        {
//            list.push_back(buffer);
//        }
//    }
//    
//    file.close();
//
//    copy(
//        list.begin(),
//        list.end(),
//        ostream_iterator<string>(cout, "\n")
//    );
//}