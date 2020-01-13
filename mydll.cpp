#define BUILDING_DLL
#include "mydll.h"

int Add(int a, int b) {
  C c;
  return a + b + c.Called();
}

int Sub(int a, int b) {
  return a - b;
}

int __stdcall DllMain(void* inst, int reason, void* reserved) {
  return true;
}

int C::NotInline() { return 0;}
