#include<iostream>

using namespace std;

//base class
class Staff

{
public:
    string name;
    int code;
    string profession;

    void whoamI()
     {
         cout << "I am a" << profession<<endl;
     }

};


// derived class
class Teacher : public Staff
{
  public :
      string subject;
      string publication;

      void show2()
       {
        cout << "Name:" <<name << endl;
        cout << "Code:" <<code << endl;
        cout << "Subject:" <<subject << endl;
        cout << "Publication:" <<publication << endl<<endl;

    }

};
class Officer : public Staff
{
  public :
      string category;

      void show3()
       {
        cout << "Name:" <<name << endl;
        cout << "Code:" <<code << endl;
        cout << "Category:" <<category << endl<<endl;
    }

};
class Typist : public Staff
{
  public :
      float speed;
      int wage;

};
class Regular : public Typist
{
  public :

       void show4()
       {
        cout << "Name:" <<name << endl;
        cout << "Code:" <<code << endl;
        cout << "Speed:" <<speed << endl;
        cout << "Wage:" <<wage << endl<<endl;
    }

};
class Casual : public Typist
{
  public :

      void show5()
       {
        cout << "Name:" <<name << endl;
        cout << "Code:" <<code << endl;
        cout << "Speed:" <<speed << endl;
        cout << "Wage:" <<wage << endl<<endl;
      }

};


int main ()
{
    Teacher t1;
    t1.name = "Hussain";
    t1.code = 111;
    t1.subject = "OOP";
    t1.publication = "Tata MccGraw";
    t1.profession = " Teacher";
    t1.whoamI();
    t1.show2();


    Officer o1;
    o1.name = "Haque";
    o1.code = 222;
    o1.category = "First Grade";
    o1.profession = " Officer";
    o1.whoamI();
    o1.show3();

    Regular r1;
    r1.name = "Robiul";
    r1.code = 333;
    r1.speed = 90.5;
    r1.wage = 20000;
    r1.profession = " Regular Typist";
    r1.whoamI();
    r1.show4();

    Casual c1;
    c1.name = "Kawser";
    c1.code = 444;
    c1.speed = 80.5;
    c1.wage = 10000;
    c1.profession = " Casual Typist";
    c1.whoamI();
    c1.show5();



}
