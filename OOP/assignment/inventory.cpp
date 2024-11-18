#include <iostream>
using namespace std;

class Product {
protected:
    int productId;
    string name;
    float price;

public:
    Product(int id,string n,float p) : productId(id), name(n),price(p){}

    virtual void displayDetails() {
        cout << "Product Info: ID = " << productId << ", Name = "<< name << ", Price = " << price;
    }

    virtual ~Product(){}
};

class Electronics : public Product {
    int warrantyperiod;

public:
    Electronics(int id, string n, float p, int warranty) : Product(id, n, p), warrantyperiod(warranty) {}

    void displayDetails() override {
        Product::displayDetails();
        cout << ", Warranty = " << warrantyperiod << " years" << endl;
    }
};

class Furniture :public Product {
    string materialType;

public:
    Furniture(int id, string n, float p, string material) : Product(id, n, p), materialType(material) {}

    void displayDetails() override {
        Product::displayDetails();
        cout << ", Material = " << materialType << endl;
    }
};

int main() {
    Product* products[2];
    products[0] = new Electronics(101, "Smartphone", 500.00, 2);
    products[1] = new Furniture(202, "Sofa", 300.00, "Wood");

    for (int i = 0; i < 2; ++i) {
        products[i]->displayDetails();
    }

    for (int i = 0; i < 2; ++i) {
        delete products[i];
    }

    return 0;
}
