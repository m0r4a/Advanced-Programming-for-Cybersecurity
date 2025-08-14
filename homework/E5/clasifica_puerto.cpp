#include <iostream>

using namespace std;

int main() {
  int puerto;

  cout << " Número de puerto (1-1024): ";
  cin >> puerto;

  if (puerto >= 1 && puerto <= 1024) {
      cout << " Puerto bien conocido" << endl;
  } else {
      cout << " Puerto alto" << endl;
  }

  switch (puerto) {
    case 22:
      cout << " SSH detectado" << endl; break;

    case 80:
      cout << " HTTP detectado" << endl; break;

    default:
      cout << " Otro servicio" << endl; break;
  }

  return 0;
}
