#include <iostream>
#include <cmath>

// Problem 3 (Project Euler)

using namespace std;

int main() {
  
  // Prime numbers -> loop to that number (x), if i != x && i != 1 && x % i == 0, then is not prime

  long factor = 0;
  long factorPrime = 0;
  long number = 600851475143;

  for(long i = 2; i <= number; i++) {

    // Check if factor
    if(number % i == 0) {
      factor = i;
    }      
     // Loop through 2-factor
     for(int j = 2; j < factor; j++) {
	
       // If not a prime
       if(factor % j == 0) {
	 break;
       }
       else {
         factorPrime = factor;
         cout << "prime " << factorPrime << '\n';
       }
     }
   }
  cout << factorPrime << '\n';
}
