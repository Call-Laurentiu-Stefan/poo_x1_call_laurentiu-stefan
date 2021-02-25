#pragma once
#include "Phone.h"
#include <string.h>
class Global
{
public:
	int compareName(Phone& p1, Phone& p2);
	
	int compareNumberOfStars(Phone& p1, Phone& p2);
	
	int comparePrice(Phone& p1, Phone& p2);

	int compareRating(Phone& p1, Phone& p2);
};

