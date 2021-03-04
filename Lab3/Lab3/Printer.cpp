#include "Printer.h"
#include <iostream>
#include <stdarg.h>
#include <cstdarg>
#include <stdlib.h>
using namespace std;


void Printer::PrintAdd(int x, int y)
{
    cout << x + y << endl;
}

void Printer::PrintAdd(int x, int y, int z)
{
    cout << x + y + z << endl;
}

void Printer::PrintAdd(double x, double y)
{
    cout << x + y << endl;
}

void Printer::PrintAdd(double x, double y, double z)
{
    cout << x + y + z << endl;
}

void Printer::PrintMul(int x, int y)
{
    cout << x * y << endl;
}

void Printer::PrintMul(int x, int y, int z)
{
    cout << x * y * z << endl;
}

void Printer::PrintMul(double x, double y)
{
    cout << x * y << endl;
}

void Printer::PrintMul(double x, double y, double z)
{
    cout << x * y * z << endl;
}

void Printer::PrintAdd(int count, ...)
{
    int result = 0;
    va_list argumente;
    va_start(argumente, count);
    for (int i = 0; i < count; i++) {
        result = result + va_arg(argumente, int);
    }
    va_end(argumente);
    cout << result << endl;
}

void Printer::PrintAdd(const char* a, const char* b)
{
    if (a == nullptr || b == nullptr) {
        cout<< "One of strings is none" << endl;
    }
    else {
        char* x;
        x = (char*)malloc(((strlen(a) + strlen(b) + 1) * sizeof(char)));
        memcpy(x, a, strlen(a));
        memcpy(x + strlen(a), b, strlen(b) + 1);
        cout<< x << endl;
    }
}


