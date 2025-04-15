#ifndef SIMPLE_COFFEE_H
#define SIMPLE_COFFEE_H

#include "coffee.h"

class SimpleCoffee : public Coffee {
public:
    std::string getDescription() const override {
        return "Simple Coffee";
    }
    
    double getCost() const override {
        return 1.0;
    }
};

#endif // SIMPLE_COFFEE_H 