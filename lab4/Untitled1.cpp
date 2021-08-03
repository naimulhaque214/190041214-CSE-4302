#include<iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountName;
    string accountType;
    float currentBalance;
    float minBalance;
public:
    BankAccount()
    {

    }
    BankAccount(int n, string name, string type,float bl,float minb):accountNumber(n),accountName(name),accountType(type),currentBalance(bl),minBalance(minb)
    {

    }
    void setDetails(int n, string name, string type,float bl,float minb)
    {
        accountNumber=n;
        accountName=name;
        accountType=type;
        currentBalance=bl;
        minBalance=minb;
    }
    float showBalance()
    {
        return currentBalance;
    }
    void deposit(float p)
    {
        currentBalance=currentBalance+p;
    }
    void withdraw(float q)
    {
        if(currentBalance-q<=minBalance)
            cout<<"Can't withdraw"<<endl;
        else
            currentBalance=currentBalance-q;
    }
    void giveInterest(float interestper=3)
    {
        float interest;


        {
            interest=((interestper/100)*currentBalance);
            interest=interest-(0.1*interest);
            currentBalance=currentBalance+interest;
        }
    }
    void display()
    {
        cout<<accountName<<"'s Bank Account Details\n";
        cout<<"Account Number: "<<accountNumber<<"\n";
        cout<<"Account type: "<<accountType<<"\n";
        cout<<"Current Balance: "<<currentBalance<<"\n";
        cout<<"Minimum Balance: "<<minBalance<<"\n";
    }
    ~BankAccount()
    {
        cout<<"Account of Mr."<<accountName<<" with account no "<<accountNumber<<" is destroyed with a balance of BDT "<<currentBalance;
    }
};

int main()
{
    BankAccount a(1000,"peal","Savings",10000,50);
    a.display();
    a.deposit(1000);
    cout<<"Balance: "<<a.showBalance()<<endl;
    a.withdraw(500);
    cout<<"Balance: "<<a.showBalance()<<endl;
    a.giveInterest(5);
    cout<<"Balance: "<<a.showBalance()<<endl;
    a.withdraw(1000);



}
