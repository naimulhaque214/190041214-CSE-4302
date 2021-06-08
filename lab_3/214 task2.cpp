#include<iostream>

using namespace std;

class RationalNumber
{
private:
    int numerator,denominator;
public:
    void assign(int p,int q)
    {
        numerator=p;
        if(q==0)
        {
            cout<<"Error.\n";
            exit(1);
        }
        else
            denominator=q;
    }
    double convert()
    {
        return (double)numerator/denominator;
    }
    void invert()
    {
        if(numerator==0)
            cout<<"Error.\n";
        else
            swap(numerator,denominator);
    }
    void print()
    {
            cout<<"The Rational number is "<<numerator<<"/"<<denominator<<endl;
    }
};


int main()
{
    RationalNumber num;
    int p,q;
    cout<<"Enter numerator: ";
    cin>>p;
    cout<<"Enter denominator: ";
    cin>>q;
    num.assign(p,q);
    num.print();
    num.convert();
    cout<<"Decimal equivalent: "<<num.convert()<<"\n";
    num.invert();
    cout<<"After invert "; num.print();
    return 0;

}
