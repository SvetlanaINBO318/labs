#include "Complex.h"


Complex sum(Complex a, Complex b) {
        Complex result;
        result.re = a.re + b.re;
        result.im = a.im + b.im;
        return result;
}

Complex raz(Complex a, Complex b) {
        Complex result;
        result.re = a.re - b.re;
        result.im = a.im - b.im;
        return result;
}

Complex umn(Complex a, Complex b) {
        Complex result;
        result.re = a.re*b.re - a.im*b.im;
        result.im = a.re * b.im + b.re * a.im;
        return result;
}

Complex del(Complex a, Complex b) {
        Complex result;
        result.re = (a.re * b.re + a.im * b.im) / (pow(b.re, 2) + pow(b.im, 2));
        result.im = (b.re * a.im - a.re * b.im) / (pow(b.re, 2) + pow(b.im, 2));
        return result;
}

float abs(Complex a) {
    return sqrt(pow(a.re,2) + pow(a.im,2));
}
