// Are sorted automatically in ascending order.
// Are unique, meaning equal or duplicate values are ignored.
// Can be added or removed, but the value of an existing element cannot be changed.
// Cannot be accessed by index numbers, because the order is based on sorting and not indexing.

#include <iostream>
using namespace std;
#include <set>
int main(){
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // Print set elements
    for (string car : cars) {
        cout << car << "\n";
}
    // Sort elements in a set in descending order
    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    // Print the elements
    for (int num : numbers) {
        cout << num << "\n";
}
    
  // Add new elements
  cars.insert("Tesla");
  cars.insert("VW");
  cars.insert("Toyota");
  cars.insert("Audi");

  // Print set elements
  for (string car : cars) {
    cout << car << "\n";
  }
  // Remove elements
    cars.erase("Volvo");
    cars.erase("Mazda");
    // Remove all elements
    cars.clear();
    cout << cars.size();
    
    return 0;
}