//file creation

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!" <<endl;
  MyFile  << "aryan ";

  // Close the file
  MyFile.close();
}