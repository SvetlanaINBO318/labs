#include <iostream>
#include <string>
using namespace std;

class Child {
private:
    string firstname;     //имя
    string name;          //фамилия
    int old;              //возраст
public:
    void VVOD_firstname(string firstname){
        this->firstname = firstname;
    }
    void VVOD_name(string name) {
        this->name = name;
    }
    void VVOD_OLD(int old) {
        this->old = old;
    }
    void show() {
        cout << " Imya " << firstname<< endl << " Familia " << name<< endl << " Vozrast " << old << endl;
    }
};

int main()
{
    Child c1, c2;
    c1.VVOD_firstname((string)"Kate"); //ввод параметров
    c1.VVOD_name((string)"Ivanova");
    c1.VVOD_OLD(30);
    c2.VVOD_firstname((string)"Nelly");
    c2.VVOD_name((string)"Petrova");
    c2.VVOD_OLD(3);
    c1.show();
    c2.show();                        //вывод на экран
    return 0;

}
