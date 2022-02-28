#ifndef comedy_h
#define comedy_h

#include <string>
#include "MediaCategory.h"

using namespace std;

class Comedy : public Product {
public: 
  Comedy();

  void setDirector (const string & directorName);
  string getDirector() const;

  void setTitle(const string & title);
  string getYear() const;

private:
  string director;
  string year;
};
#endif