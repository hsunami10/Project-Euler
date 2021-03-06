#include <iostream>

// Problem 5 (Project Euler)

using namespace std;

int main() {
  
  long number = 10000000000000;
  int numOfFactors = 20;
  bool all;
  long answer;

  for(long i = 20; i <= number; i+=10) {
    all = true;

    for(long j = 1; j <= 20; j++) {

      // If there is not a factor
      if(i % j != 0) {
	all = false;
	break;
      }
    }
    
    // If it has factors that are all numbers between 1-20
    if(all) {
      answer = i;
      break;
    }
  }

  cout << "Answer: " << answer << '\n';
  return 0;
}
