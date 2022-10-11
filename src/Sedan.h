//
// Created by isaac.angle on 10/11/2022.
//

#ifndef UNTITLED_SEDAN_H
#define UNTITLED_SEDAN_H


#include <iostream>
#include <string>
#include "Car.h"

using std::string;
using std::cout;
using std::endl;

class Sedan: virtual public Car{
private:
    string name, model, make, year, color;

public:
    Sedan();
    void print_info();
    string get_name();
    string get_model();
    string get_make();
    string get_year();
    string get_color();
};


#endif //UNTITLED_SEDAN_H
