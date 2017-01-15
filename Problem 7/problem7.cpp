#include <iostream>

// Problem 7 (Project Euler)

using namespace std;

int main() {
  
  int primeCount = 0;

  // 10000, since 2 is an expection
  int count = 10000;
  bool isPrime = false;
  long answer;

  for(long i = 2; i <= 100000000000000; i++) {
    
    // Determine if prime
    for(long j = 2; j < i; j++) {
      if(i % j == 0) {
	isPrime = false;
	break;
      }
      else {
	isPrime = true;
      }
    }

    if(isPrime) {
      primeCount += 1;
    }

    if(primeCount == count) {
      answer = i;
      break;
    }
  }

  cout << "Answer: " << answer << '\n'; 
}
