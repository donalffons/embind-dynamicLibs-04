#include "STEPCAFControl_Reader.hxx"
#include "NCollection_Vector.hxx"
#include <iostream>

void STEPCAFControl_Reader::ReadFile()
{
  std::cout << "1" << std::endl;
  NCollection_Vector testVec;
  std::cout << "2" << std::endl;
  testVec.expandV();
  std::cout << "3" << std::endl;
}
