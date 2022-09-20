#pragma once
#include <string>

class Auto {
public:
	Auto() : PS(258), Reifendruck(2.5), Namen("Ente"), Besitzer("Max Mustermann") {

	}
	std::ostream& drucke();
protected:
	int PS;
	double Reifendruck;
	std::string Namen;
	std::string Besitzer;
};
