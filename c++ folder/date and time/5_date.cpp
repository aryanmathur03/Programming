#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main() {
  time_t timestamp = time(NULL);
  struct tm datetime = *localtime(&timestamp);

  char output[50];

  strftime(output, 50, "%B %e, %Y", &datetime);
  cout << output << "\n";

  strftime(output, 50, "%I:%M:%S %p", &datetime);
  cout << output << "\n";

  strftime(output, 50, "%m/%d/%y", &datetime);
  cout << output << "\n";

  strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
  cout << output << "\n";

  return 0;
}