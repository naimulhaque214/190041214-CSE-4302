#include<iostream>

using namespace std;

class Counter
{
private:
    int count;
    int value;
public:
    void setIncrementStep(int step_val)
    {
        value=step_val;
    }
    int getCount()
    {
        return count;
    }
    void resetCount()
    {
        count=0;
    }
    void increment()
    {
        count=count+value;
    }
};

int main()
{
    int step_val;
    cin>>step_val;
    Counter c;
    c.setIncrementStep(step_val);
    cout<<"Count Value: "<<c.getCount()<<"\n";
    c.increment();
    cout<<"Count after incrementing 1st: "<<c.getCount()<<endl;
    c.increment();
    cout<<"Count after incrementing 2nd: "<<c.getCount()<<endl;
    c.increment();
    cout<<"Count after incrementing 3rd: "<<c.getCount()<<endl;
    c.resetCount();
    cout<<"Count after resetting: "<<c.getCount()<<endl;

}
