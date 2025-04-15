#ifndef MILK_DECORATOR_H
#define MILK_DECORATOR_H

#include "coffee.h"

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(Coffee* coffee) : CoffeeDecorator(coffee) {}
    
    std::string getDescription() const override {
        return coffee->getDescription() + ", Milk";
    }
    
    double getCost() const override {
        return coffee->getCost() + 0.5;
    }
};

#endif // MILK_DECORATOR_H 