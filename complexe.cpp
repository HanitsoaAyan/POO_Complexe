#include "complexe.h"
#include <iostream>

using namespace std;

Complexe::Complexe()
{

}
Complexe::~Complexe()
{

}
int Complexe::getReal()
{
    return real;
}
int Complexe::getImaginary()
{
    return imaginary;
}
void Complexe::setReal(int nb)
{
    real = nb;
}
void Complexe::setImaginary(int nb)
{
    imaginary = nb;
}
Complexe Complexe::addition(Complexe nb)
{
    int reel;
    int im;

    cout << "Addition" << endl;
    reel = real + nb.getReal();
    im = imaginary + nb.getImaginary();

    nb.setReal(reel);
    nb.setImaginary(im);

    cout << reel <<  "+"  <<  im << "i";
    cout << endl;

    return *this;
}
Complexe Complexe::soustraction(Complexe nb)
{
    int reel;
    int im;

    cout << "Soustraction" << endl;
    reel = real - nb.getReal();
    im = imaginary - nb.getImaginary();

    nb.setReal(reel);
    nb.setImaginary(im);

    cout << reel << "-" <<"(" << im << ")" << "i";
    cout << endl;

    return *this;
}
Complexe Complexe::multiplication(Complexe nb)
{
    int re;
    int im;

    re = (real * nb.getReal()) - (imaginary * nb.getImaginary());
    im = (nb.getImaginary() * real) +  (imaginary * nb.getReal());

    nb.setReal(re);
    nb.setImaginary(im);
    cout << re << "+" <<"(" << im << ")" << "i";
    cout << endl;

    return *this;
}