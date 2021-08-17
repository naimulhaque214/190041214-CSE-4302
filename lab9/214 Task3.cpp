#include<iostream>
using namespace std;

class Furniture

{
public :

    string name;
    double regularprice;
    double discountprice;
    string madeof;

    void productdetail()

    {
        cout << "product Name :" << name << endl;
        cout << "Regular Price : " << regularprice <<endl;

        cout << "Discount Price :" << discountprice <<endl;

        cout << "Material Name :" << madeof <<endl;
    }
};

class Bed : public Furniture
{
public :
    string bedsize;

    void Set()
    {
        cout << "Bed Size :" <<bedsize <<endl;
        cout << "#############################" << endl << endl;
    }
};

class Sofa: public Furniture
{
public :
    string seatnumber;

    void Set()
    {
        cout << "Seat Number :"<<seatnumber <<endl;
         cout << "#############################" << endl << endl;
    }
};

class DiningTable: public Furniture
{
public :
    string chaircount;

    void Set()
    {
        cout << "Chair Count :"<<chaircount <<endl;
        cout << "#############################" << endl << endl;
    }
};

int main ()

{
    Bed b1;
    b1.name = "Bed";
    b1.regularprice = 1000;
    b1.discountprice = 9877;
    b1.madeof = "Wood";
    b1.bedsize = "Single";
    b1.productdetail();
    b1.Set();

    Sofa s1;
    s1.name = "Sofa";
    s1.regularprice = 3000;
    s1.discountprice = 10;
    s1.madeof = "Wood";
    s1.seatnumber = "Two";
    s1.productdetail();
    s1.Set();

    DiningTable d1;
    d1.name = "Dining Table";
    d1.regularprice = 5000;
    d1.discountprice = 500;
    d1.madeof = "Steel";
    d1.chaircount = "Four";
    d1.productdetail();
    d1.Set();

}
