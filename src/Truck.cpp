//
// Created by isaac.angle on 10/11/2022.
//

#include "Truck.h"

Truck::Truck() {
    name = "Truck";
    year = "2005";
    make = "Ford";
    model = "F-150";
    color = "Silver";
}

void Truck::print_info(){
    cout << "car information:" << endl;
    cout << "name: " + name << endl;
    cout << "year: " + year << endl;
    cout << "make: " + make << endl;
    cout << "model: " + model << endl;
    cout << "color: " + color << endl;
}

string Truck::get_name(){ return name; }
string Truck::get_model(){ return model; }
string Truck::get_make(){ return make; }
string Truck::get_year(){ return year; }
string Truck::get_color(){ return color; }
