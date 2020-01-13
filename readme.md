# Linker error demo

This code demonstrates the linker error:

```
 error LNK2005: "public: int __cdecl C::Called(void)" (?Called@C@@QEAAHXZ) already defined in obj1.obj
```

This is caused by a DLL exporting the same symbol that another .obj file contains
due to an inline header definition.

See obj1.cpp and replace the call with the non-inline version to resolve the error.

clang-cl can avoid this problem with the the new `/Zc:dllexportInlines-` flag. (See
<http://blog.llvm.org/2018/11/30-faster-windows-builds-with-clang-cl_14.html>).

Open a Visual Studio x64 Developer Command prompt and run `build.cmd` to repro.
