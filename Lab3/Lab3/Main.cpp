#include <iostream>
#include <stdio.h>
#include "Printer.h"
#include "Canvas.h"

using namespace std;


int main() {
	/*Printer p;
	p.PrintAdd(5, 8);
	p.PrintAdd(3.64, 2.32, 3.153);
	p.PrintAdd("aer ", "curat");
	p.PrintAdd(4, 3, 5 ,7 ,3);
	p.PrintMul(7, 2);
	p.PrintMul(3.62, 63.2683);*/
	Canvas c(10, 10);
	c.Print();
	cout << endl;
	c.DrawRect(3, 1, 5, 5, 'L');
	c.Print();
	cout << endl;
	c.FillRect(3, 1, 5, 5, 'B');
	c.Print();
	c.Clear();
	cout << endl;
	c.DrawRect(3, 5, 7, 9, 'R');
	c.Print();
	c.Clear();
	cout << endl;
	c.DrawLine(3, 3, 10, 7, 'X');
	c.Print();
	c.Clear();
	return 0;
}