//Sanil Baweja
//3010642

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <map>
#include <iterator>

#include "IceCreamItem.h"

class CustomItem : public IceCreamItem{
public:
	CustomItem(std::string size);
	virtual ~CustomItem();
	void addTopping(std::string topping);
	virtual double getPrice();
	virtual std::string composeItem();
private:
	std::map<std::string, int> toppings;
	//double getPrice();
};

#endif