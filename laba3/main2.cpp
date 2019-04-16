#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:                           //параметры
    string material;
    int size_h;
    int size_w;
    int price;
    void getData() {
        cout << "Sdelan iz " <<material<<" visota "<<size_h<<" sirina "<<size_w<<" stoimost "<<price<< endl;
    }
};

int main() {
    Tiles t1, t2;
    t1.material = "mramor";
    t1.size_h = 150;
    t1.size_w = 500;
    t1.price = 4000;
    t2.material = "poddelka";
    t2.size_h = 300;
    t2.size_w = 400;
    t2.price = 300;
    t1.getData();
    t2.getData();
    return 0;
}
