#include <iostream>
#include <string>
using namespace std;

class Human {
    protected:
        string name; //имя
        string surname; //фамилия
        string midname; //второе имя (?) отчество
        int age;
    public:
        Human()  {}
        Human(string name, string surname, string midname, int age) {
            this->name = name;
            this->surname = surname;
            this->midname = midname;
            this->age = age;
        }
        virtual void print() = 0;
        virtual ~Human();
};

class Student : public Human {
    private:
        bool on_lesson;
    public:
        Student() : Human() {
            on_lesson = true;
        }

        Student(string name, string surname, string midname, int age, bool on_lesson) : Human(name,surname,midname,age) {
            this->on_lesson = on_lesson;
        }

        void print() {
            cout << "Name : " << name << endl<< "Surname:  " << surname << endl << "Midname : " << midname << endl
            << "Age : " << age << endl << "Na yroke? " << ((on_lesson) ? "Yes" : "NO") << endl;
        }
        ~Student();
};


class Boss: public Human {
    private:
        int number_of_workers;
    protected:
        Boss() : Human() {
            number_of_workers = 0;
        }

        Boss(string name, string surname, string midname, int age, int workers) : Human(name,surname,midname,age) {
            number_of_workers = workers;
        }

        void print() {
            cout << "Name : " << name << endl<< "Surname:  " << surname << endl << "Midname : " << midname << endl
            << "Age : " << age <<  "Kol-vo podchinennix " << number_of_workers << endl;
        }
        ~Boss();
};
