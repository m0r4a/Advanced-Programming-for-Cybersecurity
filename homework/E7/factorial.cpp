#include <iostream>

using namespace std;

// long: signed integer data type with extended size (minimum 32 bits, typically 32 or 64 bits depending on platform)
// Use for: large integer values that exceed int range, file sizes, populations, distances
// comment AI generated btw

long factorial(int x) {
  if (x<2) {
    return 1;
  }

  return x * factorial(x-1);
}

int main() {
  int num;
  
  cout << " Calcular factorial de: ";
  cin >> num;

  cout << "\n " << num << " != " << factorial(num) << endl;

  return 0;
}
