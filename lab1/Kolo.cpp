#include "Kolo.h"
#include <iostream>

using namespace std;

Kolo::Kolo(double a) : a(a)
{
    cout << "Konstruktor Koła(" << a << ")" << endl;
}

double Kolo::GetA() const
{
    return a;
}

void Kolo::SetA(double a)
{
    this->a = a;
}

double Kolo::Obwod()
{
    return 2 * a * M_PI;
}

double Kolo::Pole()
{
    return a * a * M_PI;
}

void Kolo::Wypisz(std::ostream &out) const
{
    out << "Koło(" << a << ")";
}

Kolo::~Kolo()
{
    cout << "Destruktor Koła(" << a << ")" << endl;
}
