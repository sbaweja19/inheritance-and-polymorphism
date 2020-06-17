#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

#include "PreMadeItem.h"

using namespace std;


PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size){
	this->name = name;
	if(this->size == "small")
		this->price = 4.00;
	else if (this->size == "medium")
		this->price = 6.00;
	else if (this->size == "large")
		this->price = 7.50;
}

PreMadeItem::~PreMadeItem(){}

double PreMadeItem::getPrice(){
	return this->price;
}

string PreMadeItem::composeItem(){
	string out = "Pre-made Size: " + this->size + "\n";
	out += "Pre-made Item: ";
	out += this->name;
	out += "\nPrice: $";
	stringstream stream;
	stream << fixed << setprecision(2) << this->price;
	out += stream.str() + "\n";
	return out;
}