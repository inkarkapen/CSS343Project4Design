#ifndef MovieTypeFactory_h
#define MovieTypeFactory_h

#include "Classic.h"
#include "Drama.h"
#include "Comedy.h"

class MovieTypeFactory{
  public:
    static Product *create(const string &genre, string mediaInfo) {
      if (genre == "C")
        return new Classic();
      else if (genre == "D")
        return new Drama();
      else if (genre == "F")
        return new Comedy();
      else
        return  nullptr;
  }};

#endif