#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    int productId;
    string productName;
    float price;
    int quantityInStock;

public:
    Product(int id, const string &name, float p, int quantity)
        : productId(id), productName(name), price(p), quantityInStock(quantity) {}

    void displayProductDetails()
    {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
        cout << "------------------------" << endl;
    }

    void updateQuantity(int quantity)
    {
        quantityInStock += quantity;
    }
};

int main()
{
    Product product1(1, "Laptop", 999.99, 10);
    Product product2(2, "Smartphone", 499.99, 20);
    Product product3(3, "Headphones", 49.99, 30);

    cout << "Initial Product Details:" << endl;
    product1.displayProductDetails();
    product2.displayProductDetails();
    product3.displayProductDetails();

    product1.updateQuantity(-5);

    cout << "Product Details after Quantity Update:" << endl;
    product1.displayProductDetails();
    product2.displayProductDetails();
    product3.displayProductDetails();

    return 0;
}
