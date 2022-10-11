//
// Created by isaac.angle on 10/11/2022.
//

#include "SportsCar.h"

SportsCar::SportsCar() {
    name = "Sports Car";
    year = "2020";
    make = "Ford";
    model = "Mustang";
    color = "Red";
}

void SportsCar::print_info(){
    cout << "car information:" << endl;
    cout << "name: " + name << endl;
    cout << "year: " + year << endl;
    cout << "make: " + make << endl;
    cout << "model: " + model << endl;
    cout << "color: " + color << endl;
}

string SportsCar::get_name(){ return name; }
string SportsCar::get_model(){ return model; }
string SportsCar::get_make(){ return make; }
string SportsCar::get_year(){ return year; }
string SportsCar::get_color(){ return color; }