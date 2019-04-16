#include <cmath>
#include <iostream>
using namespace std;

class Vector {
private:
    float x;            //вектор
    float y;
public:
    Vector(){}
    Vector(float x, float y){
        this->x = x;
        this->y = y;
    }
    float mod() {                 //модуль
        return sqrt(pow(x,2) + pow(y,2));
    };

    void SLOZ(Vector b) {  //сложение
        x += b.x;
        y += b.y;
    };

    void Vichet(Vector b) {     //вычитание
        x -= b.x;
        y -= b.y;
    };
    void show() {         //показ на экран (мини премьера)
        cout << x << " " << y << endl;
    }
};

int main()
{
    Vector v1(12,33);
    Vector v2(32,5);
    v1.SLOZ(v2);
    v1.show();
    v1.Vichet(v2);
    v1.show();
    return 0;
}
