#pragma once
#include <string>
#include <sstream>

class Car {
public:
	Car() : PS(258), Reifendruck(2.5), Namen("Ente"), Besitzer("Max") {

	}
	std::ostream& drucke(std::ostream& out);
	friend std::ostream& operator<<(std::ostream& out, Car& right);
protected:
	int PS;
	double Reifendruck;
	std::string Namen;
	std::string Besitzer;
};
