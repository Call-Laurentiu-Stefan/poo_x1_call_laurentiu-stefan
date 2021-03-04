#include "Canvas.h"
#include <iostream>
using namespace std;

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;
	for (int i = 0; i < width; i++)
		for (int j = 0; j < height; j++)
			a[i][j] = 32;
}

void Canvas::DrawCircle(int xc, int yc, int r, char c) {
	int x = 0, y = r;
	int d = 3 - 2 * r;
	SetPoint(xc + x, yc + y, c);
	SetPoint(xc - x, yc + y, c);
	SetPoint(xc + x, yc - y, c);
	SetPoint(xc - x, yc - y, c);
	SetPoint(xc + y, yc + x, c);
	SetPoint(xc - y, yc + x, c);
	SetPoint(xc + y, yc - x, c);
	SetPoint(xc - y, yc - x, c);
	while (y >= x)
	{
		x++;
		if (d > 0)
		{
			y--;
			d = d + 4 * (x - y) + 10;

		}
		else {
			d = d + 4 * (x - y) + 6;
			SetPoint(xc + x, yc + y, c);
			SetPoint(xc - x, yc + y, c);
			SetPoint(xc + x, yc - y, c);
			SetPoint(xc - x, yc - y, c);
			SetPoint(xc + y, yc + x, c);
			SetPoint(xc - y, yc + x, c);
			SetPoint(xc + y, yc - x, c);
			SetPoint(xc - y, yc - x, c);
		}
	}
}

void Canvas::FillCircle(int x, int y, int r, char c) {
	for (int i = 0; i < r; i++) {
		DrawCircle(x, y, i, c);
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char c) {
	for (int i = left; i <= right; i++) {
		a[top][i] = c;
		a[bottom][i] = c;
	}
	for (int j = top; j <= bottom; j++) {
		a[j][left] = c;
		a[j][right] = c;
	}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char c) {
	for (int i = left + 1; i <= right - 1; i++) {
		for (int j = top + 1; j <= bottom - 1; j++) {
			a[j][i] = c;
		}
	}
}

void Canvas::SetPoint(int x, int y, char c) {
	a[x][y] = c;
}


void Canvas::DrawLine(int x0, int y0, int x1, int y1, char c) {
	int dx, dy, p, x, y;

	dx = x1 - x0;
	dy = y1 - y0;

	x = x0;
	y = y0;

	p = 2 * dy - dx;

	while (x < x1)
	{
		if (p >= 0)
		{
			SetPoint(x, y, c);
			y = y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			SetPoint(x, y, c);
			p = p + 2 * dy;
		}
		x = x + 1;
	}

}

void Canvas::Print() {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

void Canvas::Clear() {
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			a[i][j] = 32;
		}
	}
}
