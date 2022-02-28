#ifndef MediaTypeFactory_h
#define MediaTypeFactory_h

#include "Product.h"
#include "MediaCategoryFactory.h"

template <class T>
class MediaTypeFactory{
  public:
  // mediaType is DVD/CD ect, genre for movies is classic ect, for music for example rock,classic etc
    static Product *create(const string &mediaType, 
                           const string &mediaCategory, 
                           const string &genre, <T> attributes) {
      if (mediaType == "Movie")
        return new MediaCategoryFactory<T>::create(mediaCategory, genre, attributes);
      else
        return nullptr;
  }
};
#endif