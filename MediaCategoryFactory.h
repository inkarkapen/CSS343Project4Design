#ifndef MEDIACATEGORY_H
#define MEDIACATEGORY_H

#include "Product.h"

template <class T>
class MediaCategoryFactory{
  public:
    static Product *create(const string &meidaCategory, const string &genre, <T> attributes) {
      if (meidaCategory == "DVD")
        return MovieTypeFactory::create(genre, attributes);
      else
        return  nullptr;
};

#endif // MEDIACATEGORY_H