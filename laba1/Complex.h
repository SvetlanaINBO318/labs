#ifndef CO_H
#define CO_H
#include <iostream>
#include <cmath>
using namespace std;

class Complex {
public:
        float re;
        float im;
};

Complex sum(Complex a, Complex b);// plus
Complex raz(Complex a, Complex b);// minus
Complex umn(Complex a, Complex b);// umnoz
Complex del(Complex a, Complex b);// delenie
float abs(Complex a);//modul

#endif
