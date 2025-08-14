#include <iostream>  // cout and cin library

using namespace std;  // allows you to not having to type std:: when using cout && cin

int main() {
  int n1;
  const float PI = 3.14156;

  cout << "Ingresa un número entero: ";  // Send the string cout -> Caracter OUTput
 
  cin >> n1;  // Asks for input and sends it to n1

  // It's like a concatenation thing
  cout << "Variable: n1=" << n1 << ", constante PI=" << PI << endl;


  return 0;
}
