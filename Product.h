#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product {
  friend ostream &operator<<(ostream &os, const Product &p) {
    return p.sort(os);
  }
  protected:
    string name;
    double price;
    int stock;

    string mediaType; //Movies
    string mediaCategory; //DVD
    string genre; //Classic etc
  public:
    virtual ~Product() = default;
    //product(string name, double price, int stock);

    virtual string getName() = 0;
    virtual void setName(string name) = 0;
    virtual double getPrice() = 0;
    virtual void setPrice(double price) = 0;
    virtual int getStock() = 0;
    virtual void setStock(int stock) = 0;
    virtual ostream &sort(ostream &os) const = 0;
};

#endif // PRODUCT_H