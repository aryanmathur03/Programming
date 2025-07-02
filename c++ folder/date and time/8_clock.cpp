#include <iostream>
#include <ctime>
using namespace std;

int main() {
  clock_t before = clock();
  int k = 0;
  for (int i = 0; i < 10000000; i++) {
    k += i;
  }
  clock_t duration = clock() - before;
  cout << "Duration: " << (double)duration / CLOCKS_PER_SEC << " seconds";
  return 0;
}
