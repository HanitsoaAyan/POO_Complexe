#include "complexe.h"
#include <iostream>

using namespace com;
using namespace std;

int main()
{
    Complexe nb1 = Complexe();
    Complexe nb2 = Complexe();

    int reel;
    int im;

    cout << "Entrez le numerateur==> ";
    cin >> reel;
    nb1.setReal(reel);
    cout << "Entrez le denominateur==> ";
    cin >> im;
    nb1.setImaginary(im);

    cout << "--------------------" << endl;

    cout << "Entrez le numerateur==> ";
    cin >> reel;
    nb2.setReal(reel);
    cout << "Entrez le denominateur==> ";
    cin >> im;
    nb2.setImaginary(im);

    nb1.addition(nb2);
    cout << "--------------------" << endl;
    nb1.soustraction(nb2);
    cout << "--------------------" << endl;
    nb1.multiplication(nb2);
    cout << "--------------------" << endl;

}