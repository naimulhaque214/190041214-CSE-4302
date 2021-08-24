#include <iostream>
using namespace std;

class instrument {
public:
   virtual void sound(){                    // virtual function
    cout<< "Instrument playing..\n";
    }
};

class piano : public instrument{
public:
    void sound(){
    cout<< "piano playing..\n";
    }
};
int main()
{
instrument *i1;
piano i2;
i1 = &i2;
i1->sound();
}
