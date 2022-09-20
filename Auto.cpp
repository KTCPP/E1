#include "pch.h"
#include "Auto.h"


std::ostream& Car::drucke(std::ostream &out) {
	std::string text;
	text += "PS: " + std::to_string(PS) + "\n";
	text += "Bar: " + std::to_string(Reifendruck) + "\n";
	text += "Autoname: " + Namen + "\n";
	text += "Halter: " + Besitzer + "\n";
	out << text;
	return out;


}
std::ostream& operator<<(std::ostream& out, Car& right) {
	right.drucke(out);
	return out;
	}
