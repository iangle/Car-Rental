//
// Created by isaac.angle on 10/11/2022.
//

#include "Sedan.h"

Sedan::Sedan() {
    name = "Sedan";
    year = "2010";
    make = "Toyota";
    model = "Camry";
    color = "Silver";
}

void Sedan::print_info(){
    cout << "car information:" << endl;
    cout << "name: " + name << endl;
    cout << "year: " + year << endl;
    cout << "make: " + make << endl;
    cout << "model: " + model << endl;
    cout << "color: " + color << endl;
}

string Sedan::get_name(){ return name; }
string Sedan::get_model(){ return model; }
string Sedan::get_make(){ return make; }
string Sedan::get_year(){ return year; }
string Sedan::get_color(){ return color; }