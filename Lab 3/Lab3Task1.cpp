#include<iostream>
using namespace std;
class Product{
    string name;
    int code;
    float price;
public:
    void setData(string n,int c,float p)
    {
        name=n;
        code=c;
        price=p;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of Products: ";
    cin>>n;
    Product* products=new Product[n];
    for(int i=0;i<n;i++)
    {
        string name;
        int code;
        float price;
        cout<<"Enter Name, Code and Price for Product "<<i+1<<": ";
        cin>>name>>code>>price;
        products[i].setData(name,code,price);
    }
    cout<<endl<<"Product Details you entered:"<<endl;
    for(int i=0;i<n;i++)
    {
        products[i].display();
        cout<<endl;
    }
    delete[] products;
}