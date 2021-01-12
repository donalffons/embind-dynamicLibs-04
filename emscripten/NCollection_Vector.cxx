#include "NCollection_Vector.hxx"

void NCollection_Vector::expandV()
{
  myInitBlocks(); // ERROR: Uncaught (in promise) RuntimeError: function signature mismatch
}
