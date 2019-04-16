#include <cmath>
#include <iostream>
using namespace std;

class Vector {
private:
    float x;            //вектор
    float y;
public:
    void VVOD(float a, float b) {  //вводим
        this->x = a;
        this->y = b;
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
    Vector v1,v2;
    v1.VVOD(9,18);
    v2.VVOD(43, 28);
    v1.SLOZ(v2);
    v1.show();
    v1.Vichet(v2);
    v1.show();
    return 0;
}
