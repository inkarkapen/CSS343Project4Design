#ifndef drama_h
#define drama_h

#include <string>
#include "MediaCategory.h"

using namespace std;

class Drama : public Product {
public: 
  Drama();

  void setDirector (const string & directorName);
  string getDirector() const;

  void setTitle(const string & title);
  string getYear() const;

private:
  string director;
  string year;
};
#endif