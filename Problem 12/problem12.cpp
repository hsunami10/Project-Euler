#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long triangleNum = 0;
  int count;

  // Simulate i -> infinity
  for(long i = 1; i <= 1000000000000000; i++) {
    triangleNum += i;
    count = 0;
    // Run through factors
    for(int j = 1; j <= sqrt(triangleNum); j++) {
      if(triangleNum % j == 0)
	count++;
    }
    // Take into account the other half
    count *= 2;
    if(count > 500)
      break;
  }
  cout << "Answer: " << triangleNum << '\n';
  return 0;
}
