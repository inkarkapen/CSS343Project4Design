#ifndef MovieTypeFactory_h
#define MovieTypeFactory_h

#include "ClassicFactory.h"
#include "DramaFactory.h"
#include "ComedyFactory.h"

class MediaTypeFactory {
  virtual ClassicFactory *createClassicFactory() const = 0;
};

#endif