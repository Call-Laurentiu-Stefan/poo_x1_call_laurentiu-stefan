#include "Phone.h"
#include <cstdio>

void Phone::setName(char n)
{
	this->name = n;
}

int Phone::getName()
{
	
	return this->name;
}

void Phone::setNumberOfStars(float n)
{
	this->numberOfStars = n;
}

int Phone::getNumberOfStars()
{
	return this->numberOfStars;
}

void Phone::setPrice(float n)
{
	this->price = n;
}

int Phone::getPrice()
{
	return this->price;
}

void Phone::setUserRating(float n)
{
	this->userRating = n;
}

int Phone::getUserRating()
{
	return this->userRating;
}

int Phone::avgPPS()
{
	return (this->price / this->numberOfStars);
}
