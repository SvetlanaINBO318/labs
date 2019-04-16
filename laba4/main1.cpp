#include <iostream>
#include <string>
using namespace std;

class Child {
private:
    string firstname;     //имя
    string name;          //фамилия
    int old;              //возраст
public:
    Child(){ }
    Child(string firstname, string name, int old) {
               this->firstname = firstname;
               this->name = name;
               this->old = old;
           }
    void show() {
        cout << " Imya " << firstname<< endl << " Familia " << name<< endl << " Vozrast " << old << endl;
    }
};

int main()
{
    Child c1((string)"Kate", (string)"Ivanova", 30);
    Child c2((string)"Polly",(string)"Petrova",67);
    c1.show();
    c2.show();                        //вывод на экран
    return 0;

}
