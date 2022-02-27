#ifndef STORE_H
#define STORE_H

#include <unordered_map>
#include <vector>
#include "Customer.h"
#include "Product.h"

using namespace std;

class store {
  public:
    bool borrowItem();
    bool returnItem();
    void printInventory();
    void printHistory();

  private:
    // customerID->customer object
    unordered_map<int, customer*> customers;
    // mediaType->movieType->vector of products
    unordered_map<char, unordered_map<char, vector<product*>>> inventory;
};

#endif // STORE_H