#include<iostream>
using namespace std;
struct Product{
    int product_ID;
    string name;
    int price,quantity;
};
int main()
{
    Product p1;
    int total;
    cout<<"Welcome to the billing area!"<<endl;
    cout<<"Please enter the following details to know your total bill: "<<endl;
    cout<<"Product ID: ";
    cin>>p1.product_ID;
    cout<<"Product Name: ";
    cin>>p1.name;
    cout<<"Product Price: ";
    cin>>p1.price;
    cout<<"Product Quantity: ";
    cin>>p1.quantity;
    total=p1.price*p1.quantity;
    cout<<"Your total bill is "<<total;
    return 0;
}