#ifndef MovieTypeFactory_h
#define MovieTypeFactory_h

#include "Product.h"
#include "Classic.h"
#include "Drama.h"
#include "Comedy.h"

template <class T>
class MovieTypeFactory {
  public:
    static Product *create(const string &genre, <T> attributes) {
      if (genre == "C")
        return new Classic(attributes);
      else if (genre == "D")
        return new Drama(attributes);
      else if (genre == "F")
        return new Comedy(attributes);
      else
        return  nullptr;
  }};

#endif