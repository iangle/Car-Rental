//
// Created by isaac.angle on 10/11/2022.
//

#ifndef UNTITLED_SPORTSCAR_H
#define UNTITLED_SPORTSCAR_H

#include <iostream>
#include <string>
#include "Car.h"

using std::string;
using std::cout;
using std::endl;

class SportsCar: virtual public Car{
private:
    string name, model, make, year, color;

public:
    SportsCar();
    void print_info();
    string get_name();
    string get_model();
    string get_make();
    string get_year();
    string get_color();
};


#endif //UNTITLED_SPORTSCAR_H
