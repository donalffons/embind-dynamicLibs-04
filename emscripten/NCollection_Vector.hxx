#ifndef NCollection_Vector_HeaderFile
#define NCollection_Vector_HeaderFile

#include "NCollection_Vector.hxx"

class NCollection_BaseVector
{
public:
  typedef void (*initMemBlocks_t) ();
  NCollection_BaseVector(initMemBlocks_t theInitBlocks) : myInitBlocks(theInitBlocks) {}
  void expandV();

  initMemBlocks_t  myInitBlocks;
};

class NCollection_Vector : public NCollection_BaseVector
{
public:
  NCollection_Vector () : NCollection_BaseVector (initMemBlocks) {}
  static void initMemBlocks() {}
};

#endif // NCollection_Vector_HeaderFile
