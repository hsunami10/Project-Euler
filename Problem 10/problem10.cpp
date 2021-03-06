#include <iostream>
#include <cmath>
#include <math.h>

// Problem 10 (Project Euler)

using namespace std;

bool IsPrime(long value) {
  bool prime = false;

  for(long i = 2; i <= ceil(sqrt(value)); i++) {
    if(value % i == 0) {
      prime = false;
      break;
    }
    else
      prime = true;
  }
  
  return prime;
}

int main() {
  long max = 2000000;
  
  // Starts off at 5 because of 2 and 3 is an expection
  long sum = 5;
  bool isPrime;

  for(long i = 5; i < max; i+=2) {
    
    // Check if prime
    isPrime = IsPrime(i);

    if(isPrime)
      sum += i;
  }

  cout << "Answer: " << sum << '\n';
  return 0;
}
