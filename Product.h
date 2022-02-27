#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class product {
  public:
    product();
    product(string name, double price, int stock);

    string getName();
    void setName(string name);
    double getPrice();
    void setPrice(double price);
    int getStock();
    void setStock(int stock);

  private:
    string name;
    double price;
    int stock;
};

#endif // PRODUCT_H