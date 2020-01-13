del *.obj *.lib *.exp *.exe *.dll

cl /Od /c obj1.cpp
cl /Od /c main.cpp
cl /Od /LD mydll.cpp /link /nodefaultlib /entry:DllMain
link main.obj obj1.obj mydll.lib
