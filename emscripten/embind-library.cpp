#include "NCollection_Vector.hxx"
#include "STEPCAFControl_Reader.hxx"

#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_BINDINGS(library) {
  class_<NCollection_BaseVector>("NCollection_BaseVector")
    .constructor<NCollection_BaseVector::initMemBlocks_t>()
    .function("expandV", &NCollection_BaseVector::expandV, allow_raw_pointers())
  ;
  class_<NCollection_Vector, base<NCollection_BaseVector>>("NCollection_Vector")
    .constructor<>()
    .class_function("initMemBlocks", &NCollection_Vector::initMemBlocks, allow_raw_pointers())
  ;
  class_<STEPCAFControl_Reader>("STEPCAFControl_Reader")
    .constructor<>()
    .function("ReadFile", &STEPCAFControl_Reader::ReadFile, allow_raw_pointers())
  ;
}
