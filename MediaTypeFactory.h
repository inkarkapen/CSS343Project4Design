#ifndef MediaTypeFactory_h
#define MediaTypeFactory_h

#include "MovieTypeFactory.h"

class MediaTypeFactory{
  public:
  // meidaType is DVD/CD ect, genre for movies is classic ect, for music for example rock,classic etc
    static Product *create(const string &meidaType, const string &genre, string mediaInfo) {
      if (type == "Movie")
        return new MovieTypeFactory::create(genre, meidaInfo);
      else
        return nullptr;
  }
};
#endif