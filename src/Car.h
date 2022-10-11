//
// Created by isaac.angle on 10/11/2022.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H


#include <string>

using std::string;

class Car{

private:
    string name, model, make, year, color;

public:
    virtual void print_info() {};
    virtual string get_name() {};
    virtual string get_model() {};
    virtual string get_make() {};
    virtual string get_year() {};
    virtual string get_color() {};
};


#endif //UNTITLED_CAR_H
