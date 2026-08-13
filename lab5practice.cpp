#include <iostream>
#include <string>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;
    int quantity;

public:

    // Default constructor
    Product()
    {
        productId = 0;
        productName = "Unknown";
        price = 0;
        quantity = 0;
    }

    // Parameterized constructor
    Product(int id, string name, float p)
    {
        productId = id;
        productName = name;
        price = p;
        quantity = 0;
    }

    // addProduct() - Add product without quantity
    void addProduct(Product p)
    {
        productId = p.productId;
        productName = p.productName;
        price = p.price;
        quantity = 1;
    }

    // addProduct() - Add product with quantity
    void addProduct(Product p, int q)
    {
        productId = p.productId;
        productName = p.productName;
        price = p.price;
        quantity = q;
    }

    // Display product details
    void display()
    {
        cout << "Product ID   : " << productId << endl;
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Subtotal     : " << price * quantity << endl;
    }

    // Friend function
    friend float calculateBill(Product products[], int n);
};

// Friend function to calculate total bill
float calculateBill(Product products[], int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + (products[i].price * products[i].quantity);
    }

    return total;
}

int main()
{
    // Product objects
    Product p1(101, "Laptop", 50000);
    Product p2(102, "Mouse", 800);
    Product p3(103, "Keyboard", 1500);

    // Array of objects
    Product cart[3];

    // Adding products
    cart[0].addProduct(p1);
    cart[1].addProduct(p2, 2);
    cart[2].addProduct(p3, 3);

    cout << "===== SHOPPING CART =====" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        cart[i].display();
    }

    // Calculate total bill
    cout << "\n===== TOTAL BILL =====" << endl;
    cout << "Total Bill : " << calculateBill(cart, 3) << endl;

    return 0;
}
