#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
    float re;
    float im;
public:
    void VVOD_RE(float RE) {
        this->re = RE;
    }
    void VVOD_IM(float IM) {
        this->im = IM;
    }
    float mod() {
        return sqrt(pow(re,2) + pow(im,2));
    }

    float arg() {
        float itog;
        if (re > 0)  itog = atan(im / re);
        else if (re == 0) {
            if (re > 0)  itog = M_PI / 2;
            else itog = M_PI / 2;
        }
        else {
            if (im >= 0)  itog = M_PI + atan(im / re);
            else  itog = -M_PI + atan(im / re);
        }
        return itog;
    }

    void show() {
        cout << " MOD = " << this->mod() << " ARG =" << this->arg() << endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.VVOD_RE(30);
    c2.VVOD_RE(15);
    c1.VVOD_IM(4);
    c2.VVOD_IM(-3);
    c1.show();
    c2.show();
    return 0;
}
