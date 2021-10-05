#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class Person
{
private:
    int age;
    string name;
    static int n;
    static Person* arrap[];


public:
    virtual void setData()
    {
        cout << " Enter Person Name: ";
        cin >> name ;
        cout << " Enter Person Age: ";
        cin >> age;

    }
    virtual void getData()
    {
        cout<<" I am "<<name<<" and my age is: "<<age<<endl;
    }
    virtual string type()
    {
        return name;
    }
    static void add();
    static void display();
    static void read();
    static void write();
};

int Person::n;
Person* Person::arrap[100];


class Teacher: public Person
{
private:
    int id;
public:
    void setData()
    {
        Person::setData();
        cout << " Enter id: ";
        cin >> id;
    }
    void getData()
    {
      Person::getData();
        cout << "\n Id: " << id;
    }
};

class Student: public Person
{
private:
    int id;
public:
    void setData()
    {
        Person::setData();
        cout << " Enter id: ";
        cin >> id;
    }
    void getData()
    {
        Person::getData();
        cout << "\n id: " << id;
    }
};

void Person::add()
{
    char ch;
    cout << "'t' to add a teacher"
         "\n's' to add a student"
         "\nEnter selection: ";
    cin >> ch;
    if(ch=='t')
    {
        arrap[n] = new Teacher;
    }
    else if(ch=='s')
    {
        arrap[n] = new Student;
    }
    else
    {
        cout << "\nUnknown person type\n";
        return;
    }
    arrap[n++]->setData();
}

void Person::display()
{
    for(int j=0; j<n; j++)
    {
        cout << (j+1);

        arrap[j]->getData();
        cout << endl;
    }
}

void Person::write()
{
    int size;
    cout << "Writing " << n << " Person.\n";
    ofstream ouf;
    ouf.open("Person.DAT", ios::trunc | ios::binary);
    if(!ouf)
    {
        cout << "\nCan't open file\n";
        return;
    }
    for(int j=0; j<n; j++)
    {
        string temp= arrap[j]->type();

        if(temp=="Teacher")
            size=sizeof(Teacher);

        else if (temp=="Student")
            size=sizeof(Student);

    ouf.write( (char*)(arrap[j]), size );
    if(!ouf)
    {
        cout << "\nCan't write to file\n";
        return;
    }

    }

}


void Person::read()
{
    int size;
    ifstream inf;
    inf.open("Person.DAT", ios::binary);
    if(!inf)
    {
        cout << "\nCan't open file\n";
        return;
    }
    n = 0;
    while(true)
    {
        if( inf.eof() )
            break;
        if(!inf)
        {
            cout << "\nCan't read type from file\n";
            return;
        }
        string temp= arrap[n]->type();
            if(temp=="Teacher")
            {
                arrap[n]=new Teacher;
                size=sizeof(Teacher);
            }
            else if (temp=="Student")
            {
                arrap[n]=new Student;
                size=sizeof(Student);
            }
            else
            {
                cout << "\nUnknown type in file\n";
                return;
            }



    inf.read( (char*)arrap[n], size );
    if(!inf)
    {
        cout << "\nCan't read data from file\n";
        return;
    }
    n++;
}
cout << "Reading " << n << " Person\n";
}



int main()
{
    char ch;
    while(true)
    {
        cout << "'a' -- add data "
             "\n'd' -- display data"
             "\n'w' -- write all data to file"
             "\n'r' -- read all  data from file"
             "\n'x' -- exit"
             "\nEnter selection: ";
        cin >> ch;
        if(ch=='a')
        {
            Person::add();
        }
        else if(ch=='d')
        {
            Person::display();
        }else if(ch=='r')
        {
            Person::read();
        }else if(ch=='w')
        {
            Person::write();
        }
        else if(ch=='x')
        {
            exit(0);
        }
        else{
            cout<<"Unknown Command"<<endl;
        }

    }
    return 0;
}
