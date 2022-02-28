#ifndef STORE_H
#define STORE_H

#include <unordered_map>
#include <vector>
#include "Customer.h"
#include "Product.h"

using namespace std;

class store {
  public:
    bool borrowItem(int customerId, string item);
    bool returnItem(int customerId, string item);
    void printInventory();
    void printHistory(int customerId);

  private:
    // customerID->customer object
    unordered_map<int, customer*> customers;
    // mediaType->movieType->vector of products
    unordered_map<char, unordered_map<char, vector<product*>>> inventory;
};

#endif // STORE_H