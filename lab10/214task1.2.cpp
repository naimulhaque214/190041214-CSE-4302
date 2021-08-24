#include <iostream>
using namespace std;

class instrument {
public:
   virtual void sound()=0;            // pure virtual function
};

class piano : public instrument{
public:
    void sound(){
    cout<< "piano playing..\n";
    }
};
class guitar : public instrument{
public:
    void sound(){
    cout<< "guitar playing..\n";
    }
};

int main()
{
instrument *i1;
piano i2;
i1 = &i2;
i1->sound();
instrument *i3;
guitar i4;
i3 = &i4;
i3->sound();
}
