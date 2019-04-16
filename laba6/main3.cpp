#include <iostream>
#include <string>
using namespace std;


class Animal {
    protected:
        int age;
        int nogi;
        string food;
    public:
        Animal(int age,int nogi,string food) {
            this->food=food;
            this->age = age;
            this->nogi = nogi;
        }
        virtual void action() = 0;
};

class Dog: public Animal {
    private:
       int speed_NAPADENIA;
    public:
        Dog(int age, int nogi, string food ,int speed_NAPADENIA) : Animal(age,nogi,food) {
           this->speed_NAPADENIA = speed_NAPADENIA;
        }

        void action() {
            cout << "RUN" << endl;
        }

};

class Cat: public Animal {
    private:
       int OPASNOST;
    public:
        Cat(int age,int nogi,string food, int OPASNOST): Animal(age,nogi,food) {
                this->OPASNOST=OPASNOST;
        }

        void action() {
            cout << "WATCH" << endl;
        }


};
