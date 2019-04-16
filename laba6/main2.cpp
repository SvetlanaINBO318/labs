#include <iostream>
#include <string>
using namespace std;


class Alive {
    protected:
        int age;
        int nogi;
        string food;
    public:
        Alive(int age,int nogi,string food) {
            this->food=food;
            this->age = age;
            this->nogi = nogi;
        }
        virtual void action() = 0;
};

class Bird: public Alive {
    private:
        bool peria;
    public:
        Bird(int age, int nogi, string food ,bool peria) : Alive(age,nogi,food) {
           this->peria = peria;
        }

        void action() {
            cout << "Fly" << endl;
        }

};

class Fish: public Alive {
    private:
        bool zabri;
    public:
        Fish(int age,int nogi,string food, bool zabri): Alive(age, nogi,food) {
                this->zabri=zabri;
        }

        void action() {
            cout << "Swim" << endl;
        }


};

class Animal: public Alive {
    protected:
        string food;
    private:
       bool kluv;
    public:
        Animal(int age,int nogi,string food,bool kluv ): Alive(age, nogi,food) {
                this->kluv=kluv;
        }

};
