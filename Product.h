#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product {
  protected:
    string name;
    double price;
    int stock;
  public:
    virtual ~Product() = default;
    //product(string name, double price, int stock);

    virtual string getName() = 0;
    virtual void setName(string name) = 0;
    virtual double getPrice() = 0;
    virtual void setPrice(double price) = 0;
    virtual int getStock() = 0;
    virtual void setStock(int stock) = 0;
};

#endif // PRODUCT_H