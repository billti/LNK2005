#include "mydll.h"

int Obj1Func() {
  C c;
  // If the function is called, it is instantiated in this module.
  // i.e. obj1.obj will have a symbol:
  //    External     | ?Called@C@@QEAAHXZ (public: int __cdecl C::Called(void))
  return c.Called();

  // Replace with the below similar, but not inline, call and the error goes away.
  // return c.NotInline();
}
