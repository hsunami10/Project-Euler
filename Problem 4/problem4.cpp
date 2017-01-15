#include <iostream>
#include <sstream>
#include <string>

// Problem 4 (Project Euler)

using namespace std;

int main() {
  
  int half = 0;
  int num = 0;
  int count = 0;
  int palindromeOld = 0;
  int palindromeNew = 0;
  string palindrome = "";

  for(int i = 100; i <= 999; i++) {
    
    for(int j = 100; j <= 999; j++) {
      palindromeNew = i * j;

      // Convert int to string
      ostringstream convert;
      convert << palindromeNew;
      palindrome = convert.str();

      half = palindrome.length()/2;
      count = 0;
      // Check if it's a palindrome
      for(int k = 0; k < half; k++) {
	if(palindrome.at(k) == palindrome.at(palindrome.length() - (k+1))) {
	  count++;
	}
      }
      
      // If it's a palindrome
      if(count == half) {
	stringstream convert(palindrome);
	convert >> palindromeNew;

	if(palindromeNew > palindromeOld) {
	  palindromeOld = palindromeNew;
	}
      }
    }
  }
  cout << "Answer: " << palindromeOld << '\n';
  return 0;
}
