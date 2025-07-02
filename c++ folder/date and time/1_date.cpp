// #include <iostream>
// #include <ctime>  // Import the ctime library
// using namespace std;
 
// int main () {
//   // Get the timestamp for the current date and time
//   time_t timestamp;
//   time(&timestamp);

//   // Display the date and time represented by the timestamp
//   cout << ctime(&timestamp);
//   return 0;
// }


// to create a infinte loop showing current time


#include <iostream>
#include <ctime>
#include <cstdlib> // for system()
#include <thread>
#include <chrono>
using namespace std;

int main () {
    while (true) {
        system("cls"); // Clear the terminal (Windows)
        time_t timestamp;
        time(&timestamp);
        cout << ctime(&timestamp);
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Wait 1 second
    }
    return 0;
}
