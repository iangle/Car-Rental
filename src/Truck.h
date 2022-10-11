//
// Created by isaac.angle on 10/11/2022.
//

#ifndef UNTITLED_TRUCK_H
#define UNTITLED_TRUCK_H


#include <iostream>
#include <string>
#include "Car.h"

using std::string;
using std::cout;
using std::endl;

class Truck: virtual public Car{
private:
    string name, model, make, year, color;

public:
    Truck();
    void print_info();
    string get_name();
    string get_model();
    string get_make();
    string get_year();
    string get_color();
};


#endif //UNTITLED_TRUCK_H
