#if defined(USING_DLL)
#define V8_DLL __declspec(dllimport)
#elif defined(BUILDING_DLL)
#define V8_DLL __declspec(dllexport)
#else
#define V8_DLL
#endif

class V8_DLL C {
  public:
    int NotCalled() {
      return 42;
    }
    int Called() {
      return 42;
    }
    int NotInline();
};

extern "C" {
 __declspec(dllexport) int Add(int a, int b);
 __declspec(dllexport) int Sub(int a, int b);
 int DllMain(void* inst, int reason, void* reserved);
}
