#include <iostream>

// Just a dummy sensor reading value
int moistureSensorReading = 0;

void shutdownSafely() {
    std::cout << "Water detected! Safely shutting down the system...\n";

    // Code to perform a safe shutdown here...

    exit(0);  // or appropriate action.
}

extern "C" void KernelMain()
{
    while(true);  // Creates an infinite loop
}

int main() {
    // Typically, you will not just read the value once.
    // It will usually be in a loop, continuously monitoring the sensor.
    if (moistureSensorReading > 100) {  // Threshold value - this might vary between sensors and devices.
        shutdownSafely();
    }

    return 0;
}
