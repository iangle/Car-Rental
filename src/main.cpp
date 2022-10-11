#include <iostream>
#include "Truck.h"
#include "SportsCar.h"
#include "Sedan.h"

int main() {

    Car* truck = new Truck();
    Car* sportsCar = new SportsCar();
    Car* sedan = new Sedan();

    truck->print_info();
    sportsCar->print_info();
    sedan->print_info();

    delete truck;
    delete sportsCar;
    delete sedan;

    return 0;
}
