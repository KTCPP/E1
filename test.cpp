#include "pch.h"
#include "Auto.h"

TEST(Car, drucke) {
	Car Ente;
	std::stringstream out;
	Ente.drucke(out);
	std::string expected;
	std::string Autoname = "Ente";
	std::string Halter = "Max";
	expected += "PS: " + std::to_string(258) + "\n";
	expected += "Bar: " + std::to_string(2.5) + "\n";
	expected += "Autoname: " + Autoname + "\n";
	expected += "Halter: " + Halter + "\n";
	EXPECT_EQ(out.str(), expected);
	std::cout << "Ente:" << Ente << std::endl;
}