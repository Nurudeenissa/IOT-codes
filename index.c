cpp
#include <iostream>

class SmartMeter {
private:
    double energyConsumed;
    double energyGenerated;

public:
    SmartMeter() : energyConsumed(0.0), energyGenerated(0.0) {}

    void recordConsumption(double consumed) {
        energyConsumed += consumed;
    }

    void recordGeneration(double generated) {
        energyGenerated += generated;
    }

    double getTotalConsumption() const {
        return energyConsumed;
    }

    double getTotalGeneration() const {
        return energyGenerated;
    }
};

int main() {
    SmartMeter meter;

    // Simulating energy consumption and generation
    meter.recordConsumption(100.0);
    meter.recordConsumption(50.0);
    meter.recordGeneration(75.0);

    double totalConsumption = meter.getTotalConsumption();
    double totalGeneration = meter.getTotalGeneration();

    std::cout << "Total Energy Consumption: " << totalConsumption << " kWh" << std::endl;
    std::cout << "Total Energy Generation: " << totalGeneration << " kWh" << std::endl;

    return 0;
}