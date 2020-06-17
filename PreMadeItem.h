//Sanil Baweja
//3010642

#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <string>
#include <map>
#include <iterator>
#include "IceCreamItem.h"


class PreMadeItem : public IceCreamItem{
public:
	PreMadeItem(std::string name, std::string size);
	virtual ~PreMadeItem();
	//getName() {return name;}
	virtual double getPrice();
	virtual std::string composeItem();
private:
	std::string name;
};

#endif