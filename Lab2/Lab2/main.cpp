#include <cstdio>
#include "NumberList.h"
#include <iostream>
#include "Phone.h"
#include "Global.h"

using namespace std;


int main() {
	NumberList number;
	number.Init();
	number.Add(5);
	number.Add(2);
	number.Add(18);
	number.Add(13);
	number.Add(39);
	number.Print();
	number.Sort();
	number.Print();

	/*Phone p1;
	Phone p2;
	const char* n1 = "Nokia";
	const char* n2 = "Samsung";
	p1.setName(*n1);
	p1.setNumberOfStars(3.6);
	p1.setPrice(88);
	p1.setUserRating(7.4);
	cout << p1.avgPPS();
	p2.setName(*n2);
	p1.setNumberOfStars(4.7);
	p1.setPrice(200);
	p1.setUserRating(9.5);
	cout << p2.avgPPS();
	Global func;
	cout << func.compareName(p1, p2) << "\n";*/
	/*cout<<func.compareNumberOfStars(p1, p2) <<"\n";
	cout << func.comparePrice(p1, p2) << "\n";
	cout << func.compareRating(p1, p2) << "\n";*/



}