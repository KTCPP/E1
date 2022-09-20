#pragma once
#include <string>
#include <sstream>

class Auto {
public:
	Auto() : PS(258), Reifendruck(2.5), Namen("Ente"), Besitzer("Max") {

	}
	std::ostream& drucke(std::ostream& out);
protected:
	int PS;
	double Reifendruck;
	std::string Namen;
	std::string Besitzer;
};
std::ostream& operator<<(std::ostream& out, const Auto& right) {
	return right.drucke(out);
	}
