#pragma once
class Phone
{
	char name;
	float numberOfStars, price, userRating;

public:
	void setName(char n);
	int getName();
	void setNumberOfStars(float n);
	int getNumberOfStars();
	void setPrice(float n);
	int getPrice();
	void setUserRating(float n);
	int getUserRating();
	int avgPPS();
};

