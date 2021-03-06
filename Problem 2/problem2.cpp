#include <iostream>

// Problem 2 of Project Euler

using namespace std;

int main() {
  int sum = 0;
  int element = 0;
  int myArray[1000];
  bool once = false;
  int cancel = 0;

  for(int i = 1; i < 4000000; i++) {
    if(!once) {
      myArray[element] = 1;
      element++;
      myArray[element] = 1;
      once = true;
    }
    
    element++;
    myArray[element] = myArray[element - 2] + myArray[element - 1];

    if(myArray[element] % 2 == 0) {
      sum += myArray[element];
    }
    
    cancel = myArray[element];
    if(cancel > 4000000) {
      break;
    }
  }

  cout << sum << '\n';
  return 0;
}
