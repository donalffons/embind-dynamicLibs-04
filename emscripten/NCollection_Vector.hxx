#ifndef NCollection_Vector_HeaderFile
#define NCollection_Vector_HeaderFile

#include "NCollection_Vector.hxx"

class NCollection_Vector
{
  typedef void (*initMemBlocks_t) ();
  initMemBlocks_t  myInitBlocks;

public:
  NCollection_Vector() : myInitBlocks(initMemBlocks) {}
  void expandV();
  static void initMemBlocks() {}
};

#endif // NCollection_Vector_HeaderFile
