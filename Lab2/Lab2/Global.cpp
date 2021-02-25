#include "Global.h"

int Global::compareName(Phone& p1, Phone& p2)
{
	return (strcmp((const char*)p1.getName(), (const char*)p2.getName()));
}

int Global::compareNumberOfStars(Phone& p1, Phone& p2)
{
	if (p1.getNumberOfStars() > p2.getNumberOfStars()) {
		return 1;
	}
	else if (p1.getNumberOfStars() < p2.getNumberOfStars()) {
		return -1;
	}
	else {
		return 0;
	}
}

int Global::comparePrice(Phone& p1, Phone& p2)
{
	if (p1.getPrice() > p2.getPrice()) {
		return 1;
	}
	else if (p1.getPrice() < p2.getPrice()) {
		return -1;
	}
	else {
		return 0;
	}
}

int Global::compareRating(Phone& p1, Phone& p2)
{
	if (p1.getUserRating() > p2.getUserRating()) {
		return 1;
	}
	else if (p1.getUserRating() < p2.getUserRating()) {
		return -1;
	}
	else {
		return 0;
	}
}
