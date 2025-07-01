#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string name,line,data;
    cout << "Enter the name of the file ";
    cin  >> name;
    cin.ignore();
    

    cout << "Enter data to add (end with an empty line):\n";
    while (getline(cin, line)) {
        if (line.empty()) break;
        data += line + "\n";
    }

    ofstream myfile(name);
    if (myfile.is_open()) {
        myfile << data;
        myfile.close();
        cout << "Data written to " << name << endl;
    } else {
        cout << "Unable to open file." << endl;
    }
    return 0;

}