#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Create an iterator named it
  vector<string>::iterator it;
  cout << *it << "\n";
  // Use the iterator to loop through the vector
  for (it = cars.begin(); it != cars.end(); ++it) {
    cout << *it << "\n";
  }
   // This will print an empty line since it is at the end of the vector

  return 0;
}
