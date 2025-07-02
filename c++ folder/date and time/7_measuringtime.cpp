#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;
 
int main() {
  time_t now;
  time_t nextyear;
  struct tm datetime;

  now = time(NULL);
  datetime = *localtime(&now);
  datetime.tm_year = datetime.tm_year + 1;
  datetime.tm_mon = 0;
  datetime.tm_mday = 1;
  datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
  datetime.tm_isdst = -1;
  nextyear = mktime(&datetime);

  int diff = difftime(nextyear, now);
  
  cout << diff << " seconds until next year";
  
  return 0;
}
