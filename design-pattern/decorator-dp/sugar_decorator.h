#ifndef SUGAR_DECORATOR_H
#define SUGAR_DECORATOR_H

#include "coffee.h"

class SugarDecorator : public CoffeeDecorator {
public:
    SugarDecorator(Coffee* coffee) : CoffeeDecorator(coffee) {}
    
    std::string getDescription() const override {
        return coffee->getDescription() + ", Sugar";
    }
    
    double getCost() const override {
        return coffee->getCost() + 0.2;
    }
};

#endif // SUGAR_DECORATOR_H 