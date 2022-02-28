#ifndef classic_h
#define classic_h

#include <string>
#include "MediaCategory.h"

using namespace std;

class Classic : public Product {
public: 
  Classic();

  void setDirector (const string & directorName);
  string getDirector() const;

  void setTitle(const string & title);
  string getYear() const;

  void setYear(string year);
  string getActor() const;

private:
  string director;
  string year;
  string majorActor;
};
#endif