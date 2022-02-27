#ifndef MediaTypeFactory_h
#define MediaTypeFactory_h

#include "MovieTypeFactory.h"

class MediaTypeFactory {
  virtual MovieTypeFactory *createMovieTypeFactory() const = 0;
};
#endif