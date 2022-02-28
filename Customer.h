#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <list>
#include <string>

using namespace std;

class Customer {
  public:
    customer();
    customer(int id, string first, string last);
    int getId();
    string getFirst();
    string getLast();
    void getHistory();

  private:
    // ex id is 0101
    int id;
    // ex john smith
    string first, last;
    // ex list of "B 1234 D F Pirates of the Caribbean, 2003"
    list<string> history;
    // ex list pf product ites such as movies and other
    // possible ones such as music ect. Product has media
    // type, genre, name, year, director, actor/ess
    // "D F Pirates of the Caribbean, 2003"
    list<Product> checkedOutItems;
};

#endif // CUSTOMER_H