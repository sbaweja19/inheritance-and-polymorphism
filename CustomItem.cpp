#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "CustomItem.h"

using namespace std;


CustomItem::CustomItem(string size) : IceCreamItem(size){
	if(this->size == "small")
		this->price = 3.00;
	else if (this->size == "medium")
		this->price = 5.00;
	else if (this->size == "large")
		this->price = 6.50;
}

CustomItem::~CustomItem(){}

void CustomItem::addTopping(string topping){
	toppings[topping] = toppings[topping] += 1;
	
	this->price += 0.40;
}

double CustomItem::getPrice(){
	return this->price;
}

string CustomItem::composeItem(){
	string out = "Custom Size: " + this->size + "\n";
	out += "Toppings:\n";
	for(std::map<std::string, int>::iterator it = toppings.begin(); it != toppings.end(); it++){
		out += it->first + ": " + to_string(it->second) + " oz\n";
	}

	out += "Price: $";
	stringstream stream;

	stream << fixed << setprecision(2) << this->price << "\n";
	out += stream.str();
	return out;

}