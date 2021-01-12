#include "NCollection_Vector.hxx"
#include "STEPCAFControl_Reader.hxx"

#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_BINDINGS(library) {
  class_<NCollection_Vector>("NCollection_Vector") // HINT: If this is removed, the error goes away
    .constructor<>()
  ;
  class_<STEPCAFControl_Reader>("STEPCAFControl_Reader")
    .constructor<>()
    .function("ReadFile", &STEPCAFControl_Reader::ReadFile)
  ;
}
