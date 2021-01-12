mkdir -p build

emcc \
  --bind embind-main.cpp \
  -s MAIN_MODULE=1 \
  -s EXPORT_ES6=1 \
  -s USE_ES6_IMPORT_META=0 \
  -g3 \
  -O3 \
  -o ./build/main.js

emcc \
  ./NCollection_Vector.cxx \
  -O3 -fPIC \
  -c -o ./build/NCollection_Vector.o

emcc \
  ./STEPCAFControl_Reader.cxx \
  -O3 -fPIC \
  -c -o ./build/STEPCAFControl_Reader.o

emcc \
  --bind embind-library.cpp \
  ./build/NCollection_Vector.o \
  ./build/STEPCAFControl_Reader.o \
  -s SIDE_MODULE=1 \
  -g3 \
  -O3 \
  -o ./build/library.wasm
