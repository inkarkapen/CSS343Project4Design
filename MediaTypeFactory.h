#ifndef MediaTypeFactory_h
#define MediaTypeFactory_h

#include "MovieTypeFactory.h"

template <class T>
class MediaTypeFactory{
  public:
  // meidaType is DVD/CD ect, genre for movies is classic ect, for music for example rock,classic etc
    static Product *create(const string &meidaType, const string &meidaCategory, const string &genre, <T> attributes) {
      if (type == "Movie")
        return new MediaCategoryFactory::create(meidaCategory, genre, attributes);
      else
        return nullptr;
  }
};
#endif