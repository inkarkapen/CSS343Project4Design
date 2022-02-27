#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <list>
#include <string>

using namespace std;

class customer {
  public:
    customer();
    customer(int id, string first, string last);
    int getId();
    string getFirst();
    string getLast();
    void getHistory();

  private:
    int id;
    string first, last;
    list<string> history;
    list<string> checkoutOut;
};

#endif // CUSTOMER_H