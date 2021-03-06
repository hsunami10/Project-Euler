#include <iostream>
#include <cmath>

// Problem 3 (Project Euler)

using namespace std;

int main() {
  
  long factor = 0;
  long factorPrime = 0;
  long number = 600851475143;
  bool isPrime = false;

  for(long i = 2; i <= sqrt(number); i++) {

    // Check if factor
    if(number % i == 0) {
      factor = i;
      
      // Loop through 2-factor
      for(long j = 2; j < factor; j++) {
	
	// If there's a factor of a factor
	if(factor % j == 0) {
	  isPrime = false;
	  break;
	}
	else {
	  isPrime = true;
	}
      }

      if(isPrime && factor > factorPrime) {
	factorPrime = factor;
      }
    }
  }
  cout << "Max prime factor: " << factorPrime << '\n';
  return 0;
}
