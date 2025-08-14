#include <iostream>

using namespace std;

int main() {
  int n;

  cout << " ¿Cuántos números para quieres?\n > ";
  cin >> n;
  cout << "\n Con for: ";

  for (int i = 1; i <= n; ++i) {
      cout << (2 * i) << " ";
  }

  cout << "\n Con while: ";

  int c = 1;

  while (c <= n) {
    cout << (2*c) << " "; ++c;
  }

  cout << "\n Con do...while: ";

  int d = 1;

  do { cout << (2*d) << " "; ++d; } while (d <= n);

  cout << endl;

  return 0;
}
