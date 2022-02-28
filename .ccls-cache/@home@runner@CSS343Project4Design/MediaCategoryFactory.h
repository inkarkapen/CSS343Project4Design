#ifndef MEDIACATEGORY_H
#define MEDIACATEGORY_H

#include "MovieTypeFactory.h"
#include "Product.h"

template <class T>
class MediaCategoryFactory {
  public:
    static Product *create(const string &mediaCategory, const string &genre, <T> attributes) {
      if (mediaCategory == "DVD")
        return new MovieTypeFactory<T>::create(genre, attributes);
      else
        return  nullptr;
};

#endif // MEDIACATEGORY_H