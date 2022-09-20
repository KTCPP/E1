#pragma once
#include <string>
#include <sstream>

class Car {
public:
	Car() : PS(258), Reifendruck(2.5), Namen("Ente"), Besitzer("Max") {

	}
	std::ostream& drucke(std::ostream& out);
protected:
	int PS;
	double Reifendruck;
	std::string Namen;
	std::string Besitzer;
};
std::ostream& operator<<(std::ostream& out, Car& right) {
	right.drucke(out);
	return out;
	}
