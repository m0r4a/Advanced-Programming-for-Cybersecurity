#include <iostream>
#include <new>

using namespace std;

int main() {
  int n;

  cout << " Tamaño del array dinámico: ";
  cin >> n;

  // int *arr: declares a pointer to int that will
  // store the address of the heap-allocated block  

  // new(): requests memory at runtime for a specified number of elements  

  // (nothrow): prevents new from throwing an exception
  // returns nullptr if allocation fails  

  // int[n]: specifies the type (int) and the
  // number (n) of elements to allocate  
 
  // assignment: stores in arr the starting address of the
  // allocated block or nullptr if allocation failed

  int *arr = new(nothrow) int[n];

  if (!arr) {
    cout << " Error de memoria\n";
    return 1;
  }

  // transform arr into void* so it shows the
  // memory address instead of its content

  cout << " El arreglo se creó en la dirección: " << static_cast<void*>(arr) << '\n';

  // fills the array with squares

  for ( int i=0; i<n; i++) {
    arr[i] = i * i;
  }

  cout << " Contenido: ";

  for ( int i=0; i<n; i++ ) {
    cout << arr[i] << " ";
  }

  // frees the memory of the array
  delete[] arr;

  cout << "\n Memoria del arreglo liberada";

  cout << endl;

  return 0;
}
