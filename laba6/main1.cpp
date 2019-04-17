#include <iostream>
#include <string>
using namespace std;


class Student {                                           // основсной класс студента
    public:
        string name;
        string family;
        string group;
        int age;
        Student(){}
        Student(string name, string family, string group, int age) {
            this->name = name;
            this->family = family;
            this->group = group;
            this->age = age;
        }
};

class STAROSTA: public Student {                      //староста от студента
    public:
        int reiting;
        string phone;
        STAROSTA(string name, string family, string group, int age,int reiting, string phone) : Student(name,family,group,age) {
            this->reiting = reiting;
            this->phone = phone;
        }
};
