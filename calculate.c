#include <iostream>

double calculateCarbonCredits(double energyConsumed) {
    const double carbonFactor = 0.5; // Carbon factor for energy conversion (example value)
    const double carbonCreditPerUnit = 0.1; // Carbon credit per unit of energy (example value)

    double carbonEmissions = energyConsumed * carbonFactor;
    double carbonCredits = carbonEmissions * carbonCreditPerUnit;
  
    return carbonCredits;
}

int main() {
    double energyConsumed;

    std::cout << "Enter energy consumed (in kilowatt-hours): ";
    std::cin >> energyConsumed;

    double carbonCredits = calculateCarbonCredits(energyConsumed);

    std::cout << "Carbon credits earned: " << carbonCredits << std::endl;

    return 0;
	}