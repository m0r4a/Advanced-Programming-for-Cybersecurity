#include <iostream>
#include <string>

using namespace std;

struct Paquete {
  string srcIP;
  string dstIP;
  int puerto;
};

// void means the function doesn't return a value

// const Paquete *p:
// - type: pointer to a Paquete that the function will not modify.
// - 'p' holds the memory address of a Paquete object (allocated on stack or heap).
// - "const" means you cannot change the Paquete members through this pointer.
void mostrar(const Paquete *p) {
   // p->srcIP:
   // - "->" is the arrow operator used with pointers to access members.
   // - equivalent to: (*p).srcIP  (dereference then access member).
   cout << " Origen: " << p->srcIP
        << "\n Destino: " << p->dstIP
        << "\n Puerto: " << p->puerto << endl;
}

int main() {
  Paquete pkt = {"192.168.0.10", "10.0.0.5", 443};
  // &pkt:
  // - '&' is the address-of operator. It yields a Paquete* that points to pkt.
  // - mostrar expects a Paquete* parameter, so pass the address: mostrar(&pkt).

  // Why not "*ptk"?
  // - "*ptk" dereferences a pointer variable named ptk and yields a Paquete value.
  // - To use "*ptk" you must already have Paquete *ptk = &pkt; then *ptk is a Paquete.
  // - Passing *ptk to mostrar would be a type mismatch because mostrar expects Paquete*,
  //   not Paquete. To pass the pointer variable use mostrar(ptk).
  mostrar(&pkt);
  return 0;
}
