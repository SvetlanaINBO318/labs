#include <iostream>
#include <string>
using namespace std;

class Tiles {
public:                           //параметры
    string material;
    int size_h;
    int size_w;
    int price;
    Tiles (){}
    Tiles (string material,int size_h, int size_w,int price){
                  this->material = material;
                  this->size_h = size_h;
                  this->size_w = size_w;
                  this->price = price;
    }
    void getData() {
        cout << "Sdelan iz " <<material<<" visota "<<size_h<<" sirina "<<size_w<<" stoimost "<<price<< endl;
    }
};

int main() {
    Tiles t1((string)"Mramor", 320,150,4000);
    Tiles t2((string)"Poddelka", 320,150,300);
    t1.getData();
    t2.getData();
    return 0;
}
