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

    Vector& operator= (Vector& a) {                                     //присвоение
        this->x = a.x;
        this->y = a.y;
        return *this;
    }

    friend bool operator== (const Vector& a, const Vector& b) {         //сравнение
        bool x1 = a.x == b.x;
        bool y1 = a.y == b.y;
        return x1 && y1;
    }

    friend ostream& operator<< (ostream& f, const Vector& a) {          //вывод
        f << "( " << a.x << " , " << a.y << " )" << endl;
        return f;
    }

    friend istream& operator>> (istream& f, const Vector& k) {          //ввод
        f >> k.x >> k.y;
        return f;
    }
    float mod() {                 //модуль
        return sqrt(pow(x,2) + pow(y,2));
    }

    void SLOZ(Vector b) {  //сложение
        x += b.x;
        y += b.y;
    }

    void Vichet(Vector b) {     //вычитание
        x -= b.x;
        y -= b.y;
    }
    void show() {         //показ на экран (мини премьера)
        cout << x << " " << y << endl;
    }
};
