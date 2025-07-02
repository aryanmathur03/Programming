// #include <iostream>
// #include <ctime>  // Import the ctime library
// using namespace std;
 
// int main () {
//   time_t timestamp = time(NULL);
//   struct tm datetime = *localtime(&timestamp);

//   cout << asctime(&datetime);
//   return 0;
// }

// // Note: This example displays the server's local time, which may differ from your local time.


// mktime correct the date Automatically if we enter wrong data
#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main () {
  // Create the datetime structure and use mktime to correct mistakes
  struct tm datetime;
  datetime.tm_year = 2022 - 1900; // Number of years since 1900
  datetime.tm_mon = 0; // 0 is January
  datetime.tm_mday = 32;
  datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
  datetime.tm_isdst = -1;
  mktime(&datetime);

  cout << asctime(&datetime);

  return 0;
}
