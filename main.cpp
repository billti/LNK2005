#define USING_DLL

#include "mydll.h"

int main() {
  C c;
  return 42 + c.Called();
}
