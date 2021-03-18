#include "Complex.h"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0;
}

double Complex::real() const
{
    return real_data;
}

double Complex::imag() const
{
    return imag_data;
}

void Complex::setReal(double x)
{
    this->real_data = x;
}

void Complex::setImag(double x)
{
    this->imag_data = x;
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
    return { real(), -imag() };
}


Complex operator+(const Complex& l, const Complex& r)
{
    Complex nou(l.real(), l.imag());
    nou.setReal(r.real() + nou.real());
    nou.setImag(r.imag() + nou.imag());
    return nou;
}

Complex operator+(const Complex& l, double r)
{
    Complex nou(l.real(), l.imag());
    nou.setReal(nou.real() + r);
    return nou;
}

Complex operator+(double l, const Complex& r)
{
    Complex nou(r.real(), r.imag());
    nou.setReal(nou.real() + l);
    return nou;
}

Complex operator-(const Complex& l, const Complex& r)
{
    Complex nou(l.real(), l.imag());
    nou.setReal(nou.real() - r.real());
    nou.setImag(nou.imag() - r.imag());
    return nou;
}

Complex operator-(const Complex& l, double r)
{
    Complex nou(l.real(), l.imag());
    nou.setReal(nou.real() - r);
    return nou;
}

Complex operator-(double l, const Complex& r)
{
    Complex nou(r.real(), r.imag());
    nou.setReal(l - nou.real());
    return nou;
}

Complex operator-(const Complex& obj)
{
    Complex nou(obj.real(), obj.imag());
    nou.setReal(-nou.real());
    nou.setImag(-nou.imag());
    return nou;
}

//Complex operator++(int)
//{
//    Complex nou(this->getX());
//    ++(*this);
//    return nou;
//}
//
//Complex& operator++()
//{
//    this->x += 1;
//    return *this;
//}
