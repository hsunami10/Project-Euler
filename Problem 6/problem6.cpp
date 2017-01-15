#include <iostream>

// Problem 6 (Project Euler)

using namespace std;

long Square(long value) {
  return value * value;
}

int main() {
  
  long squareOfSum = 0;
  long sumOfSquare = 0;
  long sum = 0;

  for(long i = 1; i <= 100; i++) {
    sumOfSquare += Square(i);
    sum += i;
  }

  squareOfSum = Square(sum);

  cout << "Answer: " << squareOfSum - sumOfSquare << '\n';
  return 0;
}
