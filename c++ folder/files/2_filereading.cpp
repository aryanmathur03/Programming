#include <iostream>
using namespace std;
#include <fstream>

int main(){
   // Create a text string, which is used to output the text file
string myText;

// Read from the text file
fstream MyReadFile("filename.txt");
MyReadFile << "aryan mathru ";
// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
}