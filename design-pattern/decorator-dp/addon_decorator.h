#ifndef ADDON_DECORATOR_H
#define ADDON_DECORATOR_H

#include "coffee.h"

class AddonDecorator : public CoffeeDecorator {
    public:
    AddonDecorator(Coffee* coffee) : CoffeeDecorator(coffee) {}
    
    std::string getDescription() const override {
        return coffee->getDescription() + ", Add-on";
    }
    
    double getCost() const override {
        return coffee->getCost() + 2;
    }
};

#endif // ADDON_DECORATOR_H