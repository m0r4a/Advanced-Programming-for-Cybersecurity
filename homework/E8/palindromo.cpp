#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esPal(string s) {
  int i = 0;
  int j = s.size() - 1;

  // transform() applies ::tolower function to each character
  // from the beginning of t until the ent, converting it
  // to lowercase in-place, which means that it's working
  //                 on top of [s.begin()] <- here 
   
  transform(s.begin(), s.end(), s.begin(), ::tolower);

  while (i < j) {
    // Compares characters from left and right ends simultaneously
    // if any pair doesn't match, it's not a palindrome
  
    if ( s[i++] != s[j--] ) {
      return false;
    }
  }

  return true;
}

int main() {
  string texto;

  cout << " Escribe una palabra: ";
  cin >> texto;

  cout << "\n";

  cout << (esPal(texto) ? " Es palindromo" : " No es palíndromo") << endl;

  return 0;
}
